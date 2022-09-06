// Juicer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num, sizeLimit, wasteLimit;
    cin >> num >> sizeLimit >> wasteLimit;

    int value, sum = 0, count = 0;

    while (num--)
    {
        cin >> value;

        // if the size of the orange is less than or equal to the limit
        // it will be put into the juicer, otherwise, it will be thrown away
        if (value <= sizeLimit)
        {
            // sum the total size of the oranges that goes in the juicer
            // this is the waste
            sum += value;

            // if the sum is greater than the waste limit, clear the waste section
            // that is done by count++
            // when waste section is clear, there is no waste and so sum is set to 0
            if (sum > wasteLimit)
            {
                count++;
                sum = 0;
            }
        }
    }

    cout << count << "\n";

    return 0;
}