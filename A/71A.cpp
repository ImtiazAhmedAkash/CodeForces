// Way Too Long Words

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        int length = s.size();

        if (length > 10)
            cout << s.front() << length - 2 << s.back() << '\n';
        else
            cout << s << '\n';
    }
    
    /*
     * s.front() -> access first character of a string (same as s[0])
     * s.end() -> access last character of a string (same as s[length - 1])
     */
    
    return 0;
}