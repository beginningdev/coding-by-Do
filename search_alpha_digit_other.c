#include<stdio.h>//Include stdio.h
#include<ctype.h>//Include ctype.h

int main(){//Main function
    char text[1000];//Declare text
    int letters = 0;//Declare letters
    int digits = 0;//Declare digits
    int others = 0;//Declare others
    printf("Enter a string: ");//Print Enter a string
    fgets(text, sizeof(text),stdin);//Get string from text [1000], it includes space,letter, digit, and other.Use fgets have text, sizeof(text),stdin
    for(int i =0; text[i] !='\0';i++){//For loop will rutn until text[i] is not equal to '\0' is null or end of srting
        //Check if text[i] is alphabet, digit or other
        if(isalpha(text[i]))//If text[i] is alphabet
            {letters++;}//letters++
        else if(isdigit(text[i]))//If text[i] is digit
            {digits++;}//digits++
        else if(!isspace(text[i]))//If text[i] is not space.
            {others++;}//others++
        }//end of for loop
        printf("Letters: %d\n", letters);//Print letters
        printf("Digits: %d\n", digits);//Print digits
        printf("Others: %d\n", others);//Print others
        return 0;//Return 0
    }
//End of main function
//End of program