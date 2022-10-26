/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Amusing Joke

#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string a, b, c, res;
    cin >> a >> b >> c;

    /*
     * First check, if there is any extra letters or any missing letters.
     * If the sum of (a and b string size) is not equal to c string size, 
     * then either there are extra letters or missing letters. In both case, the answer will be NO.
     * 
     * If the size is equal then we will take a resultant string and copy a and b into it.
     * After that, we will sort both c and res strings.
     * If now, c and res are equal, the names can be rearranged, i.e. YES. else NO.
     */

    if (a.size() + b.size() != c.size())
        return "NO";

    res = a + b;
    sort(c.begin(), c.end());
    sort(res.begin(), res.end());

    if (c == res)
        return "YES";
    return "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << solve() << '\n';

    return 0;
}