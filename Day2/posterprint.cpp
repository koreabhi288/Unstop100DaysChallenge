#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string s;
        cin >> s;

        bool possible = true;

        int i = 0;
        while (i < N) {
            if (s[i] == 'W') {
                i++;
                continue;
            }

            int countB = 0, countR = 0;

            while (i < N && s[i] != 'W') {

                if (s[i] == 'B') 
                {
                  countB++;
                }
                if (s[i] == 'R')
                { 
                  countR++;
                }
                i++;
            }

            if (countB == 0 || countR == 0) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}