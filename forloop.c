#include<stdio.h>
int main(){
    temperature();
}
void temperature(){
    for(int i = 0; i <= 50;  i = i+20){
        float celsius = (5.0/9.0) * (i -32);
        printf("fahrenhite= %f, celsius = %f ", i , celsius);
    }

}