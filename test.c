#include "stdio.h"
#include "stdlib.h"
#include <conio.h>
#include <assert.h>
#include <string.h>
void swapnumber(int *a, int *b){
    int c = *a ;
    *a = *b;
    *b = c;
}

// void main(){
//     int a[5] = {1,2,500,4,5};
//     int temp = *a;
//     // for (size_t i = 0; i < 5; i++){
//     //     printf("%d ", a[i]);
//     // }
//     // for (size_t i = 0; i < 5; i++){
//     //     printf("%d ", a[i]++);
//     // }
//     // for (size_t i = 0; i < 5; i++){
//     //     // printf("%d", a[i]);
//     //     if (a[i] > a[i]++)
//     //     {
//     //         /* code */
//     //         temp = a[i];
//     //         // printf("%d", a[i]);
//     //         // printf("  %d",&temp);
//     //     } else
//     //     {
//     //         temp = a[i]++;
//     //         // printf("%d", a[i]);
//     //         // printf("  %d",&temp);
//     //     }
//     //     printf("%d", a[i]);
//     //     printf("  %d",temp);
//     // }
//     for (size_t i = 0; i < 5; i++){
//         printf("%d -", a[i]);
//         if (temp < a[i])
//         {
//             temp = a[i];
//         }
//     }
//     printf("\n  %d",temp);
//     for (size_t i = 0; i < 5; i++)
//     {
//         /* code */
//         for (size_t j = 5-i; j > 0; j--)
//         {
//             /* code */
//             printf("*");    
            
//         }   
//         printf("\n");   
//     }
//     // int a = 5;
//     // int b = 10;
//     // swapnumber(&a,&b);
//     // printf("%d - %d", a,b);
// }

float Plus(float a, float b); 
float Minus(float a, float b);
float Multiply(float a, float b);
float Divide(float a, float b);
void Switch(float a, float b, float (*p2Func)(float, float));
void converge(char *targ, char *src);

int main()
{
    Switch(4, 5.6, &Plus);
    Switch(4, 6, &Minus);
    Switch(4, 1, &Divide);
    char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    converge(target, "This is a test of converge() .");
    printf("Final string: %s \n", target);
    // getch();
}

void converge(char *targ, char *src){
    int i, j;
    printf("%s\n", targ);
    for(i = 0, j = strlen(src); i < =j, i++, j--){
        targ[i] = src[i];
        targ[j] = src[j];
        printf("%s\n", targ);
    }
}

void Switch(float a, float b, float (*p2Func)(float, float))
{
    float result = p2Func(a, b);
    printf("result = %f\n", result);
}
 
float Plus(float a, float b) 
{ 
    return a+b; 
}
 
float Minus(float a, float b) 
{ 
    return a-b; 
}
 
float Multiply(float a, float b) 
{ 
    return a*b; 
}
 
float Divide(float a, float b) 
{ 
    assert(b != 0); 
    return a/b;
}

