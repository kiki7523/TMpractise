#include<iostream>
#include<string.h>
#include <stdlib.h>
#include<string>
#include<map>
using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;
int main()
{
    // char buffer [500]{"aaaaa111sasdadadrgnriung/[/cascau"};
    // int count [256]{0};
    // int c=10;
    // for(int i=0;i<strlen(buffer);i++)
    // {
	// count[buffer[i]]++;//把字符的ascii码当做数组下标 count[]内容就是频率
    // }
    // for(int i=0;i<256;i++)
    // {
    //     if(count[i]!=0)
    //     {
    //         cout<<char(i)<<" "<<count[i]<<endl;//char(i)....char构造函数 把ascii码 转成字符
    //     }

    // }
    map<char,int> ma;//不能填string 第一个参数 每个字符组成了字符串 str[i]是char类型 不是str类型  str代表串，准确的说是串的起始地址 str[i]代表串中的字符
    string aa="aaacccfgedasdg12523";
    for(int i=0;i<aa.size();i++)
    {
        auto it=ma.find(aa[i]);
        if(it!=ma.end())
        {   
            it->second++;
        }
        else{
            ma.insert({aa[i],1});
        }
    }
    for(auto it:ma)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    return 0;

    }
