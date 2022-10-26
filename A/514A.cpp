/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Chewbacca and Number

#include <bits/stdc++.h>
using namespace std;

char minimum(char a, char b)
{
    return (a < b) ? a : b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str, res;
    cin >> str;

    /*
     * The input was takes as a string. A for loop was performed in the whole string.
     * The minimum value between str[i] and 9 - str[i] was assigned to the resultant string.
     * '9' - str[i] is equal to an integer value, '0' was added with the value to make it a char.
     * Finally, if res[0] is '0', change it to 9. Because the result shouldn't start with a zero.
     */

    for (int i = 0; i < str.size(); i++)
        res += minimum(str[i], ('9' - str[i]) + '0');

    if (res[0] == '0')
        res[0] = '9';

    cout << res << '\n';

    return 0;
}