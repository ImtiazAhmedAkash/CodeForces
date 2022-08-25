// Police Recruits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int sum = 0, count = 0;
    while (n--)
    {
        int event;
        cin >> event;

        // if any positive value is found, that means officer is recruited,
        // total number of officers recruited is stored in sum
        // whenever a crime occurred, the event value will be negative
        // and sum will be decreased 
        // crime will not go untreated as long as officers are available (i.e sum is greater than 0)
        // When sum is 0, no officer is avaiable
        // If any crime occurred in that situation, it will go untreated
        sum += event;

        // if a crime occurred when there no officer is available (sum is 0 in that case)
        // the sum will be negative (sum = 0 + (-1))
        // count and then set the sum to 0
        if (sum < 0)
        {
            count++;
            sum = 0;
        }
    }

    cout << count << "\n";

    return 0;
}