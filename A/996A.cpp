/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Hit the Lottery

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {100, 20, 10, 5, 1}, n;
    cin >> n;

    /*
     * We need to calculate minimum number of bills or notes is needed for 'n' amount of money.
     * We have created an array in decreasing order with all the bills available.
     * We will divide the n by all the elements of the array and then store the remainder in n.
     * After iterating 5 times, the value of res is the required output.
     */

    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        res += n / arr[i];
        n %= arr[i];
    }

    cout << res << '\n';

    return 0;
}