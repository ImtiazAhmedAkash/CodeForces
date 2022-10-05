// Beautiful Year

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    n++;

    /*
     * Here, n is incremented by 1 because the checking will start from the following year.
     * First of all, we will convert the year (int) into string.
     * Then, we will insert all the characters of the string into a set.
     * If all the elements/digits are distinct, the set size will be 4.
     * If the set size is less than 4, increment n by 1 and 
     * repeat the process (until set size is 4).
     */

    while (1)
    {
        string str = to_string(n);
        
        // As the string element are digit characters, we can use set<int> or set<char>.
        set<int> distinct(str.begin(), str.end());

        if (distinct.size() == 4)
            break;
        n++;
    }
    cout << n;

    return 0;
}