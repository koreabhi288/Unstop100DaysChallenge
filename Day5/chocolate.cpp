#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
void processQueries(int q, const vector<vector<string>>& queries) {
    
    unordered_map<string, int> mp;

    for(int i = 0; i < q; i++)
    {
        string type = queries[i][0];
        string choc = queries[i][1];
        int x = stoi(queries[i][2]);

        if(type == "1")
        {
            mp[choc] += x;
        }
        else
        {
            if(mp[choc] >= x)
            {
                cout << x << endl;
                mp[choc] -= x;
            }
            else
            {
                cout << mp[choc] << endl;
                mp[choc] = 0;
            }
        }
    }
}
int main() {
    int q;
    cin >> q;

    vector<vector<string>> queries(q, vector<string>(3));

    for (int i = 0; i < q; ++i) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    processQueries(q, queries);

    return 0;
}