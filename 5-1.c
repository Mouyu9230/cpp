//3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
//18 days are 2 weeks, 4 days.
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20），循环结束。
#include<stdio.h>
int main(){
    int day,week,leftday;
    do{
        scanf("%d",&day);
        if(day<=0){
            break;
        }
        week=day/7;
        leftday=day%7;
        printf("%d days are %d weeks, %d days.\n",day,week,leftday);
    }while(1);
    return 0;
}