//7.编写一个程序打开两个文件。可以使用命令行参数或提示用户输入文件名。
//a.该程序以这样的顺序打印：打印第1个文件的第1行，第2个文件的第1行，第1个文件的第2行，第2个文件的第2行，以此类推，打印到行数较多文件的最后一行。
//b.修改该程序，把行号相同的行打印成一行。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fa ,*fb;
int main(){
    char cha[100];
    char chb[100];
    char afilename[100];
    char bfilename[100];
    char* pa;
    char* pb;
    printf("input the file name\n");
    if (fgets(afilename, sizeof(afilename), stdin) == NULL) {
        fprintf(stderr, "Error reading filename.\n");
        exit(EXIT_FAILURE);
    }
    size_t lena = strlen(afilename);
    if (lena > 0 && afilename[lena - 1] == '\n') {
        afilename[lena - 1] = '\0';

}
     if (fgets(bfilename, sizeof(bfilename), stdin) == NULL) {
        fprintf(stderr, "Error reading filename.\n");
        exit(EXIT_FAILURE);
    }
    size_t lenb = strlen(bfilename);
    if (lenb > 0 && bfilename[lenb - 1] == '\n') {
        bfilename[lenb - 1] = '\0';
    }
    if((fa=fopen(afilename,"r+"))==NULL){
        fprintf(stderr,"failed to open %s",afilename);
        exit(EXIT_FAILURE);
    }
    if((fb=fopen(bfilename,"r+"))==NULL){
        fprintf(stderr,"failed to open %s",bfilename);
        exit(EXIT_FAILURE);
    }
    while(1){
        pa = fgets(cha, 100, fa);
        pb = fgets(chb, 100, fb);
    if (pa == NULL && pb == NULL)
        break;
        if(pa!=NULL){
            printf("%s", cha);
        }
        if(pb!=NULL){
            printf("%s", chb);
        }

    }
    fclose(fa);
    fclose(fb);
    return 0;

}
