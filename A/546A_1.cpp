// Soldier and Bananas
// Credit: https://codeforces.com/profile/ngfam_kongu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll k, n, w;
    cin >> k >> n >> w;

    /*
     * The value of the bananas are 1k, 2k, 3k...wk respectively. They form a series of natural number.
     * The formula for 1+2+3+...+n is n * (n + 1) / 2. As k is common in all the number, the sum is multiplied by k
     * to find out the total expenses for buying k bananas.
     * If he needs to borrow any money, (total - n) will be greater than 0. else if would be less or equal to 0.
     * Print the maximum of value between 0 and total - n.
     * 0LL means 0 is a long long int, we can only compare values of same data types. 
     * In order to compare 0 with a long long number, 0 is declared as 0LL .
     */

    ll total;
    total = w * (w + 1) * k / 2;

    cout << max(0LL, total - n) << '\n';

    return 0;
}