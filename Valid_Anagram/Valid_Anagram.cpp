#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <math.h>
using namespace std;
bool isAnagram(string s, string t)
{
    vector<int> s_tab;
    vector<int> t_tab;
    s_tab.assign(26, 0);
    t_tab.assign(26, 0);
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        s_tab[s[i] - 'a'] += 1;
        t_tab[t[i] - 'a'] += 1;
    }
    if (s_tab == t_tab)
        return true;
    return false;
}
int main()
{
    cout << isAnagram("anagram", "nagaram") << endl;
    return 0;
}