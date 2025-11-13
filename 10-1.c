//3.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数。
#include<stdio.h>
int max(int *a ,int length){
    int themax=-99999;
    for(int i=0;i<length;i++){
        if(a[i]>themax){
            themax=a[i];
        }
    }
    return themax;
}
int main(){
    int arr[5]={14,51,11,21,70};
    int ans=max(arr,5);
    printf("%d",ans);
    return 0;
}