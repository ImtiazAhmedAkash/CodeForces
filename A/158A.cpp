// Next Round

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    // arr[n + 1] was taken because we started the array index from 1 instead of 0
    
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int count = 0;
    
    // if any element is positive i.e. greater than 0 and greater or equal to the k-th number
    // i.e. arr[k], it is valid to count.
    for (int i = 1; i <=n; i++)
    {
        if (arr[i] > 0 && arr[i] >= arr[k])
            count++;
    }
    
    cout << count << '\n';
    
    return 0;
}