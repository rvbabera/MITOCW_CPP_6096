#include<iostream>
#include<cstdlib>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int* array, const int len)
{
    for (int i = 1; i < len; i++)
    {
        for( int j = i-1; j >= 0; j--)
        {
            if ( *(array + j + 1 ) < *(array + j))
            {
                swap((array + j + 1) , (array + j));
            }
        }
    }
}

void printArr(int* arr, int len)
{
    for ( int i = 0; i < len; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}


int main(int argc, char** argv)
{

    // int *ptr = new int(1);
    // *ptr = 10;

    // std::cout<<"val of ptr is : "<<*ptr<<std::endl;

    // delete(ptr);

    int arr[] = {2,3,23,1,5,45,4,9,12,8};
    insertion_sort(arr, 10);
    printArr(arr,10);
    return 0;
}