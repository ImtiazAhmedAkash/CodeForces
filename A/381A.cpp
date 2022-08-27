// Sereja and Dima

#include <bits/stdc++.h>
using namespace std;

#define max(a, b) ((a > b) ? a : b)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n - 1, count = 0;
    int s = 0, d = 0;

    // Sereja will choose first 
    // if the i is even, it is sereja's turn, else it is dima's turn
    // They will take the card of maximum value 
    // between the leftmost card or the rightmost card
    // and the card value is added together for both of them
    // if the leftmost card is taken, start is incremented
    // if the rightmost card is taken, end is decremented
    while (count < n)
    {
        count % 2 == 0 ? s += max(arr[start], arr[end]) : d += max(arr[start], arr[end]);
        arr[start] > arr[end] ? start++ : end--;
        count++;
    }

    cout << s << " " << d << "\n";

    return 0;
}