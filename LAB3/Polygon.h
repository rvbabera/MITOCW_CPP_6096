#ifndef POLYGON_H
#define POLYGON_H

#include<iostream>
#include"geometry.h"

class Polygon
{
protected:
const PointArray point_arr;

private:
    /* data */
     
public:
    static int num;

    Polygon(const Point points[], const int len);
    Polygon(const PointArray& pt_arr);
    Polygon();
    ~Polygon();
    virtual double area();
    int getNumPolygons() const;
    int getNumSides() const;
    const PointArray* getPoints() const;
};
// *********************************************************************************************************************************
Polygon::Polygon(const PointArray& pt_arr) : point_arr(pt_arr)
{
    this->num += 1;
}

// *********************************************************************************************************************************
Polygon::Polygon()
{
    this->num += 1;
}

// ********************************************************************************************************************************
const PointArray* Polygon::getPoints() const
{
    return &(this->point_arr);
}

// ********************************************************************************************************************************
int Polygon::getNumSides() const
{
    return (this->point_arr.getSize());
}

// ********************************************************************************************************************************
int Polygon::getNumPolygons() const
{
    return (this->num);
}

// ********************************************************************************************************************************
double Polygon::area()
{
    //std::cout<<"poly 44\n";
    double area = 0;
    int n = this->point_arr.getSize();

    if (n < 3) { return area; }

    for (int i = 0; i < n-1; i++)
    {
      //  std::cout<<"poly 52\n";
        Point point_i = *(this->point_arr.get(i+1));
        Point point_i_next = *(this->point_arr.get(i+2));

        //std::cout<<"poly 56\n";

        area += (0.5) * ( (point_i.getX() * point_i_next.getY()) - (point_i_next.getX() * point_i.getY()) );

        // std::cout<<"poly 60\n";
    }

    Point point_n = * (this->point_arr.get(n));
    Point point_1 = * (this->point_arr.get(1));

    area += (0.5) * (point_n.getX() * point_1.getY() - point_1.getX() * point_n.getY());
    // std::cout<<"poly 61\n";
    return area;
}

// ***********************************************************************************************************************************
Polygon::Polygon(const Point points[], const int len) : point_arr(points, len)
{    
    this->num += 1;
}

// ***********************************************************************************************************************************
Polygon::~Polygon()
{
    this->num -= 1;
}

#endif