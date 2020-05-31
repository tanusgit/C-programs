#include <stdio.h>
int main() {

    int a[7] ={10, 5, 12, 3, 6, 7, 8};
    int res = findMin(a, 7);
    printf("res = %d", res);
    return 0;
}

int findMin(int a[], int n){
    int min = a[0];
    for(int i = 0; i < n-1; i++){
        if( a[i] < min){
            min = a[i];
        }
    }
    return min;
}
