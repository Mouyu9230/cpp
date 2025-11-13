//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
//自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。
#include<stdio.h>
void cal(double x){
    printf("%.0f",x*x*x);
}
int main(){
    double num;
    scanf("%lf",&num);
    cal(num);
    return 0;
}