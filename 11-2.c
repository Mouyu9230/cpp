//8.编写一个名为string_in()的函数，接受两个指向字符串的指针作为参数。如果第2个字符串中包含第1个字符串，该函数将返回第1个字符串开始的地址。
//例如，string_in("hats", "at")将返回hats中a的地址。否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
#include<stdio.h>
#include<string.h>
char* string_in(char* big,char* small){
    int len=strlen(big);
    for(int i=0;i<len;i++){
        if(strncmp(big+i,small,strlen(small))==0){
            return big+i;
        }
    }
        return NULL;
}
int main(){
    int flag=0;
    printf("q to quit\n");
while(1){
    char bigger[100]={};
    char smaller[100]={};
    fgets(bigger,100,stdin);
    fgets(smaller,100,stdin);
    bigger[strcspn(bigger, "\n")] = 0;
    smaller[strcspn(smaller, "\n")] = 0;
        if(bigger[0] == 'q' ||smaller[0] == 'q' ){
        break;
    }
        if(string_in(bigger,smaller)!=NULL){
        printf("success\n");
    }else{
        printf("nope\n");
    }

}
    return 0;

}


