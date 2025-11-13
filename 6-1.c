//2.使用嵌套循环，按下面的格式打印字符：
//$
//$$
//$$$
//$$$$
//$$$$$
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
