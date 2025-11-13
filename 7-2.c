//7.编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
//a.基本工资 = 1000美元/小时
//b.加班（超过40小时） = 1.5倍的时间
//c.税率： 前300美元为15%
//续150美元为20%
//余下的为25%
//用#define定义符号常量。不用在意是否符合当前的税法。
#include<stdio.h>
#define one 0.85
#define two 0.8
#define three 0.75
int main(){
    double hour;
    scanf("%lf",&hour);
    if(hour>40){
        hour=40+(hour-40)*1.5;
    }
    double salary=hour*1000;
    if(salary<=300){
        salary*=one;
    }if(salary<=450&&salary>300){
        salary=300*one+(salary-300)*two;
    }else{
        salary=300*one+150*two+(salary-450)*three;
    }
    printf("%f",salary);
    return 0;
}