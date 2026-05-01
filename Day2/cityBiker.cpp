#include <iostream>
#include <vector>
using namespace std;

int highestAltitude(int n, vector<int>& arr) {
    int crrAlt = 0;
    int maxAlt = 0;

    for (int i = 0; i < n; i++) {
        crrAlt += arr[i];
        maxAlt = max(maxAlt, crrAlt);
    }

    return maxAlt;
}

int main() {
    int n;
    cin >> n;

    vector<int> gain(n);
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    cout << highestAltitude(n, gain) << endl;

    return 0;
}