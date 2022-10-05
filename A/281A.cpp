// Word Capitalization

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;

    /* If the first letter (str[0]) is small letter, make it capital, by subtracting 32.
     * if (str[0] >= 'a' && str[0] <= 'z')
     *     str[0] -= 32;
     * We can also use built-in toupper function.
     */

    str[0] = toupper(str[0]);
    cout << str;

    return 0;
}