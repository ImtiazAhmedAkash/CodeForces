// Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, count = 0;
    cin >> x >> y;

    // the loop will run as long as x <= y
    // limak will take at least one year to reach his goal
    // so we have started by checking if x <= y
    // this condition counts the first year 
    // and then does the math and the checking
    while(x <= y)
    {
        x *= 3;
        y *= 2;
        count++;
    }

    cout << count << "\n";

    return 0;
}