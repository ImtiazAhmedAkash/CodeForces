/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Fancy Fence

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define deb(x) cout << #x << " = " << x << nl

/*
 * The formula for individual angle of a regular polygon of n side is 
 * angle = (n - 2) * 180 / n
 * For a given angle, if the n is an integer, then the angle is of a regular polygon.
 * n will be an integer, if 360 is divisible by (180 degree - angle in degree).
 */

string solve()
{
    int angle;
    cin >> angle;

    if (360 % (180 - angle) == 0)
        return "YES";
    return "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        cout << solve() << nl;

    return 0;
}