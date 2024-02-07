#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

double distanceFromOrigin(const double x, const double y)
{
    return sqrt(pow(x,2) + pow(y,2));
}

int main(int argc, char** argv)
{
    srand(time(0));

    const int num_samples = 10000000;

    int half_randmax = RAND_MAX / 2;

    int count_inside_circle = 0;

    for (int i = 0; i < num_samples; i++)
    {
        

        double x = ( rand() - half_randmax ) * 1.0 / half_randmax;
        double y = ( rand() - half_randmax ) * 1.0 / half_randmax;

        //std::cout<<"x\t"<<x<<"   y\t"<<y<<std::endl;

        int dist = distanceFromOrigin(x,y);

        //std::cout<<"dist is : "<<dist<<std::endl;

        count_inside_circle += (dist < 1) ? 1 : 0;
    }

    double pi = count_inside_circle / ( 0.25 * num_samples );

    //std::cout<<"count is : "<<count_inside_circle<<std::endl;

    std::cout<<"Value of pi is : "<<pi<<std::endl;
    return 0;
}