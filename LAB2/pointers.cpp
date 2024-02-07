#include<bits/stdc++.h>


void setString(char **strPtr)
{
    int x;
    std::cin>>x;

    //*strPtr = ( x < 0 ) ?  "Negative!" : "NonNegetive";

    if ( x < 0 )
        *strPtr = "Negative!"; 
    else 
        *strPtr = "NonNegetive!";
}

int main(int argc, char** argv)
{
    char *str;
    setString(&str);
    std::cout<<str<<std::endl;
    return 0;
}