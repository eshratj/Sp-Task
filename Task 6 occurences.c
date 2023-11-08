#include <stdio.h>

int countOccurrences(int arr[], int size, int flag){
    int count = 0;
    for(int i=0; i<size; i++){
        if (arr[i] == flag) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int flag;
    printf("Enter the integer to count occurrences: ");
    scanf("%d", &flag);
    int occur = countOccurrences(arr, n, flag);
    printf("%d appears %d times in the array.\n", flag, occur);
    return 0;
}
