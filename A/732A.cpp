// Buy a Shovel

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k, r;
    cin >> k >> r;

    // if the remainder of total price (k * i) by 10
    // is equal to 0 to r, i is the minimum number of 
    // shovel that needed to be bought
    for (int i = 1; ; i++)
    {
        if ((k * i) % 10 == r || (k * i) % 10 == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}