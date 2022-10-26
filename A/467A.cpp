// George and Accomodation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    /*
     * p is the number of people living in a room, and q is the maximum capacitiy
     * If there are at least two empty space in a room, George and his friend can be in the same room.
     * If (p + 2) <= q (total capacity), they can stay in the same room.
     */

    int count = 0;
    while (t--)
    {
        int p, q;
        cin >> p >> q;

        if (p + 2 <= q)
            count++;
    }

    cout << count << '\n';

    return 0;
}