#include"Polygon.h"

class Rectangle : public Polygon
{
private:
    /* data */
public:
    Rectangle( const int x, const int y, const int w, const int h );
    Rectangle( const Point lower_left, const Point upper_right );
    ~Rectangle();
    //PointArray allPoints( const Point lower_left, const Point upper_right ) const;
    virtual double area() const;
};

// ********************************************************************************************************************************
Point rectPoints[4];

Point* updateRectPoints(Point lower_left, Point upper_right)
{
    rectPoints[0] = Point(lower_left.getX(), upper_right.getY());
    rectPoints[1] = upper_right;
    rectPoints[2] = lower_left;
    rectPoints[3] = Point(upper_right.getX(), lower_left.getY());

    return rectPoints;
}

// ********************************************************************************************************************************
Rectangle::Rectangle(const int x, const int y, const int w, const int h) : Polygon(updateRectPoints( Point(x,y), Point(x+w, y+h)), 4)
{
    
}

// **********************************************************************************************************************************
Rectangle::Rectangle( const Point lower_left, const Point upper_right ) : Polygon(updateRectPoints(lower_left, upper_right), 4)
{
    // this->num += 1;
}

// **********************************************************************************************************************************
double Rectangle::area() const
{
    int width =  abs( (this->point_arr.get(1))->getX() - (this->point_arr.get(4))->getX() );
    int height = abs( (this->point_arr.get(1))->getY() - (this->point_arr.get(4))->getY() );
    
    return width * height * 1.0;
}

// ***********************************************************************************************************************************
Rectangle::~Rectangle()
{
    // std::cout<<"rect destructor called\n";
    // this->num -= 1;
}
