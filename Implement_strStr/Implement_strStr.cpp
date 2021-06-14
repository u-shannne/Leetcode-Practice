#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int flag = 1;
    if (haystack.size() < needle.size())
        return -1;
    if (needle.size() == 0)
        return 0;
    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        if (haystack[i] == needle[0])
        {
            flag = 1;
            for (int j = 0; j < needle.size(); j++)
            {
                // printf("%c : %c",haystack[i+j],needle[j])
                if (haystack[i + j] != needle[j])
                    flag = 0;
            }
            if (flag == 1)
                return i;
        }
    }
    return -1;
}
int main()
{
    cout << strStr("hello", "ll") << endl;
    cout << strStr("aaaaa", "bba") << endl;
    cout << strStr("", "") << endl;
    cout << strStr("", "ll") << endl; //-1
    cout << strStr("ll", "") << endl; //0
}