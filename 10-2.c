//10.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第 3 个数组中。也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
#include<stdio.h>
void addarr(int *a,int *b,int *c,int length){
    for(int i=0;i<length;i++){
        c[i]=a[i]+b[i];
    }
}
int main(){
    int x[3]={3,4,5};
    int y[3]={1,2,3};
    int z[3]={0};
    addarr(x,y,z,3);
    for(int i=0;i<3;i++){
        printf("%d ",z[i]);
    }
    return 0;
}