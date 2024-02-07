#include<iostream>

int length(const char* string)
{
    int len = 0;

    while( *string != '\0')
    {
        
        string += 1;
        len += 1;
    }

    return len;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapPtr(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char** argv)
{
    // char *name = "ramvilas";

    // std::cout<<"length of name is : "<<length(name)<<std::endl;

    // int a,b;

    // std::cout<<"Enter number a : ";
    // std::cin>>a;
    // std::cout<<std::endl;

    // std::cout<<"Enter number b : ";
    // std::cin>>b;
    // std::cout<<std::endl;

    // swapByPtr(&a,&b);

    // std::cout<<"a : "<<a<<" b : "<<b<<std::endl;

    // std::cout<<"problem 7.4 \n";

    // int x = 5, y = 6;

    // int *ptr1 = &x, *ptr2 = &y;    

    // swapPtr(&ptr1, &ptr2);

    // std::cout << *ptr1 << " " << *ptr2 <<std::endl;


    char* oddOrEven = "Never odd or even"; //

    char* nthCharPtr = oddOrEven + 5; //1
    std::cout<<"at 1"<<std::endl;
    nthCharPtr = (oddOrEven + 3); //2

    std::cout<<"Value pointer by nthCharPtr : "<<*nthCharPtr<<std::endl; //3

    char ** pointerPtr = &nthCharPtr; //4

    std::cout<<"Value in the pointerPtr : "<<pointerPtr<<std::endl; //5
    std::cout<<"Value pointed by nthCharPtr : "<<**pointerPtr<<std::endl; //6

    nthCharPtr += 1; //7

    std::cout<<"nthCharPtr is currently pointing "<<(nthCharPtr - oddOrEven)<<" char away"<<std::endl; //8

    return 0;
}