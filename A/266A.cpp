// Stones on the Table

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    string str;
    cin >> str;

    // The answer is total number of comparison of same adjacent letter
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
            count++;
    }

    cout << count << "\n";

    return 0;
}