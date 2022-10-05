// Soldier and Bananas

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k, n, w;
    cin >> k >> n >> w;

    /*
     * The value of the bananas are 1k, 2k, 3k...wk respectively. They form a series of natural number.
     * The formula for 1+2+3+...+n is n * (n + 1) / 2. As k is common in all the number, the sum is multiplied by k
     * to find out the total expenses for buying k bananas.
     * If total > n, then he has to borrow (total - n) dollars, else he doesn't need to borrow any money.
     */

    int total;
    total = w * (w + 1) * k / 2;

    if (n < total)
        cout << total - n << '\n';
    else
        cout << 0 << '\n';

    return 0;
}