#include "geometry.h"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
}

int Point::getX() const { return this->x; }
int Point::getY() const { return this->y; }

void Point::setX(const int newX) 
{
    this->x = newX;
}
void Point::setY(const int newY) 
{
    this->y = newY;
}

void Point::showPoint()
{
    std::cout<<"("<<getX()<<","<<getY()<<"), ";
}


void PointArray::insert(const int position, const Point &p)
{
    if (position > this->size || position <= 0)
    {
        std::cout<<"Error : position for insert is outside the point array"<<std::endl;
        return;
    }
    Point *ptr = new Point[this->size + 1];
    this->size += 1;
    for (int i = 0; i < this->size; i++)
    {
        ptr[i] = (i < position -1) ? this->points[i] : this->points[i-1];
    }
    ptr[position -1] = p;
    delete[] this->points;
    this->points = ptr;
}
void PointArray::push_back(const Point& p)
{
    Point *ptr = new Point[this->size + 1];
    for (int i = 0; i < this->size; i++)
    {
        ptr[i] = this->points[i];
    }
    delete[] this->points;
    this->size += 1;
    this->points = ptr;
    this->points[this->size -1] = p;
}
void PointArray::showAddr()const
{
    std::cout<<"Addr : "<<std::hex<<(this->points)<<std::dec<<std::endl;
}
void PointArray::printPointArray()const 
{

    for (int i = 0; i < this->size; i++)
    {
        // std::cout<<"("<<this->points[i].getX()<<","<<this-points[i].getY()<<")"<<", ";
        this->points[i].showPoint();
    }
    std::cout<<std::endl;
}
PointArray::PointArray(const Point points[], const int len)
{
    
    this->points = new Point[len];
    this->size = len;
    std::cout<<"geo 79\n";
    for ( int i = 0; i < this->size; i++)
    {
        this->points[i] = points[i];
    
    }
    std::cout<<"geo 85\n";
}

PointArray::PointArray(const PointArray& pv)
{
    this->size = pv.size;
    // std::cout<<"51\n";
    this->points = new Point[this->size];
    // std::cout<<"52\n";
    // std::cout<<"55\n";
    for (int i = 0; i < this->size; i++)
    {
        this->points[i] = pv.points[i];
    }

    // std::cout<<"63\n";
}

PointArray::PointArray()
{
    this->size = 0;
    this->points = nullptr;
}

PointArray::~PointArray()
{
    delete[] this->points;
}

void PointArray::resize(int newSize)
{
    Point* ptr = new Point[newSize];
    int filled = (newSize < this->size) ? newSize : this->size;

    for (int i = 0; i < filled; i++)
    {
        ptr[i] = this->points[i];
    }

    delete[] this->points;
    this->points = ptr;
    this->size = newSize;
}

void PointArray::remove(const int pos)
{
    if ( pos <= 0 || pos > this->size) { return; }
    Point *ptr = new Point[this->size -1 ];
    this->size -= 1;

    for ( int i = 0; i < this->size; i++)
    {
        ptr[i] = (i < pos -1) ? this->points[i] : this->points[i+1];
    }

    delete[] this->points;
    this->points = ptr;

}

const int PointArray::getSize() const
{
    return this->size;
}

void PointArray::clear()
{
    delete[] this->points;
    this->points = nullptr;
    this->size = 0;
}

const Point *PointArray::get(const int position) const
{
    if ( position <= 0 || position > this->size) { return nullptr; }
    else { return &(this->points[position-1]); }
}
Point *PointArray::get(const int position)
{
    if ( position <= 0 || position > this->size) { return nullptr; }
    else { return &(this->points[position-1]); }
}