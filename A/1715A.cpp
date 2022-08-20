// Crossmarket

#include <bits/stdc++.h>
using namespace std;

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int x = max(n, m);
        int y = min(n, m);

        // max was assigned to x and min was to y
        // becase of the formula 2 * y + x - 2
        
        if (x + y == 2)
            cout << 0 << "\n";
        else
            cout << 2 * y + x - 2 << "\n";
    }

    return 0;
}