#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <math.h>
using namespace std;
int convert2number(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0' + 26;
    else if (c >= 'a' && c <= 'z')
        return c - 'a';
    else if (c >= 'A' && c <= 'Z')
        return c - 'A';
    else
        return -1;
}
bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    int head, tail;
    bool ans = true;
    while (i < j)
    {
        while (i < s.size() && convert2number(s[i]) == -1)
        {
            i++;
        }

        while (j > -1 && convert2number(s[j]) == -1)
        {
            j--;
        }

        if (i >= j)
            break;
        head = convert2number(s[i]);
        tail = convert2number(s[j]);

        if (head != tail)
        {
            ans = false;
            break;
        }
        ++i;
        --j;
    }
    return ans;
}
int main()
{

    cout << isPalindrome("0P");
    cout << isPalindrome("A man, a plan, a canal: Panama");
    cout << isPalindrome("race a car");
    cout << isPalindrome(".,");
    cout << isPalindrome(",./l");

    return 0;
}