#include <stdio.h>
int main(){
    int arr[10] = {}, i=0,j=0;
    int temp;
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for (i=0;i<10-1;i++){
        for(j=0;j<10-i-1;j++){
            if (arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
}
