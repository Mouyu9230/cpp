//3.编写一个文件拷贝程序，提示用户输入文本文件名，并以该文件名作为原始文件名和输出文件名。
//该程序要使用 ctype.h 中的 toupper()函数，在写入到输出文件时把所有文本转换成大写。使用标准I/O和文本模式。
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
FILE *fs ,*fd;
int main(){
    char filename[100];
    int ch;
    printf("input the file name and i will transmit it\n");
     if (fgets(filename, sizeof(filename), stdin) == NULL) {
        fprintf(stderr, "Error reading filename.\n");
        exit(EXIT_FAILURE);
    }
    size_t len = strlen(filename);
    if (len > 0 && filename[len - 1] == '\n') {
        filename[len - 1] = '\0';
    }
    if((fs=fopen(filename,"r+"))==NULL){
        fprintf(stderr,"failed to open %s",filename);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fs, NULL, _IOFBF, 4096) != 0){
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
   }
    char outfilename[100];
    size_t length = strlen(filename);
    for (size_t i = 0; i < length; i++) {
        outfilename[i] = toupper((unsigned char)filename[i]);
    }
    outfilename[length] = '\0';
     if((fd=fopen(outfilename,"w+"))==NULL){
        fprintf(stderr,"failed to open %s",outfilename);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fd, NULL, _IOFBF, 4096) != 0){
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
   }
   while((ch=fgetc(fs))!=EOF){
    fputc(toupper(ch),fd);
   }
   printf("Done.");
   fclose(fs);
   fclose(fd);
   return 0;

}
