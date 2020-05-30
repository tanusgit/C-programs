#include<stdio.h>

int main(){
    temperature();
}
//return type is void
void temperature(){
    int farhenite;
    int celsius;
    int upper;
    int lower;
    int step;
    step = 20;
    lower = 0;
    upper = 300;
    farhenite = lower;
    while(farhenite <= upper){
        celsius = 5 * (farhenite-32)/9;
        printf("fahrenhite = %.6d celsius = %d, ", farhenite, celsius);
        farhenite = farhenite + step;

    }


}