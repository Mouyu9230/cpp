//6.编写程序读取输入，读到#停止，报告ei出现的次数。
//不对，改之
#include<stdio.h>
int main(){
    int deadflag=0,eflag=0,count=0;
    char ch;
    do{
        ch=getchar();
        if(ch=='#'){
            deadflag=1;
        }
        if(ch=='e'){
            eflag=1;
        }
        if(ch=='i'&&eflag==1){
            count++;
            eflag=0;
        }

    }while(deadflag==0);
    printf("%d",count);
    return 0;
}
