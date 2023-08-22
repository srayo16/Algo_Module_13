#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int arr[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            arr[i][j] = 0;
            if (i == j)
                arr[i][j] = 1;
        }
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a][b] = 1;
        arr[a][a] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}