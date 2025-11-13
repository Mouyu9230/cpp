//3.编写一个函数，接受一个 int 类型的参数，并返回该参数中打开位的数量。在一个程序中测试该函数。
#include <stdio.h>
int countbits(int n){
    int count=0;
    unsigned int mask=1; 
    for(int i=0; i<sizeof(int)*8;i++){
        if(n&mask)
            count++;
        mask<<=1;
    }
    return count;
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",countbits(num));
    return 0;
}
