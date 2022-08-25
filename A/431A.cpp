// Black Square

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a[5];
    a[0] = 0;

    // the calories for each strip will be stored 
    // in their respective array index 
    // a1 will be stored in a[1] and so on
    for (int i = 1; i < 5; i++)
        cin >> a[i];

    string str;
    cin >> str;

    int length = str.length();

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // lets say, str[i] = '1', this is a character '1'
        // to convert '1' into int 1, '0' was subtracted 
        // and it will take a[1] calories to destroy the square 
        // Here, for str[i] = '1', a[str[i] - '0'] = a[1], as required
        sum += a[str[i] - '0'];
    }

    cout << sum << "\n";

    return 0;
}