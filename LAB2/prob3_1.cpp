// #include <iostream>

// void printNum (int number ) { std :: cout << number ; }

// int main () {
    
//     printNum(35) ;

//     return 0;
// }

// Problem 3.4

#include<iostream>
#include<cstdlib>

//int sum (const int a, const int b, const int c) { return (a + b + c); }

double sum ( const double x, const double y ) { return x + y; }

//int sum(const int x, const int y) { return x + y; }

//int sum(const int x, const int y, const int z) { return x + y + z; }
// int sum(const int *arr, const int len)
// {
//     if ( len <= 0 )
//         return 0;
//     int sum = 0;

//     for (int i = 0; i < len; sum += arr[i++]) {}

//     return sum;
// }


// for problem 4.6
int sum(const int *arr, const int len)
{
    if ( len <= 0 )
        return 0;

    return arr[len-1] + sum(arr, len - 1);
}

int sum(const int x, const int y, const int z = 0 , const int a = 0) 
{ 
    return x + y + z + a; 
}

// template <typename T>
// T sum(const T x, const T y) { return x + y; }

int difference(int a, int b)
{
    return std::abs(a - b);
}

// const int ARRAY_LEN = 10;

int main()
{
    // Problem 3.4
    // std::cout<<difference(24,1238)<<std::endl;

    // Problem 3.5
    // std::cout<<sum(1,2,3)<<std::endl;

    // Problem 3.6

    // int arr[ARRAY_LEN] = {10};

    // int *xPtr = arr;
    // int *yPtr = &arr[ARRAY_LEN - 1];

    // std::cout<<*xPtr<<' '<<*yPtr<<std::endl; // Should output 10 0

    // problem 4.1

    // std::cout<<" sum of (12, 13) : "<<sum(12,13)<<std::endl;
    // std::cout<<" sum of (12, 13, 14) : "<<sum(12, 13, 14)<<std::endl;
    // std::cout<<" sum of (12, 13, 14, 15) : "<<sum(12,13,14, 15)<<std::endl;
    // std::cout<<" sum of (12.2, 13.3) : "<<sum(12.2,13.3)<<std::endl;

    // prbolem 4.2

    // std::cout<<" sum of (1, 10.0) : "<<sum(1,10.0)<<std::endl;

    // problem 4.5
    int array[10] = {1,2,3,4,5,6,123};
    int *arr = array;

    std::cout<<"sum of array is : "<<sum(arr, 7)<<std::endl;
    
    return 0;
}
 