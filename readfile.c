#include<stdio.h>
int main(){
    int c;
    //taking user input from console
    c = getchar();
    while(c != EOF){
        //putting user input
        //the function putchar() prints a character each time it is called 
        putchar(c);
        //getchar() return the next input character from a text stream
        c = getchar();
    }
}