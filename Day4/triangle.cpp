#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[100][100] = {0};

    arr[0][0] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else
            {
=                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for(int j = 0; j <= n; j++)
    {
        cout << arr[n][j] << " ";
    }

    return 0;
}