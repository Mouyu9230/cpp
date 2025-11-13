//9.编写一个符合以下描述的函数。首先，询问用户需要输入多少个单词。然后，接收用户输入的单词，并显示出来，使用malloc()并回答第1个问题（即要输入多少个单词），
//创建一个动态数组，该数组内含相应的指向char的指针（注意，由于数组的每个元素都是指向char的指针，所以用于储存malloc()返回值的指针应该是一个指向指针的指针，
//且它所指向的指针指向char）。在读取字符串时，该程序应该把单词读入一个临时的char数组，使用malloc()分配足够的存储空间来储存单词，并把地址存入该指针数组（该数组中每个元素都是指向 char 的指针）。
//然后，从临时数组中把单词拷贝到动态分配的存储空间中。因此，有一个字符指针数组，每个指针都指向一个对象，该对象的大小正好能容纳被储存的特定单词。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int num;
    printf("how many words do you want give\n");
    scanf("%d",&num);
    printf("do it then\n");
    char** wordpointer;
    wordpointer=(char**)malloc(num*sizeof(char*));
    if(wordpointer==NULL){
        printf("malloc error\n");
        return 1;
    }
    char temp[999];
    for(int i=0;i<num;i++){
        scanf("%s",temp);
        char *word=(char*)malloc(strlen(temp)+1);
        if(word==NULL){
            printf("malloc error\n");
            return 1;
        }
        strcpy(word, temp);
        wordpointer[i] = word;
    }
    printf("here it is\n");
    for (int i=0;i<num;i++){
        printf("%s\n",wordpointer[i]);
        free(wordpointer[i]);
    }
    free(wordpointer);
    return 0;
}