#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_LENTH 100

int main(){
    FILE *fp = NULL;
    int i;
    int arr[MAX_LENTH];
    fp = fopen("D:\\output.txt", "w");
    if (!fp)
    {
        /* code */
        printf("\nError in opening file");
    }
    else
    {
        for ( i = 0; i < MAX_LENTH; i++)
        {
            /* code */
            arr[i] = rand();
            fprintf(fp, "%d\n", arr[i]);
        }
        printf("\nFile is created susscessfully");
        fclose(fp);
    }
 
    return 0;
}