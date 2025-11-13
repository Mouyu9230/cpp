//1.编写一个函数，把二进制字符串转换为一个数值。
#include <stdio.h>
#include <string.h>
#include <math.h>
int btoint(const char *bstr) {
    int len=strlen(bstr);
    int result=0;

    for (int i=0;i<len;i++) {
        if (bstr[i]=='1') {
            result+=(int)pow(2,len-i-1);
        }
    }
    return result;
}
int main() {
    char bstr[100];
    scanf("%s",bstr);
    int ans=btoint(bstr);
    if (ans!=-1)
        printf("%d\n",ans);

    return 0;
}
