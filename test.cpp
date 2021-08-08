// #include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
// #define x 5+2
#define call(a,b) a##b
#define SQUARE(x) x*x
#define DECLARE_VARIABLES(type, name) type normal_##name, premium_##name, low_##name
#define print_variable_name_and_value(x) printf(#x " value is: %d", x)
DECLARE_VARIABLES(int, bike_price);

void swapnumber(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

typedef struct
{
    int a[2];   // 8 byte
    char b[5]; // 5 byte
    char c[5]; // 5 byte
     
}A; 

char *foo( )
{
    char *s = (char*)malloc(20*sizeof(char));
    if(s)
    {
        strcpy(s,"vncoding") ;
    }
    return s;
}

// int main() {
// 	// int x = 1;    
// 	// debug(x);
//     // cout << "akiphm" << endl;
//     // int n = 10;
// 	// int i = 0;
// 	// do {
        
// 	// 	cout << i << " ";
//     //     i++;
// 	// } while (i < n);

//     // int a[10];
// 	// for (int i = 0;i < 10; i++) {
// 	// 	cin >> a[i];
// 	// }
// 	// for (int i = 0;i < 10; i++) {
// 	// 	cout << a[i] << " ";
//     //     cout << endl;
// 	// }
	
//     // cout << "enter your volume ";
// 	// int num;
// 	// cin >> num;
// 	// int *arrayDynamic = new int[num];
// 	// for (size_t i = 0; i < num; i++)
// 	// {
// 	// 	/* code */
// 	// 	arrayDynamic[i]=i+10;
// 	// 	cout << arrayDynamic[i] << endl;
// 	// }
// 	// delete[] arrayDynamic;

// 	// int a = 11, b = 32;
// 	// swap(a,b);
// 	// cout << a << "-" << b << endl;
	
// 	// int soDong;
//     // cout << "Nhap so dong: ";
//     // cin >> soDong;
//     // for(int i = 1; i <= soDong; i++) { 
//     //     // in ky tu khoang trang
//     //     for(int j = i; j < soDong; j++) {
//     //         cout << " ";
//     //     }
 
//     //     // in ky tu ngoi sao
//     //     for(int j = 1; j <= (2*i-1); j++) {
//     //         cout << "*";
//     //     }
 
//     //     // xuong dong ke tiep
//     //     cout << endl;
//     // }

// 	normal_bike_price =1 , premium_bike_price=2, low_bike_price = 0;
// 	cout << normal_bike_price << " " << premium_bike_price << " " << low_bike_price << " " ;
//     // int x = 10;
// 	// print_variable_name_and_value(x);
// 	// cout << x << endl;
// 	// cout << x << endl;
// 	// int i,y;
//     // i = x*x*x;
// 	// y = x*x;
// 	// cout << i << endl;
// 	// cout << y << endl;
// 	// unsigned int b = -5u;
// 	// int x = 6, y = 10, xy = 20;
// 	// cout << xy + call(x, y) << endl;
// 	// cout << call(x, y) << endl;
// 	// cout << b << endl;
// 	// x = 36 / SQUARE(6);
// 	// y =  SQUARE(6);
// 	// cout << SQUARE(6) << endl;
// 	// cout << x << endl;
// 	// cout << y << endl;
// 	// cout << x/y << endl;
// 	// cout << sizeof(A) << endl << endl << endl;
// 	// int s = 9;
// 	// while (s++ < 10) 
//     // {
//     //     if (s < 4 && s < 9)
//     //         continue;
//     //     cout << s << endl;
//     // }
// 	int x = 3;
//     if (x == 2); 
// 		x = 0;
//     if (x == 3) 
// 		x++;
//     else x += 2;
// 	cout << endl << x << endl;
// 	int a = 80;
//     if(a++ > 80)
// 	cout << endl << "true" << a;
// 	else
// 	cout << endl << "fail" << a;
// 	a = 1;
//     while(a <= 1)
//         if(a%2)
//             cout << endl << "true" << a++;
//         else
//             cout << endl << " " << ++a;
// 	return 0;
// 	cout << foo << endl;
	
// }

// Excersice
// float convertFahreneut2Celsius(float Fahr){
// 	return (5 * (Fahr - 32) / 9);
// }

// int main(){
// 	float inputValue;
// 	std::cout << "Write your value you want to convert: " ;
// 	std::cin >> inputValue;
// 	std::cout << "Your return Celsius value is: " << convertFahreneut2Celsius(inputValue) << endl; 
// }

// int caculate2IntegerSquare(int firstNumber, int secondNumber){
// 	return (firstNumber*firstNumber + secondNumber*secondNumber);
// }

// int main(){
// 	int a,b;
// 	std::cout << "Enter your 2 number you want to caculate" << "The first: " ;
// 	std::cin >> a;
// 	std::cout << "The second: " ;
// 	std::cin >> b;
// 	std::cout << "The add square of 2 number is: " << caculate2IntegerSquare(a,b) << std::endl;
// }


// enum numberOfQuater{
// 	theFirstQuater = 0,
// 	theSecondQuater,
// 	theThirdQuater,
// 	theFourQuater
// } Number_T;

// void thePartOfCircle(int valueOfCircle){
// 	switch (Number_T)
// 		{
// 		case theFirstQuater:
// 			{/* code */
// 			if (valueOfCircle <= 90)
// 			{
// 				/* code */
// 				std::cout << "This the the first quater of the circle" << endl;
// 				break;
// 			}}

// 		case theSecondQuater:	
// 			{if (valueOfCircle <= 180 && valueOfCircle > 90)
// 			{
// 				/* code */
// 				std::cout << "This the the second quater of the circle" << endl;
// 				break;
// 			}}

// 		case theThirdQuater:
// 			{if (valueOfCircle <= 270 && valueOfCircle > 180)
// 			{
// 				/* code */
// 				std::cout << "This the the third quater of the circle" << endl;
// 				break;
// 			}}

// 		case theFourQuater:
// 			{if (valueOfCircle <= 360 && valueOfCircle > 270)
// 			{
// 				/* code */
// 				std::cout << "This the the four quater of the circle" << endl;
// 				break;
// 			}}
				
// 		default:
// 			{std::cout << "there is invalid value of circle" << endl;
// 			break;}
// 		}
// }

// int main(){
// 	int value;
// tryAgain:
// 	std::cout << "Enter the value you want to ask: " ;
// 	std::cin >> value;
// 	if(value < 0)
// 		goto tryAgain;

// 	thePartOfCircle(value);c
// }

#define MAX(a,b) a > b ? a : b

// void caculate(int input){
// 	unsigned int sum = 1;
// 	int i;
// 	for (i = 1; sum < input; i++)
// 	{
// 		/* code */		
// 		sum *= 2;
// 	}
// 	if (sum == input)
// 		std::cout << input << " is 2^" << (i-1) << " format" << std::endl;
// 	else
// 		std::cout << input << " is " << " not 2^kformat" << std::endl;

// 	std::cout << "Max number is: " << int(MAX(sum, input)) << std::endl;
// }

float findTheBiggestNumber(float a[], int SIZE){
	float maxNumber = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		/* code */
		if(maxNumber < a[i])
			maxNumber = a[i];
	}
	return maxNumber;
}

bool checkTriangel(float a, float b, float c){
	bool isTriangel = false;
	if((a + b > c) && (b + c > a) && (a + c > b))
	// if((a + b <= c) || (b + c <= a) || (a + c <= b))
		isTriangel = true;
	return isTriangel;
}

float firstDegreeEquation(float a, float b){
	return (float)((-b)/a);
}

float secondDegreeEquation(float a, float b, float c){
	return (float)((b*b) - (4*a*c));
}

void detectNumberElement(int* a, int* b, int* c, int input){
	*a = input / 100;
	*b = (input%100)/10;
	*c = (input%100)%10;
}

void WriteLogFile(const char* szString)
{
//   #IFDEF DEBUG

  FILE* pFile = fopen("logFile.txt", "a");
  fprintf(pFile, "%s\n",szString);
  fclose(pFile);

//   #ENDIF

}

void covertDec2Hex(int n){
	// char array to store hexadecimal number
    char hexaDeciNum[100];
 
    // counter for hexadecimal number array
    int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        int temp = 0;
 
        // storing remainder in temp variable.
        temp = n % 16;
 
        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp ;
			hexaDeciNum[i] += 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
	WriteLogFile(hexaDeciNum);
}

long deQuy(int input){
	long result = 0;
	if(input == 0)
		result = 1;
	else
		result = input*deQuy(input-1);
	return result;
}

int main(){
	int input;
	float a,b,c;
	// float a[] = {1.1 , 3.6, 11.2, 2.3, 5, 0, 0, 0};
	// int SIZE = (sizeof(a))/sizeof(int);
	// std::cout << "size of array is: " << SIZE << std::endl;
	float x;
	char conditionPress;
	int numOfHunreds, numOfTens, numOfUnits; 
// Try_Again:
	do 
	{
		/* code */
		std::cout << "Enter your number: ";
		std::cin >> input ;
		
		// goto Try_Again;
	} while(input < 0);

	std::cout << "HEX display number: " << std::hex << input << std::endl;
// 	// std::cout << "Your result is: " << caculate(input) << std::endl;
// 	caculate(input);
	// std::cout << "The biggest number is: " << float(findTheBiggestNumber(a, SIZE)) << std::endl;
	// std::cout << "Do you wanna continue? Y/N" << std::endl;
	// std::cin >> conditionPress;
	// if (conditionPress == 'y' || conditionPress == 'Y')
	// 	goto Try_Again;
	// else
	// 	std::cout << "Ok then BYE" << std::endl;
	// if(checkTriangel(a,b,c))
	// 	std::cout << "This is the TRIANGEL" << std::endl;
	// else
	// 	std::cout << "NO, THIS IS NOT" << std::endl;
	// std::cout << "The result is: " << firstDegreeEquation(a,b) << std::endl;
	// std::cout << "The result is: " << secondDegreeEquation(a,b,c) << std::endl;
	// return 1;
	detectNumberElement(&numOfHunreds, &numOfTens, &numOfUnits, input);
	std::cout << "The result is: " << numOfHunreds <<" - " << 
	numOfTens <<" - " << numOfUnits  << std::endl;


	// std::cout << "The Hex is: " <<  << std::endl;
	covertDec2Hex(input);
	b = deQuy(input);
	std::cout << "Giai thua N is: " << b << std::endl;
}	

// Excersice

