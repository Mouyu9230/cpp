//11.编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示出各元素的新值。
//编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以函数名和行数作为参数。
#include<stdio.h>
void manifest(int x,int y,int arr[][y]){
        for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           printf("%02d ",arr[i][j]);
        }
        printf("\n");
        if(i==2){
            printf("\n");
        }
    }
}
void DOUBLE(int x,int y,int arr[][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           arr[i][j]*=2;
        }
        }
    }

int main(){
    int arr[3][5]={0};
    int addier=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=addier;
            addier++;
        }
    }
    manifest(3,5,arr);
    DOUBLE(3,5,arr);
    manifest(3,5,arr);
    return 0;
}
