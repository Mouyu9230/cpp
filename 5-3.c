//2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和15）。
//要求打印的各值之间用一个空格、制表符或换行符分开。
#include<stdio.h>
int main()
{
    int num;
    printf("input a int\n");
    scanf("%d",&num);
    for(int i=num;i<=num+10;i++){
        printf("%d ",i);
    }
    return 0;
}