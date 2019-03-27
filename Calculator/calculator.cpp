#include "calculator.h"
#include "ui_calculator.h"
#include<QString>
#include<string>
#include<QDebug>

//calculator类的构造函数
Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

//析构函数
Calculator::~Calculator()
{
    delete ui;
}

//用来存放输入的字符串
QString expression="";



//按键槽函数
void Calculator::on_pushButton_0_clicked()
{
    expression +="0";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_1_clicked()
{
    expression +="1";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_2_clicked()
{
    expression +="2";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_3_clicked()
{
    expression +="3";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_4_clicked()
{
    expression +="4";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_5_clicked()
{
    expression +="5";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_6_clicked()
{
    expression +="6";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_7_clicked()
{
    expression +="7";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_8_clicked()
{
    expression +="8";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_9_clicked()
{
    expression +="9";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_A_clicked()
{
    expression +="A";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_B_clicked()
{
    expression +="B";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_C_clicked()
{
    expression +="C";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_D_clicked()
{
    expression +="D";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_E_clicked()
{
    expression +="E";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_F_clicked()
{
    expression +="F";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_add_clicked()
{
    expression +="+";
    this->ui->label1->setText(expression);
}


void Calculator::on_pushButton_min_clicked()
{
    expression +="-";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_mul_clicked()
{
    expression +="*";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_div_clicked()
{
    expression +="/";
    this->ui->label1->setText(expression);
}


void Calculator::on_pushButton_left_clicked()
{
    expression +="(";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_right_clicked()
{
    expression +=")";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_mod_clicked()
{
    expression +="%";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_pow_clicked()
{
    expression +="^";
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_clearone_clicked()
{
    expression.chop(1);
    this->ui->label1->setText(expression);
}

void Calculator::on_pushButton_clearall_clicked()
{
    this->ui->label2->clear();
    this->ui->label1->clear();
    expression="";
}

void Calculator::on_pushButton_equal_clicked()
{
    string strs;
    strs=expression.toStdString();
    string str=out_foutcome(strs);
    if(str==""){
        expression="0";
        this->ui->label2->setText(expression);}
    else{
    expression = QString::fromStdString(str);
    this->ui->label2->setText(expression);
    }
}


//此函数用来计算结果
string out_foutcome(string input_string)
{
    char hex_array[30][20]={0};        //二维数组用来存放输入的十六进制数
    char operator_array[50] = {0};      //用来存放运算符
    double hex_to_ten[100] = {0};         //用来存放十六进制转成的十进制数
    string ten_operator="";			//此字符串存放十进制和运算符的表达式
    char ten_op[100] = {0};			//此数组存放十进制和运算符的表达式            用于计算
    char ten_op1[100] = {0};
    double outcome = 0;                //十进制运算结果
    char ten_to_hex[100] = {0};           //此数组用来存放运算结果的十六进制数
    int hex_array_index = 0;       //用来记录二维数组下标,也为hex_to_ten下标
    int operator_index_count[50] = {0};			//用于记录运算符在原数组的位置
    int operator_array_index = 0;  //用来记录运算符数组下标
    string strs="";
    split_input_string(input_string, hex_array_index, operator_array, operator_array_index, hex_array,  operator_index_count);
    tran_hex_to_ten(hex_array, hex_to_ten, hex_array_index);
    combine_ten_operator(hex_to_ten, operator_array, ten_operator, hex_array_index,operator_array_index, operator_index_count);
    for (int i = 0; i < ten_operator.length(); i++)
        ten_op[i] = ten_operator.at(i);
    convert2postfix(ten_op, ten_op1);
    outcome = cal(ten_op1);
    tran_ten_to_hex(outcome, ten_to_hex);
    for(int i=0;i<strlen(ten_to_hex);i++)
        strs+=ten_to_hex[i];
    return strs;
}


//此函数用于把输入表达式分为十六进制数和运算符
void split_input_string(string input_string, int &hex_array_index, char operator_array[50], int &operator_array_index, char hex_array[30][20], int operator_index_count[50])
{
    int c = input_string.length();
    for (int i = 0; i < c; i++)
    {
        static int j;
        if (input_string.at(i) == ' ')  //字符串输入空格
        {
            continue;
        }
        if (input_string.at(i) == '+' || input_string.at(i) == '-' || input_string.at(i) == '*' ||
                input_string.at(i) == '/' || input_string.at(i) == '%'|| input_string.at(i) == '(' ||
                input_string.at(i) == ')' ||input_string.at(i)=='^' )
        {
            //考虑到括号的特殊性，须将左括号和右括号分别处理

            //处理左括号
            if (input_string.at(i) == '(')
            {
                operator_array[operator_array_index] = input_string.at(i);
                operator_index_count[operator_array_index] = hex_array_index+operator_array_index;
                operator_array_index++;
                continue;
            }
            //处理右括号
            if (input_string.at(i) == ')')
            {
                operator_array[operator_array_index] = input_string.at(i);
                operator_index_count[operator_array_index] = hex_array_index + operator_array_index+1;
                operator_array_index++;
                continue;
            }
            //处理其他符号
        else
        {
            hex_array[hex_array_index][j] = '\0';
            j = 0;
            hex_array_index++;
            operator_array[operator_array_index] = input_string.at(i);
            operator_index_count[operator_array_index] = hex_array_index + operator_array_index;
            operator_array_index++;
            continue;
        }
        }
        //处理数字
        if (input_string.at(i) == '0' || input_string.at(i) == '1' || input_string.at(i) == '2' || input_string.at(i) == '3' || input_string.at(i) == '4'
            || input_string.at(i) == '5' || input_string.at(i) == '6' || input_string.at(i) == '7' || input_string.at(i) == '8' || input_string.at(i) == '9'
            || input_string.at(i) == '9' || input_string.at(i) == 'A' || input_string.at(i) == 'a' || input_string.at(i) == 'B' || input_string.at(i) == 'b'
            || input_string.at(i) == 'C' || input_string.at(i) == 'c' || input_string.at(i) == 'D' || input_string.at(i) == 'd' || input_string.at(i) == 'E'
            || input_string.at(i) == 'e' || input_string.at(i) == 'F' || input_string.at(i) == 'f')
        {
            hex_array[hex_array_index][j++] = input_string.at(i);
            continue;
        }
    }
}



//此函数将十六进制转为十进制数
void tran_hex_to_ten(char hex_array[30][20], double hex_to_ten[100], const int &hex_array_index)
{
    double sum;
    int len, temp, i, n;
    for (n = 0; n <= hex_array_index; n++)
    {
        sum = 0;
        len = strlen(hex_array[n]);
        for (i = 0; hex_array[n][i] != '\0'; i++)
        {
            switch (hex_array[n][i])
            {
            case 'a': temp = 10; break;
            case 'b': temp = 11; break;
            case 'c': temp = 12; break;
            case 'd': temp = 13; break;
            case 'e': temp = 14; break;
            case 'f': temp = 15; break;
            case 'A': temp = 10; break;
            case 'B': temp = 11; break;
            case 'C': temp = 12; break;
            case 'D': temp = 13; break;
            case 'E': temp = 14; break;
            case 'F': temp = 15; break;
            case '1': temp = 1; break;
            case '2': temp = 2; break;
            case '3': temp = 3; break;
            case '4': temp = 4; break;
            case '5': temp = 5; break;
            case '6': temp = 6; break;
            case '7': temp = 7; break;
            case '8': temp = 8; break;
            case '9': temp = 9; break;
            case '0': temp = 0; break;
            }
            sum += temp * pow(16.0, len - 1 - i);
        }
        hex_to_ten[n] = sum;
    }
}




//此函数将十进制转为十六进制数
void tran_ten_to_hex(double &outcome, char ten_to_hex[100])
{
    if (outcome >= 0) {
        int index = 0;//用来记录十六进制结果下标
        int int_outcome_1 = floor(outcome);//分离整数部分
        double dec_outcome_1 = outcome - int_outcome_1;//分离小数部分
        char _16[] = { '0','1','2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
        while (int_outcome_1) {
            int i = int_outcome_1 % 16;
            ten_to_hex[index] = _16[i]; index++;
            int_outcome_1 /= 16;
        }
        //整数部分逆置
        int temp, k;
        for (k = 0; k < index / 2; k++)
        {
            temp = ten_to_hex[k];
            ten_to_hex[k] = ten_to_hex[index - k - 1];
            ten_to_hex[index - k - 1] = temp;
        }
        if (dec_outcome_1)
        {
            ten_to_hex[index] = '.'; index++;
            //计算小数部分
        }
        int count = 0; //统计小数点后的位数
        while (dec_outcome_1&&count < 10)//结果精确到小数点后三位
        {
            double outcome1 = dec_outcome_1 * 16;
            int int_outcome_2 = floor(outcome1);
            ten_to_hex[index++] = _16[int_outcome_2];
            dec_outcome_1 =outcome1- int_outcome_2; count++;
        }
    }
    //运算结果为负数
    else {
        int a = ceil(outcome);
        cout << a << endl << outcome;
        _itoa(a, ten_to_hex, 16);    //利用内置函数_itoa把负数结果转成十六进制
        //把结果换成大写字母
        for (int i = 0; i < 8; i++)
            if (ten_to_hex[i] >= 'a'&&ten_to_hex[i] <= 'f')
                ten_to_hex[i] -= 32;
            else
                continue;
    }
}





//把十进制和运算符放在一起构成表达式
void combine_ten_operator(double hex_to_ten[100], char operator_array[50], string &ten_operator, const int& hex_array_index,const int& operator_array_index,  int operator_index_count[50])
{
    int n = hex_array_index + operator_array_index;
    int a = 0, j;
    for (int i = 0; i <= n; i++)
    {

        //利用运算符下标判断运算符在原式中的位置
        for (j = 0; j < operator_array_index; j++)
        {
            if (i == operator_index_count[j]) {
                ten_operator += operator_array[j];
                break;
            }
        }
        //i处不为运算符
        if(j==operator_array_index) {
            double c = hex_to_ten[a++];
            char* p = new char[32];
            sprintf(p, "%.2f", c);
            ten_operator += p;
        }
    }
}

//把中缀表达式转成后缀表达式
void convert2postfix(char *src, char *dst)
{
    char *psrc, *pdst;
    char stack[80];
    int top;

    top = -1;
    psrc = src;
    pdst = dst;
    while (*psrc != '\0')
    {
        if (*psrc >= '0' && *psrc <= '9')
        {
            *pdst = *psrc;
            pdst++;
            //加入分隔空格
            if (!(*(psrc + 1) >= '0' && *(psrc + 1) <= '9') && *(psrc + 1) != '.')
            {
                *pdst = ' ';
                pdst++;
            }
        }
        if (*psrc == '.')
        {
            *pdst = *psrc;
            pdst++;
        }
        if (*psrc == '(')
        {
            stack[++top] = *psrc;
        }
        if (*psrc == ')')
        {
            while (stack[top] != '(')
            {
                *pdst = stack[top--];
                pdst++;
                //加入分隔空格
                *pdst = ' ';
                pdst++;
            }
            //弹出'('
            top--;
        }
        if (*psrc == '^')
        {
            if (stack[top] == '^')
            {
                *pdst = stack[top--];
                pdst++;
                //加入分隔空格
                *pdst = ' ';
                pdst++;
            }
            stack[++top] = *psrc;
        }
        if (*psrc == '*' || *psrc == '/' || *psrc == '%')
        {
            if (stack[top] == '*' || stack[top] == '/' || stack[top] == '%')
            {
                *pdst = stack[top--];
                pdst++;
                //加入分隔空格
                *pdst = ' ';
                pdst++;
            }
            stack[++top] = *psrc;
        }
        if (*psrc == '+' || *psrc == '-')
        {
            while (stack[top] == '*' || stack[top] == '/' || stack[top] == '%' || stack[top] == '+' || stack[top] == '-' || stack[top] == '^')
            {
                *pdst = stack[top--];
                pdst++;
                //加入分隔空格
                *pdst = ' ';
                pdst++;
            }
            stack[++top] = *psrc;
        }
        psrc++;
    }
    //扫描完成后，取出栈中所有运算符，写入后缀表达式数组。
    while (top != -1)
    {
        *pdst = stack[top--];
        pdst++;
        *pdst = ' ';
        pdst++;
    }
    *pdst = '\0';
}

//对后缀表达式进行运算
float cal(char *src)
{
    float stack[80];
    float opd1, opd2;
    int top;
    char *p, *pre;
    top = -1;

    p = src;
    while (*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
        {
            pre = p;
            while ((*p >= '0' && *p <= '9') || *p == '.')
            {
                p++;
            }
            *p = '\0' ;         //读到空格输出终止符
            stack[++top] = atof(pre);     //把字符数字转换成浮点型数字
        }

        //读操作符
        if (*p == '+' || *p == '-' || *p == '*' || *p == '/' || *p == '%' || *p == '^')
        {

            //读栈顶的两个数
            opd2 = stack[top--];
            opd1 = stack[top--];
            switch (*p)
            {
            case '+':
                stack[++top] = opd1 + opd2;
                break;

            case '-':
                stack[++top] = opd1 - opd2;
                break;

            case '*':
                stack[++top] = opd1 * opd2;
                break;

            case '/':
                if (opd2 == 0)
                {
                    system("pause");
                    exit(0);
                }

                //把除数放到栈顶
                stack[++top] = opd1 / opd2;
                break;
            case '%':
                if ((int)opd1 != opd1 || (int)opd2 != opd2)
                {
                    system("pause");
                    exit(0);
                }
                //把余数放到栈顶
                stack[++top] = (int)opd1 % (int)opd2;
                break;

            case '^':
                stack[++top] = pow(opd1, opd2);
                break;

            }
        }
        p++;
    }

    //返回运算结果
    return stack[top];
}
