#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char *ptr = (char *)malloc(n * sizeof(char));

    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
        (ptr[i] == 'A') ? a++ : d++;
    }

    if (a == d)
        cout << "Friendship" << endl;
    else
    {
        (a > d) ? cout << "Anton\n" : cout << "Danik\n";
    }

    return 0;
}