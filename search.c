#include<stdio.h>

int search(int A[], int num_elements, int num) {
    for (int i = 0; i < num_elements; ++i) {
        if (A[i] == num) {
            return i;
        }
    }
    return -1;
}
/*
%d int
%f float
%s string
%l long
%u unsigned
%lu long unsigned
*/
int main() {
    int a[] = {1, 3, 2, 4 ,5, 6, 6};
    int num = 6;
    int s = search(a, 7, num);
    printf("The index is: %d, or num: %d", s, num);
    return 0;
}