//9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
#include<stdio.h>
int main(){
    int num,flag=0;
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            flag=0;
            continue;
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}