// Vanya and Fence

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, width, x, sum = 0;
    cin >> t >> width;

    while (t--)
    {
        cin >> x;

        // for every input increment sum by 1
        sum++;

        // if a person is taller than the height
        // increment sum by 1 again
        if (x > width)
            sum++;
    }

    cout << sum << endl;

    return 0;
}