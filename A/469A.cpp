/*  In the Name of ALLAH, the most gracious, the most merciful  */

// I Wanna Be the Guy

#include <bits/stdc++.h>
using namespace std;

set<int> input(set<int> a)
{
    int t, val;
    cin >> t;

    while (t--)
    {
        cin >> val;
        a.insert(val);
    }
    return a;
}

/*
 * As we need to check distinct values, we have used set. 
 * We will pass a set to input function where the elements will be inserted and the set will be returned to main.
 * Then we will do this process again for the 2nd player. This time, the previous set with all the elements 
 * will be passed to the input function, and a final set containing all the distinct values will be returned.
 * 
 * If the distinct value is equal to the total level (n), then they can finish the game. Otherwise, they can't.
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < 2; i++)
        s = input(s);

    if (s.size() == n)
        cout << "I become the guy." << '\n';
    else
        cout << "Oh, my keyboard!" << '\n';

    return 0;
}