#include<stdio.h>
int main(){
    int size,sum=0;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array: \n");
    for(int i=0;i<size;i++){
        printf("\nEnter Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<size;i++){
            if(arr[i]>max){
                max = arr[i];
            }
    }
    for(int i=0;i<size;i++){
            if(arr[i]>secmax && arr[i]<max){
                secmax = arr[i];
            }
    }
    sum = max+secmax;
    printf("Elements are: %d and %d\n", max,secmax);
    printf("Sum ofTwo elements is: %d", sum);

return 0;
}



