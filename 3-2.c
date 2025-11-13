//一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    double second=age*3.156e7;
    printf("%e",second);
    return 0;
}