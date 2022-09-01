// Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    set<int> s;
    int value;

    for (int i = 0; i < 4; i++)
    {
        cin >> value;
        s.insert(value);
    }

    cout << 4 - s.size()<< "\n";

    return 0;
}
