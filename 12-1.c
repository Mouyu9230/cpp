//4.在一个循环中编写并测试一个函数，该函数返回它被调用的次数。
#include<stdio.h>
int count=0;
int plus(int a,int b,int *ans){
    *ans=a+b;
    count++;
    return count;
}
int main(){
    int a,b,ans;
    do{
        scanf("%d %d",&a,&b);
         if(a==0&&b==0)
            break;
        int times=plus(a,b,&ans);
        printf("%d\n",ans);
        printf("%d turns so far\n",times);
    }while(1);
    return 0;

}