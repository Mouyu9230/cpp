//10.为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()函数接受两个在2～10范围内的参数，然后以第2个参数中指定的进制打印第1个参数的数值。
//例如，to_base_n(129， 8)显示的结果为201，也就是129的八进制数。在一个完整的程序中测试该函数。
#include<stdio.h>
#include<math.h>
int to_base_n(int num,int base){
    int yu,all=0,quan=0;
    int shang=num;
    do{
        yu=shang%base;
        shang=shang/base;
        all+=yu*(int)pow(10,quan);
        quan++;
    }while(shang!=0);
    return all;
}
int main(){
    int num,base,ans;
    scanf("%d %d",&num,&base);
    ans=to_base_n(num,base);
    printf("%d",ans);
    return 0;
}