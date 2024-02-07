#include<iostream>
#include<cstdlib>
#include<ctime>

int main(int argc, char** argv)
{
    srand(time(0));
    
    int randNum = rand();
    std::cout<<"The random number is : "<<randNum<<std::endl;
    return 0;
}