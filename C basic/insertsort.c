#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// void insertSort(int a[], int n){
//     int pos, x;
//     for (size_t i = 1; i < n-1; i++)
//     {
//         /* code */
//         x = a[i];
//         pos = i -1;
//         while (pos >= 0 && a[pos] > x)
//         {
//             /* code */
//             a[pos+1] = a[pos];
//             pos--;
//         }
//         a[pos+1]=x;
        
//     }
// }

void insertSort(int a[], int n){
    int pos, current;
    for (size_t i = 1; i < n; i++)
    {
        /* code */
        current = a[i];
        pos = i -1;
        while (pos >= 0 && current < a[pos])
        {
            /* code */
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1]=current;
        
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
    insertSort(a, b);
    disArray(a,b);
    
    return 0;
}