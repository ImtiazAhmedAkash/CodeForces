// Carrot Cakes
// Credit: https://codeforces.com/profile/chenmark

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int current_time = 0;

    // checking whether or not any cakes remain at time d
    // Imagine a test case, where the input is 8 6 4 6
    // It takes 12 minutes to bake 8 cakes using 1st oven only
    // and by using two ovens simultaneously
    // so it is not reasonable to build the 2nd oven
    // this loop handles this types of test cases perfectly
    // if we need to bake n = 2*k cakes, and it takes t = d times to
    // bake k cakes and to build the 2nd oven, the loop executes twice
    // and then n becomes zero, and the output becomes "NO"
    while (current_time <= d)
    {
        current_time += t;
        n -= k;
    }

    if (n > 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}