#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans = 0;

int dfs(int node, vector<pair<int,int>> &tree)
{
    if(node == -1)
        return 0;

    int leftHeight = dfs(tree[node].first, tree);
    int rightHeight = dfs(tree[node].second, tree);

    ans = max(ans, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> tree(n + 1);

    for(int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        tree[i] = {l, r};
    }
    dfs(1, tree);

    cout << ans << endl;

    return 0;
}