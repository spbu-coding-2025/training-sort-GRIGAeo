#include <stdio.h>

void sort(int n, int arr[]);

int main(){
    int cnt = 0;//Counting the number of input elements
    int arr[100];//Array of input elements

    for (int i = 0; i < 100; i++){
        int rc = scanf("%d", &arr[i]);
        if (rc == 1){
            cnt += 1;
        }
        else{
            break;
        }
    }//Processing standard input of integer numbers

    sort(cnt, arr);//Sorting the input array of integers in ascending order

    for (int l = 0; l < cnt; l++){
        printf("%d ", arr[l]);
    }

    return 0;
}

void sort(int cnt, int arr[]){
    for (int i = 0; i < cnt; i++){
        for (int j = 0; j < cnt - i - 1; j ++){
            if (arr[j] > arr[j + 1]){
                int var = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = var;
            }
        }
    }
}
