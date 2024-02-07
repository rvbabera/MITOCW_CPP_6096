#ifndef GEOMETRY_H
#define GEOMETRY_H
#include<iostream>

class Point
{
private:
    /* data */
    int x, y;
public:
    Point(int x = 0, int y = 0);
    ~Point();
    int getX() const; 
    int getY() const;

    void setX(const int newX);
    void setY(const int newY);
    void showPoint();
};

class PointArray
{
private:
    /* data */
    Point *points;
    int size;
public:
    
    PointArray(const Point points[], const int size);
    PointArray(const PointArray& pv);
    ~PointArray();
    PointArray();
    void printPointArray() const;
    void showAddr() const;
    void resize(int newSize);
    void push_back(const Point& p);
    void insert(const int position, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    Point *get(const int position);
    const Point *get(const int position) const;
};

#endif