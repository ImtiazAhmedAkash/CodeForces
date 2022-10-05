// Nearly Lucky Number

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// counts the total lucky digits in the given number
ll mycount(ll num)
{
    ll c = 0;
    while (num > 0)
    {
        if (num % 10 == 4 || num % 10 == 7)
            c++;
        num /= 10;
    }
    return c;
}

// checks if 'count' is a lucky number or not
string checklucky(ll value)
{
    if (value == 0)
        return "NO";

    while (value > 0)
    {
        if (value % 10 != 4 && value % 10 != 7)
            return "NO";
        value /= 10;
    }
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    /*
     * First of all, we will check total number of lucky digits in the input number.
     * Then we will check, if the count (total lucky digits in input) is a lucky number.
     */

    ll count = mycount(n);
    cout << checklucky(count) << '\n';

    return 0;
}