#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end){
     for (ull i = start; i <= end; i++)
     {
         /* code */
         if ((i & 1) == 0)
         {
             /* code */
             EvenSum +=i;
         }        
     }
     
}

void findOdd(ull start, ull end){
for (ull i = start; i <= end; i++)
     {
         /* code */
         if ((i & 1) == 1)
         {
             /* code */
             OddSum +=i;
         } 
     }
}
int main(){
    // []{ cout << "akiphm\n"; }();
    // [](const string& x){ cout << x << endl;}("akiphmm\n");
    // auto y = [](int a) -> int {return a+5;}(10);
    // cout << y;
    // int a = 5;
    // [&] { cout << a << endl;}();
    // [=] { cout << a << endl;}();
    ull start = 0, end = 1900000000;
    auto startTime = high_resolution_clock::now();
    // std::thread t1(findEven, start, end);
    // std::thread t2(findOdd, start, end);

    findOdd(start, end);
    findEven(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);


    cout << "OddSum: " << OddSum << endl;
    cout << "EvenSum: " << EvenSum << endl;
    cout << "Sec: " << duration.count()/100000 << endl;
    return 0;
}
fsdfsdfds
//this is edit line
