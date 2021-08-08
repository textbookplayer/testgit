#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <memory.h>

void main(){
    
    char ch[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int *p = (int*)ch;
    p++;
    printf("%x", *p);
}

