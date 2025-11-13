//5.编写一个程序满足下面的要求。
//a.外部定义一个有两个成员的结构模板name：一个字符串储存名，一个字符串储存姓。
//b.外部定义一个有3个成员的结构模板student：一个name类型的结构，一个grade数组储存3个浮点型分数，一个变量储存3个分数平均数。
//c.在main()函数中声明一个内含CSIZE（CSIZE = 4）个student类型结构的数组，并初始化这些结构的名字部分。用函数执行g、e、f和g中描述的任务。
//d.以交互的方式获取每个学生的成绩，提示用户输入学生的姓名和分数。把分数储存到grade数组相应的结构中。可以在main()函数或其他函数中用循环来完成。
//e.计算每个结构的平均分，并把计算后的值赋给合适的成员。
//f.打印每个结构的信息。
#include<stdio.h>
typedef struct name{
    char* xing;
    char* ming;
}name;
typedef struct student{
    name thename;
    double grade[3];
    double avg;
}student;
int main(){
    int all=0;
    int CSIZE=4;
    student arr[4]={
        {{"li","ming"}},
        {{"li","hua"}},
        {{"zhang","wei"}},
        {{"han","meimei"}}
    };
    printf("input the scores\n");
    for(int i=0;i<CSIZE;i++){
        for(int j=0;j<3;j++){
            scanf("%lf",&arr[i].grade[j]);
        }
    }
    for(int i=0;i<CSIZE;i++){
        for(int j=0;j<3;j++){
            all+=arr[i].grade[j];
        }
        arr[i].avg=all/3.0;
        all=0;
    }
    for(int i=0;i<CSIZE;i++){
        printf("%s %s\n",arr[i].thename.xing,arr[i].thename.ming);
        for(int j=0;j<3;j++){
            printf("%g\n",arr[i].grade[j]);
        }
        printf("%g",arr[i].avg);
        printf("\n");
    }
    return 0;

}