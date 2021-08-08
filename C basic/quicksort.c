#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void disArray(int a[], int b);
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



void Partition(int a[], int left, int right){
    int pivot = a[(left+right)/2];
    int leftArr = left;
    int rightArr = right;

    if (left >= right)
    {
        /* code */
        return;
    }

    while (leftArr < rightArr)
    {
        /* code */
        while (a[leftArr] < pivot)
        {
            /* code */
            leftArr++;
            // printf("left arr changing = %d\n", &leftArr);
        }
        while (a[rightArr] > pivot)
        {
            /* code */
            rightArr--;
            // printf("right arr changing = %d\n", &rightArr);
        }
        // printf("Go to if compare\n");
        if (leftArr <= rightArr)
        {
            /* code */
            if(leftArr < rightArr){
                swap(&a[leftArr], &a[rightArr]);
                printf("swap left %d - right %d\n", a[leftArr], a[right]);
            }
            disArray(a,8);
            leftArr++;
            // printf("left arr changing = %d\n", &leftArr);
            rightArr--;
            // printf("right arr changing = %d\n", &rightArr);
            
        }
        
       
        
    }
    Partition(a,left, rightArr);
    printf("End of left side\n");
    // disArray(a,8);
    Partition(a,leftArr, right);
    printf("End of right side\n");
    // disArray(a,8);
        // printf("left arr = %d\n", &leftArr);
        // printf("right arr = %d\n", &rightArr);
    
    
}

void disArray(int a[], int b){   
    for (size_t i = 0; i < b; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int a[]= {33,8,3,20,9,11,5,1,13,17,25,31};
    int b = sizeof(a)/sizeof(int);
    // printf("%d\n", &b);
    disArray(a,b);
    Partition(a,0, b-1);
    printf("Finale\n");
    disArray(a,b);
    
    return 0;
}