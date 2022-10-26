/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Interesting Drink

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // sorting must be done for implementing binary search
    sort(v.begin(), v.end());

    int t, val;
    cin >> t;
    while (t--)
    {
        cin >> val;

        /*
         * upper_bound returns an iterator that points to an element which is strictly greater than val
         * v.begin() points to the 0-th indexed element
         * if there are 4 element that is less than or equal to val,
         * upper_bound returns an iterator that points to the 5th element (index 4, because index starts from 0)
         */

        auto it = upper_bound(v.begin(), v.end(), val);

        cout << (it - v.begin()) << '\n';
    }

    return 0;
}