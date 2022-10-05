// Wrong Subtraction

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    /*
     * If the last digit of the number is 0, i.e. n % 10 == 0, then n = n / 10
     * else n = n - 1 or n--. This process will repeat k times.
     */

    while (k--)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n << '\n';

    return 0;
}