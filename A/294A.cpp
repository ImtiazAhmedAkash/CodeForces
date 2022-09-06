// Shaass and Oskols

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // we will start count from index 1 to index n
    // and only index from 1 to n is considerable
    // we have taken array of (n + 2) elements
    // because when a bird on the first wire is shot
    // birds to the left of the dead bird will fly away,
    // here they will move to the index 0
    // similarly, when a bird on the nth wire or the last wire is shot
    // birds to the right of the dead bird will fly away
    // here, they will move to the index (n + 1)
    // birds on index 0 and (n + 1) are not important and not considered
    // because in reality they are flown away
    int arr[n + 2];

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int shots;
    cin >> shots;

    while (shots--)
    {
        // r represents the wire number where the bird is shot
        // num represents the number of the bird on r-th wire that was shot
        int r, num;
        cin >> r >> num;

        // birds of arr[r] is shot
        // so the birds to the left of the dead bird will move to the upper wire
        // the number of remaining birds on the left is num - 1
        // and the upper wire of arr[r] is arr[r - 1]
        // as wires are numbered 1 to n from top to bottom
        // and the total number of birds on arr[r - 1] will be arr[r - 1] + (num - 1)

        // similarly, the birds to the right of the dead bird will move to the lower wire
        // the number of remaining birds on the right is arr[r] - num
        // the lower wire of arr[r] is arr[r + 1]
        // so the total number of birds or arr[r + 1] will be arr[r + 1] + (arr[r] - num)
        // and finally, there will be no birds present on r-th line
        // so, arr[r] becomes 0
        arr[r - 1] += num - 1;
        arr[r + 1] += arr[r] - num;
        arr[r] = 0;
    }

    // we don't care about the index 0 and index n + 1
    // we just need the value from index 1 to n
    for (int i = 1; i <= n; i++)
        cout << arr[i] << "\n";

    return 0;
}