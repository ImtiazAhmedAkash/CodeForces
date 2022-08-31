// Colurful Stones (Simplified Edition)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str, ins;
    cin >> str >> ins;

    int index = 0;
    int length = ins.length();

    // for every iteration, 
    // if the instruction character i.e. ins[i] and the 
    // standing stone character i.e. str[index] are the same
    // Liss will move to the next stone and that is 
    // given by incrementing index by 1
    // so str[index] now represents the next character
    // until the str[index] and the ins[i] are same, 
    // Liss will not change her position
    // and index will remain unchanged
    for (int i = 0; i < length; i++)
    {
        if (ins[i] == str[index])
            index++;
    }

    // as the string index is normally initialized from 0
    // 1 was added to the index so that index 0 is printed as 1
    cout << index + 1 << "\n";
    
    return 0;
}