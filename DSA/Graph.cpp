#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

vector<pair<int, int>> graph2[N];
bool visited[N];
void dfs(int vertex)
{
    cout << vertex << endl;
    visited[vertex] = true;
    for (pair<int, int> child : graph2[vertex])
    {
        int nei = child.first;
        if (visited[nei])
        {
            continue;
        }
        cout << "parent :" << vertex << "child:"<< nei<<endl;
        dfs(nei);
    }
}

int main()
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int v1, v2, wt;
            cin >> v1 >> v2 >> wt;

            graph2[v1].push_back({v2, wt});
            graph2[v2].push_back({v1, wt});
        }

        int j = 2, i = 6;
        for (pair<int, int> child : graph2[i])
        {
            if (child.first == j)
            {
                cout << "Weight between node " << i << " and node " << j << ": " << child.second << endl;
            }
        }
        dfs(1);

        return 0;
    }