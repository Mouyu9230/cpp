//6.编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
//Melissa Honeybee
//      7　　　　8
//接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
//Melissa Honeybee
//7　　　 8
#include<stdio.h>
int main(){
    char name[40];
    char xing[40];
    scanf("%s %s",name,xing);
    int namenum=printf("%s",name);
    printf(" ");
    int xingnum=printf("%s",xing);
    printf("\n");
    printf("%*d %*d\n",namenum,namenum,xingnum,xingnum);
    printf("%s %s\n",name,xing);
    printf("%-*d %-*d",namenum,namenum,xingnum,xingnum);
    return 0;

}