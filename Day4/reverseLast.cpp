#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    char ch;

    cin>>s>>ch;

    int idx = -1;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] == ch)
        {
            idx = i;
            break;
        }
    }
    if(idx != -1)
    {
        reverse(s.begin() + idx, s.end());
    }

    cout << s << endl;

    return 0;
}