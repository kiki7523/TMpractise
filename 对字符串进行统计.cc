#include<iostream>
#include<string.h>
#include <stdlib.h>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    char buffer [500]{"aaaaa111sasdadadrgnriung/[/cascau"};
    int count [256]{0};

    for(int i=0;i<strlen(buffer);i++)
    {
	count[buffer[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            cout<<char(i)<<" "<<count[i]<<endl;
        }

    }

    }
