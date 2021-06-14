#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
string process(string s = "1")
{
    int times = 0;
    char sign;
    string _s;
    int i = 0;
    while (i < s.size())
    {
        times = 0;
        sign = s[i];
        while (s[i] == sign)
        {
            times++;
            i++;
        }
        // printf("i:%d time:%d sign:%c\n", i, times, sign);
        _s.push_back('0' + times);
        _s.push_back(sign);
    }

    return _s;
}
string countAndSay(int n)
{
    string s = "1";
    for (int i = 1; i < n; i++)
    {
        s = process(s);
        cout << s << endl;
    }
    printf("\n\n");
    return s;
}
int main()
{
    cout << countAndSay(4) << endl;

    return 0;
}