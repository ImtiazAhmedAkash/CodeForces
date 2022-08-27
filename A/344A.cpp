// Magnets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0, last = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        // At first, last = 0, and a will be either 01 or 10
        // So, (a != last) will be true, and count will be 1
        // then, the value of 'a' will be assigned to 'last'
        // and the new value will be assigned to 'a'
        // and the compare will go on n times

        if (a != last)
        {
            count++;
            last = a;
        }
    }

    cout << count;

    return 0;
}