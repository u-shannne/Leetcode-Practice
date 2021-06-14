#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
string longestCommonPrefix()
{
    vector<string> strs = {
        "dog", "racecar", "car"};
    if (strs.size() > 200)
        return "";
    string output = strs[0];
    int j = 0, i = 0;
    while (i < strs.size() && output.size() > 0)
    {
        j = 0;
        while (j < output.size() & output[j] == strs[i][j])
            j++;
        output.erase(output.begin() + j, output.end());
        i++;
    }

    return output;
}
int main()
{
    cout << longestCommonPrefix() << endl;

    return 0;
}