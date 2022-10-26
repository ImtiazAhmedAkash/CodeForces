/*  In the Name of ALLAH, the most gracious, the most merciful  */

// Chat Room

#include <bits/stdc++.h>
using namespace std;

string solve()
{
    string str, a = "hello";
    cin >> str;
    int index = 0;

    /*
     * We will search in string str, for every element for string a.
     * If one element is found, go to the next index of string a and search for it.
     * If index becomes a.size(), i.e. all of the elements of string a is present in str serially,
     * Vasya will manage to say hello, so print YES. Otherwise, NO.
     */

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == a[index])
            index++;
        if (index == a.size())
            return "YES";
    }
    return "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << solve() << '\n';

    return 0;
}