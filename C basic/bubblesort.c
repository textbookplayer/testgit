#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

// void bubbleSort(int a[], int n){
//     for (size_t i = 0; i < n - 1; i++)
//     {
//         /* code */
//         for (size_t j = 0; j < n - i -1; j++)
//         {
//             /* code */
//             if (a[j] > a[j+1])
//             {
//                 /* code */
//                 swap(&a[j], &a[j+1]);
//             }
            
//         }
        
//     }
    
// }


void bubbleSort(int a[], int n){
    for (size_t i = 0; i < n - 1; i++){
        for (size_t j = 0; j < n - i -1; j++)
        {
            /* code */
            if (a[j] > a[j+1])
            {
                /* code */
                swap(&a[j], &a[j+1]);
            }
            
            
        }
        
    }
}

int main(){
    int a[]= {33,8,3,20,9,11,5,1};
    int b = sizeof(a)/4*8;
    printf("%d\n", &b);
    bubbleSort(a, 8);
    for (size_t i = 0; i < 8; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    
    return 0;
}