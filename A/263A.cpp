// Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5], result;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                // the required index is a[2][2]
                // 1 is present in index a[i][j]
                // so the result will be abs(i - 2) + abs (j - 2)
                result = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << result << "\n";

    return 0;
}