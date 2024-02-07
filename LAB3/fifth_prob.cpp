#include"Polygon.h"
#include"Rectangle.h"
#include"Triangle.h"

int Polygon::num = 0;

int main()
{
    std::cout<<"Hello\n";

    //Rectangle rect(Point(1,1),Point(3,2));
    Rectangle rect(1,1,4,3);
    rect.getPoints()->printPointArray();
    int size = rect.getNumSides();

    std::cout<<"size : "<<size<<std::endl;
    std::cout<<"Hello\n";
    std::cout<<"Rectangle area is : "<<rect.area()<<std::endl;

    std::cout<<"............................. Triangle ............................\n";
    Triangle tri(Point(1,1), Point(4,4), Point(5,0));
    std::cout<<"sides is : "<<tri.getNumSides()<<std::endl;
    std::cout<<"area is : "<<tri.area()<<std::endl;


    return 0;
}