// New Password

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    /*
     * n is the total number of letters we have to print
     * and k is the total number of distinct letters and two consecutive letters have to be distinct.
     * So, we will use a while loop for n > 0, this condition means there is something to print.
     * If n becomes zero or negative, that means there is nothing left to print.
     
     * Inside while loop, we will use a for loop for letters.
     * Firstly, we will print the distinct letters from the 1st letter of the alphabet to the k-th letter.
     * as we have already printed k letters, we have n - k letters left to print.
     * and the condition for the 'for loop' is 97 + min(k, n)
     * where 97 denoted the ASCII Value of small letter 'a'
     
     ! Why the condition is i < 97 + min(k, n)?
     * for the 1st input 4 3, a possible solution is abca.
     * the loop will print until i < 97 + min(4, 3) i.e. i < 97 + 3. 
     * hence, abc. then n will be n - k = 4 - 3 = 1.
     * Now, we need to print only 1 letter. so i < 97 + min(k, n) gives us i < 97 + 1. 
     * i.e. the loop will run once and print 'a'. and we get out desired output.
     
     * for the 2nd input 6 6, the desired output is abcdef.
     * The loop will run once, and print all the distinct values from a to f.
     
     * for the 3rd input 5 2, the desired output is ababa.
     * Here, the loop will run for i < 97 + k twice. 
     * After second loop execution, n will be (5-2)-2 = 1, and k will remain 2.
     * Then it will run for i < 97 + n, because n is the minimum between n and k.
     * That is why, we have used the condition i < 97 + min(k, n)
     */
    
    while (n > 0)
    {
        for (int i = 97; i < 97 + min(k, n); i++)
            printf("%c", i);

        n -= k;
    }

    return 0;
}