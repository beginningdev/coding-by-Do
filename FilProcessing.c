#include<stdio.h>

int main(){
    FILE *fp = fopen("test.txt", "w"); //Mở file để ghi
    if(fp == NULL){
        printf("Khong the mo file.\n");
        return 0;
    }

    //Ghi dữ liệu
    fprintf(fp,"Hello, This is data!\n");
    fclose(fp);// Close File
    return 1;
}