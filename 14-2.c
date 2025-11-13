//4.编写一个程序，创建一个有两个成员的结构模板：
//a.第1个成员是社会保险号，第2个成员是一个有3个成员的结构，第1个成员代表名，第2个成员代表中间名，第3个成员表示姓。创建并初始化一个内含5个该类型结构的数组。该程序以下面的格式打印数据：
//Dribble, Flossie M.–– 302039823
//如果有中间名，只打印它的第1个字母，后面加一个点（.）；如果没有中间名，则不用打印点。编写一个程序进行打印，把结构数组传递给这个函数。
#include<stdio.h>
typedef struct name
{
    char ming[20];
    char midming[20];
    char xing[20];
}name;

typedef struct node{
    char number[20];
    name name;
}node;
int main(){
    printf("how many clients?\n");
    int num;
    scanf("%d",&num);
    node arr[num];    
    for(int i=0;i<num;i++){
        printf("your name,please,and input n in midnames place when u dont have it.\n");
        scanf("%s %s %s",arr[i].name.ming,arr[i].name.midming,arr[i].name.xing);
        printf("ok,numbers?\n");
        scanf("%s",arr[i].number);
        printf("thank you,check your information assigned\n");
        printf("%s, %s ",arr[i].name.ming,arr[i].name.xing);
        if(arr[i].name.midming[0]!='n'){
            printf("%c.",arr[i].name.midming[0]);
        }
        printf("–– %s\n",arr[i].number);
        if(i!=num-1){
        printf("next one.\n");
        }

    }
    printf("bye\n");
    return 0;
}
