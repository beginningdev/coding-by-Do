#include<stdio.h>

int main(){
    FILE *fp = fopen("filename.txt", "r");
    char line[100];
    if(fp == NULL){
        printf("Khong mo duoc file\n");
        return 0;
    }

    //sizeof(line) is used to prevent buffer overflow
    // fgets reads a line from the file and stores it in line
    //while loop continues until EOF (End of File) is reached
    //fgets reads a line from the file and stores it in line
    //printf prints the line to the console 
    while(fgets(line, sizeof(line),fp) != NULL){
        printf("%s", line);
    }
    fclose(fp);
    return 1;
    // fclose(fp) is not necessary here as the program will terminate anyway
}