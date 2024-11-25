#include <stdio.h>

int checking(char ch);

int main() 
{
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
int result = checking(ch);

    if (result == 1){
    printf("Uppercase");
    } 
    else if (result == 2){
        printf("Lowercase");
        } 
        else {
               printf("Wong input");
    }
}


int checking(char ch) {
    if (ch >= 'A' && ch <= 'Z'){
        return 1;
    } 
    
    else if (ch >= 'a' && ch <= 'z'){
        return 2; 
    } 
    else {
        return 3; 
   
   
    }
}