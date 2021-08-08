#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <iostream>

bool memalloc(int **, int);
void memfree(int**);

int main(){
    static int* pInt = NULL;
    bool bRes = memalloc(&pInt, 100);
    // bool bRes = *pInt;
    std::cout << "value " << pInt << "\n" ;
    std::cout << "data of poiter " << *pInt << "\n" ;
    std::cout << "address " << &pInt << "\n" ;
    if (bRes)
    {
        /* code */
        std::cout << "\nMemmory allocation is successfull" << std::endl;

    }
    else
    {
        std::cout << "\nMemmory allocation is FALSE" << std::endl;
    }
    
    memfree(&pInt);
    std::cout << "AFTER\n";
    std::cout << "value " << pInt << "\n" ;
    std::cout << "data of poiter " << *pInt << "\n" ;
    std::cout << "address " << &pInt << "\n" ;
    return 0;
}

bool memalloc(int** p, int sz){
    *p = (int*)malloc(sz*sizeof(int));
    if (*p == NULL)
    {
        /* code */
        *p = NULL;
        return false;
    }
    memset(*p, 0x00, sz * sizeof(int));
    return true;
}

void memfree(int** p ){
    if (*p)
    {
        /* code */
        free(*p);
        *p = NULL;
    }
    
}