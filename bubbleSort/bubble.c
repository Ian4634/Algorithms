#include<stdio.h>
void traverse(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int *arr, int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        printf("before round %d\n", i);
        traverse(arr, n);

        int flag = 1; //
        if(flag == 0){
            return ;
        }
         
        for(int j=0;j<n-i;j++){ // n - i 即免比較最後幾個已經找出最大數值
            int temp;
            if(arr[j] > arr[j+1]){
                int temp = arr[j]; // sawp
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
            
        }
    }
}

int main(int argc, char *argv[]){
    int arr[9] = {82, 16, 9, 95, 27, 75, 42, 69, 34};
    
    bubbleSort(arr, 9);
    traverse(arr, 9);
    return 0;
}