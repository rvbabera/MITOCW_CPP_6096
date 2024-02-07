#include<iostream>

int main()
{
    int a = 12;

    int b = (a < 12) ? -a : a;

    std::cout<<"b is : "<<b<<std::endl;

    return 0;
}