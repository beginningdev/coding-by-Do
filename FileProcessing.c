#include<stdio.h>

// Hàm main
// Chương trình này mở một file để ghi dữ liệu vào
int main(){
    FILE *fp = fopen("test.txt", "w"); //Mở file để ghi
    if(fp == NULL){
        printf("Khong the mo file.\n");
        return 0;
    }

    //Ghi dữ liệu
    fprintf(fp,"Hello, This is data!\n My nam is Alex.\n");
    fprintf(fp,"This is my printed file\n");
    
    fclose(fp);// Close File
    return 1;
}