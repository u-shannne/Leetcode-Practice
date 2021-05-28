#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
/*
Input: s = "42"
Output: 42
Explanation: The underlined characters are what is read in, the caret is the current reader position.
Step 1: "42" (no characters read because there is no leading whitespace)
         ^
Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "42" ("42" is read in)
           ^
The parsed integer is 42.
Since 42 is in the range [-231, 231 - 1], the final result is 42.
*/
/*
0 <= s.length <= 200
s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.
*/
int myAtoi(string s)
{
    int h = 0, t = 0;
    bool neg_flag = false;
    int64_t ans = 0, len = 0;
    //Step 1 check whitespace
    while (s[h] == ' ')
        h++;
    //Step 2 check the negative/positive sign
    if (s[h] == '-')
    {
        neg_flag = true;
        h++;
    }
    else if (s[h] == '+')
        h++;
    else
    {
    }
    //miss condition
    if (s[h] == '+' || s[h] == '-')
        return 0;

    //=====================
    //Step 3 start with a letter?
    if ((s[h] >= 'a' && s[h] <= 'z') || (s[h] >= 'A' && s[h] < 'Z'))
    {
        ans = 0;
        return ans;
    }
    //start translate
    //========================miss condition
    while (s[h] == '0')
        h++;
    //===========================
    //look for the end index of number string
    t = h;
    while (s[t] >= '0' && s[t] <= '9')
    {
        t++;
        len++;
    }
    //=======================miss condition

    if (len > 10)
    {
        if (neg_flag)
            return INT32_MIN;
        return INT32_MAX;
    }
    for (int i = 0; i < len; i++)
    {
        // printf("%d %d\n", neg_flag, ans);
        ans += (s[h + i] - '0') * pow(10., float(len - i - 1));
        //=======================miss condition
        if (ans > INT32_MAX)
        {
            if (neg_flag)
                return INT32_MIN;
            return INT32_MAX;
        }
        //========================
    }

    if (neg_flag)
        ans *= -1;
    return ans;
}
int main(void)
{
    cout << myAtoi("2147483646") << endl;
    // cout << myAtoi("42") << endl;

    // cout << myAtoi("-+12") << endl;
    // cout << myAtoi("   -42") << endl;
    // cout << myAtoi("4193 with words") << endl;
    // cout << myAtoi("words and 987") << endl;
    // cout << myAtoi("-91283472332") << endl;
    // cout << myAtoi(" ") << endl;
    // cout << myAtoi("") << endl;
    // cout << myAtoi("2147483648") << endl;
    // cout << myAtoi("20000000000000000000") << endl;
    // cout << myAtoi("  0000000000012345678") << endl;

    return 0;
}
