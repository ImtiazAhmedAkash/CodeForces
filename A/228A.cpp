// Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // all of the array elements are set to 0
    int arr[4] = {0}, index = 0, value;

    for (int i = 0; i < 4; i++)
    {
        cin >> value;
        int count = 0;

        // for every index of the array
        // we will check if the input value is present or not
        // the value will only be stored in the array if it is distinct
        for (int i = 0; i <= index; i++)
        {
            // if the value is present, count and break the checking loop
            if (arr[i] == value)
            {
                count++;
                break;
            }
        }

        // when count == 0, i.e. the value is not present
        // assign the value to the array[index]
        // and increment the index
        // otherwise, the value will not be stored
        // and the index will remain unchanged
        if (count == 0)
        {
            arr[index] = value;
            index++;
        }
    }

    // the answer will be 4 - index
    // if there are 3 distinct value, index will be 3
    // so only one shoe (4 - 3) needs to be bought
    // if all the elements are same, index will be incremented to 1
    // and stay unchanged the whole time
    // in that case 3 shoes (4 - 1) need to be bought
    cout << 4 - index << "\n";

    return 0;
}