// Die Roll

#include <bits/stdc++.h>
using namespace std;

#define max(a, b) ((a > b) ? a : b)

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    // if Dot can get the maximum amount of Yakko or Okko, he will win
    // so if the max of (Yakko, Okko) is 6,
    // Dot has a chance of winning by scoring 6
    // so the total possible events of winning is (6 + 1) - max(Yakko, Okko)
    // thats why we have subtracted from 7
    a = 7 - max(a, b);

    // as we have to print the output like a fraction
    // we need to divide the numerator and the denominator by their gcd
    // in the gcd function, a (the first value) should be
    // greater or equal to b (the second value) for the function to operate
    int g = gcd(6, a);

    cout << a / g << "/" << 6 / g;

    return 0;
}