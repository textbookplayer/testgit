#include <iostream>

class Cpoint{
public:
    Cpoint();
    Cpoint(int x, int y);
    void show_xy();
    
private:
    int m_x;
    int m_y;
};

class CCIR : public Cpoint {
public:
    CCIR();
    CCIR(float r);
    void show_r();

private:
    float m_r;
};
