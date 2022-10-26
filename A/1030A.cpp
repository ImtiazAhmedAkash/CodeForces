// In search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

string check()
{
    int n, val;
    cin >> n;

    /*
     * Input will be taken n times.
     * If any input value is equal to 1, return HARD as no further checking is necessary.
     * Else return EASY.
     */

    while (n--)
    {
        cin >> val;
        if (val == 1)
            return "HARD";
    }
    return "EASY";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << check() << '\n';

    return 0;
}