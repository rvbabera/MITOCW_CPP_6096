#ifndef TRIANGLE_H
#define TRIANGLE_H
#include"geometry.h"
#include"Polygon.h"
#include<cmath>

class Triangle : public Polygon
{
    public:
    virtual double area() const;
    Triangle(Point points[]);
    Triangle(Point ptA, Point ptB, Point ptC);
    ~Triangle();
    private:
    
};
// ************************************************************************************************************************************************
Triangle::Triangle(Point points[]) : Polygon(points,3)
{

}

// ************************************************************************************************************************************************
Triangle::Triangle(Point ptA, Point ptB, Point ptC)
{
    Point points[] = {ptA, ptB, ptC};
    Polygon(points,3);
}
// ************************************************************************************************************************************************
Triangle::~Triangle()
{

}

// ************************************************************************************************************************************************
double Triangle::area() const
{
    std::cout<<"tri 38\n";
    int a,b,c;
    double s, area;
    a = sqrt( pow(( this->point_arr.get(0)->getX() - this->point_arr.get(1)->getX()),2) 
                    + pow(( this->point_arr.get(0)->getY() - this->point_arr.get(1)->getY() ),2) );
    b = sqrt( pow(( this->point_arr.get(1)->getX() - this->point_arr.get(2)->getX()),2) 
                    + pow(( this->point_arr.get(1)->getY() - this->point_arr.get(2)->getY() ),2) );
    c = sqrt( pow(( this->point_arr.get(0)->getX() - this->point_arr.get(2)->getX()),2) 
                    + pow(( this->point_arr.get(0)->getY() - this->point_arr.get(2)->getY() ),2) );
    std::cout<<"tri 47\n";
    s = 0.5 * ( a + b + c );

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    std::cout<<"tri 51\n";
    return area;
    
}

#endif