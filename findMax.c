#include <stdio.h>
int main() {

    int a[7] ={10, 5, 12, 3, 6, 7, 8};
    int res = findMax(a, 7);
    printf("res = %d", res);
    return 0;
}

int findMax(int a[], int n){
    int max = a[0];
    for(int i = 0; i < n-1; i++){
        if( a[i] > max){
            max = a[i];
        }
    }
    return max;
}
