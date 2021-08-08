#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n){
    int min;
    for (size_t i = 0; i < n; i++)
    {
        min = i;
        /* code */
        for (size_t j = i + 1; j < n; j++)
        {
            /* code */
            if (a[j] < a[min])
            {
                /* code */
                min = j;
            }  
        }
        if (min != i)
        {
            /* code */
            swap(&a[i], &a[min]);
        }
        
        
    }
    
}

void disArray(int a[], int b){   
    for (size_t i = 0; i < b; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
}

int main(){
    int a[]= {33,8,3,20,9,11,5,1};
    int b = sizeof(a)/sizeof(int);
    printf("%d\n", &b);
    selectionSort(a, b);
    disArray(a,b);
    
    return 0;
}