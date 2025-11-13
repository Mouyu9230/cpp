//1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
#include<stdio.h>
int main(){
    double quart;
    scanf("%lf",&quart);
    double nums=quart*950/(3e-23);
    printf("%e",nums);
    return 0;
}