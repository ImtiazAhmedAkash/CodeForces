// Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string arr;
    cin >> arr;

    int lim = arr.length();

    //sorting a string in ascending order
    sort(arr.begin(), arr.end());

    int count = 0;
    for (int i = 1; i < lim; i++)
    {
        // if two elements are not equal, they will be counted as distinct
        // if two elements are equal, they won't be counted
        if (arr[i] != arr[i - 1])
            count++;
    }

    if (count % 2 == 0)
        cout << "IGNORE HIM!";
    else 
        cout << "CHAT WITH HER!";
    
    return 0;
}