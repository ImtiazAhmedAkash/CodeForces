/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Football

#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string str;
    cin >> str;

    /*
     * Iterate a loop from the first index, to the 2nd last index of the index.
     * The last index will be checked, when i will be the 2nd last index.
     * If the respective elements are the same, start counting. Increment i inside the while loop to check the next indexes.
     * If count is equal to 7, return YES. Count can be for any elements 0 or 1.
     * If after traversing the whole string, there is not 7 same elements together, return NO.
     */

    for (int i = 0; i < str.size() - 1; i++)
    {
        int count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;

            if (count == 7)
                return "YES";
        }
    }
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << solve() << '\n';

    return 0;
}