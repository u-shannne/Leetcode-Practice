
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(void) {
    vector<char> s={'a',' ','b','a'};
    char temp;
    int len = s.size()-1;
    for (int i = 0;i<(s.size()/2);i++){
        if(s[i]==s[len-i]) continue;
        temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;

    }

    for (auto n:s){
        cout<<n<<endl;
    }

    return 0;
    }
