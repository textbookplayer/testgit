#include <iostream>

using namespace std;

int add10(int &a){
    return a += 10;
}

int main(){
    int a = 5;
    cout << add10(a) << endl;
    return 0;
}