#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_A_clicked();

    void on_pushButton_B_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_D_clicked();

    void on_pushButton_E_clicked();

    void on_pushButton_F_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_min_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_mod_clicked();

    void on_pushButton_pow_clicked();

    void on_pushButton_left_clicked();

    void on_pushButton_right_clicked();

    void on_pushButton_clearone_clicked();

    void on_pushButton_clearall_clicked();

    void on_pushButton_equal_clicked();

private:
    Ui::Calculator *ui;
};

//此函数用于计算结果
string out_foutcome(string input_string);

//此函数用于把输入表达式分为十六进制数和运算符
void split_input_string(string input_string, int &hex_array_index, char operator_array[50], int &operator_array_index, char hex_array[30][20],  int operator_index_count[50]);

//此函数将十六进制转为十进制数
void tran_hex_to_ten(char hex_array[30][20], double hex_to_ten[100], const int &hex_array_index);

//此函数将十进制转为十六进制数
void tran_ten_to_hex(double &outcome, char ten_to_hex[100]);

//此函数将十进制字符串和操作符连接成表达式
void combine_ten_operator(double hex_to_ten[100], char operator_array[50], string &ten_operator, const int& hex_array_index,const int& operator_array_index,  int operator_index_count[50]);


void convert2postfix(char *src, char *dst);


float cal(char *src);

#endif // CALCULATOR_H
