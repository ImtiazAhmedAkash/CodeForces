// Petya and Strings

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char a[101], b[101];
    cin >> a >> b;

    // strcasecmp() compare two string irrespective of their cases
    // and return the difference of the ASCII value of string a - string b
    int x = (strcasecmp(a, b) > 0) ? 1 : (strcasecmp(a, b) < 0) ? - 1 : 0;

    cout << x;
    
    return 0;
}