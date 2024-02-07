#include <iostream>




/*
Q -> Implement the min functionality from part 1 using only preprocessor macros. (Hint: You
will probably need the ternary operator – the ?: syntax.) 
*/
#define min(a,b) ( (a < b) ? a : b )

/*
 Question --> Using templates, implement a min function which returns the minimum of two elements of
any comparable type (i.e., it takes two arguments of some type T, and works as long as values
of type T can be compared with the < operator).
(To test this function, you may need to omit your usual using namespace std; line,
since there is already an std::min function.)
*/
// namespace rvbabera
// {
//     template <typename T>
//     T min(T a, T b)
//     {
//         return (a < b) ? a : b;
//     }
// }

int main()
{
    // std::cout<<"min of 1, 12 is "<<rvbabera::min<int>(1,12)<<std::endl;
    // std::cout<<"min of a , c is "<<rvbabera::min<char>('a','c')<<std::endl;
    // std::cout<<"min of 12.34, 45.1 is "<<rvbabera::min<double>(12.34, 45.1)<<std::endl;

    std::cout<<"min of 45, 12 is "<<min(45,12)<<std::endl;
    std::cout<<"\n min of a , c is "<<min('a','c')<<std::endl;
    std::cout<<"\n min of 12.34, 45.1 is "<<min(12.34, 45.1)<<std::endl;

    std::cout<<"\n hello"<<std::endl;

    return 0;
}