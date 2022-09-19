// Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    /*
     * First take the string as an input
     * Then remove all the plus sign from the string
     
     * The function std::remove(x.begin, x.end), '+') moves all the '+' elements to the end of the string 
     * and returns the iterator to the first '+' sign.
     * The function std::erase(iterator to the first '+' sign, x.end()) actually deletes the elements 
     * from 'iterator to the first '+' sign' to the last element of the string i.e. it erases all the '+' elements
     * that were moved to the end of the string.
     
     * Then we sort the string elements in ascending order 
     * and print all the elements of the string except for the last 
     * and print a '+' sign after every element
     * the last elements is printed individually as there will be no '+' after that
     */

    // remove all the plus signs from the string
    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    // sort the string elements in ascending order
    sort(s.begin(), s.end());

    // printing area
    for (auto it = s.begin(); it != s.end() - 1; it++)
    {
        cout << *it << "+";
    }
    cout << s.back();

    return 0;
}