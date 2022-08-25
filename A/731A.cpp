// Night at the Museum

#include <bits/stdc++.h>
using namespace std;

#define min(a, b) ((a < b) ? a : b)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;

    int length = str.length();

    // first of all, we are counting the minimum step
    // from the letter 'a' to the first character of the string
    // as the dial will be on letter 'a' initially
    int sum = min(abs(str[0] - 'a'), 26 - abs(str[0] - 'a'));

    // then for each character, 
    // we are counting the minimum step from its previous character
    // sum of all the minimum characters will be the answer
    for (int i = 1; i < length; i++)
        sum += min(abs(str[i] - str[i - 1]), 26 - abs(str[i] - str[i - 1]));

    cout << sum << "\n";
    
    return 0;
}