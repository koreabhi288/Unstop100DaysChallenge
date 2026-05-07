#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int total;
    if (!(cin >> total)) 
    {
      return 0;
    }

    vector<int> arr(total);
    for (int i = 0; i < total; i++) 
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < total; i++) {
        freq[arr[i]]++;
    }

    int n = total / 2;

    for (auto const& it : freq) 
    {
        if (it.second == n) 
        {
            cout << it.first << endl;
            break; 
        }
    }

    return 0;
}
