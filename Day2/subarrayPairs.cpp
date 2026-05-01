#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int calculatePairs(int n, vector<int> &arr)
{
    unordered_map<int, int> count;
    for(int x : arr)
    {
        count[x]++;
    }

    unordered_map<int, int> sumFreq;

    for(auto it1 : count)
    {
        for(auto it2 : count)
        {
            int a = it1.first;
            int b = it2.first;

            if(a == b)
            {
                int c = it1.second;
                sumFreq[a + b] += (c * (c - 1)) / 2;
            }
            else if(a < b)
            {
                sumFreq[a + b] += it1.second * it2.second;
            }
        }
    }
    int maxFreq = 0;
    for(auto it : sumFreq)
    {
        maxFreq = max(maxFreq, it.second);
    }

    return maxFreq;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << calculatePairs(n, arr);
}