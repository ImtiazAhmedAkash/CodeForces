// Bit++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    int x = 0;
    string str;

    /*
     * n is the number of statements in the program
     
     * the 2nd character (str[1]) of the string determines the operation.
     * For example, ++x or x++, the second/middle character '+' doesn't change in these expressions.
     * Similarly, --x or x--, the second/middle character '-' doesn't change.
     * If arr[1] is '+', then increment x by 1, else decrement x by 1. 
     * After executing n number of executions, print x.
     */
    
    while (n--)
    {
        cin >> str;
        if (str[1] == '+')
            x++;
        else
            x--;
    }

    cout << x << '\n';
    ;

    return 0;
}