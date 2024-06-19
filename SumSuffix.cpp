// C++ implementation of the approach
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to calculate the Z-array for the given string
void getZarr(string str, int n, int Z[])
{
	int L, R, k;

	// [L, R] make a window which matches with prefix of s
	L = R = 0;
	for (int i = 1; i < n; ++i) {

		// if i>R nothing matches so we will calculate.
		// Z[i] using naive way.
		if (i > R) {
			L = R = i;

			// R-L = 0 in starting, so it will start
			// checking from 0'th index. For example,
			// for "ababab" and i = 1, the value of R
			// remains 0 and Z[i] becomes 0. For string
			// "aaaaaa" and i = 1, Z[i] and R become 5
			while (R < n && str[R - L] == str[R])
				R++;
			Z[i] = R - L;
			R--;
		}
		else {

			// k = i-L so k corresponds to number which
			// matches in [L, R] interval.
			k = i - L;

			// if Z[k] is less than remaining interval
			// then Z[i] will be equal to Z[k].
			// For example, str = "ababab", i = 3, R = 5
			// and L = 2
			if (Z[k] < R - i + 1)
				Z[i] = Z[k];

			// For example str = "aaaaaa" and i = 2, R is 5,
			// L is 0
			else {
				// else start from R and check manually
				L = i;
				while (R < n && str[R - L] == str[R])
					R++;
				Z[i] = R - L;
				R--;
			}
		}
	}
}

// Function to return the similarity sum
int sumSimilarities(string s, int n)
{
	int Z[n] = { 0 };

	// Compute the Z-array for the given string
	getZarr(s, n, Z);

	int total = n;

	// Summation of the Z-values
	for (int i = 1; i < n; i++)
		total += Z[i];

	return total;
}

// Driver code
int main()
{
	string s = "ababa";
	int n = s.length();

	cout << sumSimilarities(s, n);
	return 0;
}
