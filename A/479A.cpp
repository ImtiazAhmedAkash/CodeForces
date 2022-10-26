/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Expression

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define deb(x) cout << #x << " = " << x << nl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    /*
     * Among three numbers, if we have to do a '+' and '*' operation, 
     * then the sum of the smallest two, multiplied by the biggest element will be the maximum value.
     * In this problem, as we are not allowed to sort the numbers, 
     * what we can do is keep the bigger value of the first and last numbers, at the end.
     * The middle element i.e. value of b, is not changed.
     * So that, (a + b) * c becomes the maximum, if we do both '+' and '*' operation together.
     * 
     * For test case like 1 1 1, the sum of these three will be the largest.
     * 
     * For test case like 2 10 3, the multiplication of these three will be the largest.
     * 
     * So, we will check which of these three terms is the largest for the given test case.
     * In max function, we can pass multiple parameters by surrounding them with curly braces.
     * The maximum value of these three terms is the result.
     */

    int a, b, c;
    cin >> a >> b >> c;

    if (a > c)
        swap(a, c);

    int res = max({a * b * c, a + b + c, (a + b) * c});

    cout << res << nl;

    return 0;
}