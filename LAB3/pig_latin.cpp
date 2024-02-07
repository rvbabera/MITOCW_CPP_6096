#include<iostream>
#include<string>

typedef std::basic_string<char> string;

void pig_latin(const string& word, string& pig_latin)
{
    int start, end, len;
    len = word.length();
    end = len + 3;
    for ( int i = 0; i < len; i++)
    {
        
        if ( word[i] == 'a' || 
             word[i] == 'e' ||
             word[i] == 'i' ||
             word[i] == 'o' ||
             word[i] == 'u' 
            )
        {
            start = i;
            break;
        }
    }

    for (int i = 0; i < len - start; i++)
    {
        pig_latin  += word[i + start];
    }

    pig_latin += '-';

    for (int i = len - start  + 1; i < end - 2; i++)
    {
        pig_latin += word[i - len + start -1];
    }

    pig_latin += 'a';
    pig_latin += 'y';

}

void pig_latin_new(string& name, string& pig_latin)
{
    
}

void test(string& str)
{
    //str.append('c');
}

int main(int argc, char** argv)
{
    string name(argv[1]);
    string pig_name;

    pig_latin(name, pig_name);
    // test(pig_name);
    std::cout<<"Pig Lating : "<<pig_name<<std::endl;

    return 0;
}