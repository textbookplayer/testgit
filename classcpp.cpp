#include <iostream>
#include "classcpp.hpp"

Cpoint::Cpoint(){
    this->m_x = 0;
    this->m_y = 0;
    std::cout << "This is constructor of Cpoint class" << std::endl;
};

Cpoint::Cpoint(int x, int y){
    this->m_x = x;
    this->m_y = y;
};

void Cpoint::show_xy(){
    std::cout << "X element is: " << this->m_x << std::endl;
    std::cout << "Y element is: " << this->m_y << std::endl;
}

CCIR::CCIR(){
    this->m_r = 0;
}

CCIR::CCIR(float r){
    this->m_r = r;
}

void CCIR::show_r(){
    std::cout << "R element is: " << this->m_r << std::endl;
}