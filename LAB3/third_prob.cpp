#include<iostream>
#include"geometry.h"




int main()
{
    Point p1[] = {Point(10,12), Point(16,2), Point(9,-1)};
    
    PointArray pArray_1(p1,3);
    
    PointArray pArray_2(pArray_1);
    

    pArray_1.printPointArray();
    pArray_1.showAddr();
    
    pArray_2.printPointArray();
    pArray_2.showAddr();

    pArray_2.resize(1);
    pArray_2.printPointArray();
    pArray_2.showAddr();

    pArray_2.push_back(Point(10,34));
    pArray_2.push_back(Point(10,35));
    pArray_2.push_back(Point(10,23));
    pArray_2.push_back(Point(12,23));
    pArray_2.printPointArray();

    pArray_2.insert(5, Point(34,45));
    pArray_2.printPointArray();

    std::cout<<"after removing at pos 3"<<std::endl;
    pArray_2.remove(3);
    pArray_2.printPointArray();

    std::cout<<"point array size is : "<<pArray_2.getSize()<<std::endl;
    
    Point* pt = pArray_2.get(3);
    std::cout<<"point at pos 3 is  : ";
    pt->showPoint();
    std::cout<<std::endl;

    pArray_2.clear();
    pArray_2.printPointArray();

    

    return 0;
}