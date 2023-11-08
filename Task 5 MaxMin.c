#include <stdio.h>

int findMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = findMin(arr, n);
    int max = findMax(arr, n);
    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);
    return 0;
}
