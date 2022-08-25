// Games

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // two arrays were used. 
    // one is for storing the home jersey codes
    // and another is for the away jersey codes
    int home[n], away[n];

    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> away [i];
    }

    // for each home jersey, we will compare the away jersey
    // if a home jersey has the same code as the away jersey
    // i.e. they are of the same color
    // count it. The total count will be the number of games
    // where the host will wear the guest jersey

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == away[j])
                count++;
        }
    }

    cout << count << "\n";
    
    return 0;
}