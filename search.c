#include<stdio.h>

int search(int A[], int num_elements, int num) {
    for (int i = 0; i < num_elements; ++i) {
        if (A[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {1, 3, 2, 4 ,5, 6, 6};
    int s = search(a, 7, 6);
    printf("%d", s);
    return 0;
}