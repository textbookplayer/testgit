#include <stdio.h>
#include <conio.h>

void main(){
    float degreeinC, degreeinF;
    printf("Enter your temperature: ");
    scanf("%f",&degreeinF);
    degreeinC = degreeinF - 100;
    printf("Trans to your temperature in Celsius: %2f", &degreeinC);
}