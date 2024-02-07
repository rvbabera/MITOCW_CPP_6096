#include<iostream>
#define LENGTH 3
#define WIDTH  3
void printArray(const int *array, const int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout<<array[i];

        if (i != len - 1)
            std::cout<<", ";
    }

    std::cout<<std::endl;
}

// void reverse(int *array, const int len)
// {
//     int temp;

//     for (int i = 0; i < len/2; i++)
//     {
//         temp = array[i];
//         array[i] = array[len - i - 1];
//         array[len - i - 1] = temp;
//     }
// }

void reverse(int *array, const int len)
{
    int temp;

    for (int i = 0; i < len/2; i++)
    {
        temp = *(array + i);
        *(array + i) = *(array + len - i - 1);
        *(array + len - i - 1) = temp;
    }
}

void transpose(const int input[][LENGTH], int output[][WIDTH])
{
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            output[i][j] = input[j][i];
        }
    }
}

void printMatrix(const int input[LENGTH][WIDTH])
{
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            std::cout<<input[i][j]<<"\t";
        }

        std::cout<<std::endl;
    }
}

int main( int argc, char** argv )
{
    int arr[] = {12,23,45,67,89,32,54,7,679,4};

    printArray(arr,10);

    reverse(arr,10);

    printArray(arr,10);

    int matrix[][WIDTH] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat_tr[LENGTH][WIDTH];


    return 0;
}