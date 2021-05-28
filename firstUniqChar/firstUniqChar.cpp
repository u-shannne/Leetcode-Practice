#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <math.h>
using namespace std;
int firstUniqChar(string s)
{
    map<char, bool> mapChar;
    for (int i = 0; i < s.size(); i++)
    {
        if (mapChar.find(s[i]) == mapChar.end())
        {
            mapChar[s[i]] = true;
        }
        else
        {
            mapChar[s[i]] = false;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (mapChar[s[i]])
            return i;
    }
    return -1;
}
int main()
{
    cout << firstUniqChar("aabb") << endl;
    return 0;
}