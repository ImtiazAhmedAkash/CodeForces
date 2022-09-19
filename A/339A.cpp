// Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int length = s.size();

	/*
	 * Apply a bubble sort between the digits in ascending order
	 * as there are '+' signs in between two digits,
	 * the value is incremented by 2
	 */

	for (int i = 0; i < length; i += 2)
	{
		for (int j = i + 2; j < length; j += 2)
		{
			if (s[i] > s[j])
				swap(s[i], s[j]);
		}
	}

	cout << s;

	return 0;
}