// Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<char> s;
    char input;

    /*
     * set is used because all of its elements are distinct.
     * we will take input until closing curly bracket '} is found.
     * if the input is any small letter, it will be assigned in the set.
     * finally, we will print the size of the set.
     */
    
    while (1)
    {
        cin >> input;
        if (input == '}')
            break;
        else if (input >= 'a' && input <= 'z')
            s.insert(input);
    }

    cout << s.size() << '\n';

    return 0;
}