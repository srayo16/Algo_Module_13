#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> arr[N];
bool visited[N];
int level[N];

void dfs(int src)
{
    visited[src] = true;

    cout << src << endl; // main kaj

    for (int v : arr[src])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }

    // for (int i = 0; i < arr[src].size(); i++)
    // {
    //     int child = arr[src][i];
    //     if (!visited[child])
    //     {
    //         dfs(child);
    //     }
    // }
}

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : arr[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    dfs(1);

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Level of Node " << i << ": " << level[i] << endl;
    // }

    return 0;
}