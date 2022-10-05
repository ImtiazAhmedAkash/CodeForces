// Queue at the School

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    /*
     * We will traverse the string backwards. (Personal preference, no other particular reason)
     * If str[i] == 'G' and str[i - 1] == 'B', (i.e. a boy is in front of a girl) swap them and decrement i by 1.
     * Because, after swapping operation, i will be i - 1. As, we have previously swapped
     * str[i - 1] with str[i], this time [i - 1] index will be skipped.
     */

    while (t--)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (str[i] == 'G' && str[i - 1] == 'B')
            {
                swap(str[i], str[i - 1]);
                i--;
            }
        }
    }

    cout << str << '\n';

    return 0;
}