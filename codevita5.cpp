// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

long long int MOD = 1e9 + 7;

// Function to find the minimum jumps
// required to make the whole group
// sit adjacently
int minJumps(string seats)
{
	// Store the indexes
	vector<int> position;

	// Stores the count of occupants
	int count = 0;

	// Length of the string
	int len = seats.length();

	// Traverse the seats
	for (int i = 0; i < len; i++) {

		// If current place is occupied
		if (seats[i] == 'x') {

			// Push the current position
			// in the vector
			position.push_back(i - count);
			count++;
		}
	}

	// Base Case:
	if (count == len || count == 0)
		return 0;

	// The index of the median element
	int med_index = (count - 1) / 2;

	// The value of the median element
	int med_val = position[med_index];

	int ans = 0;

	// Traverse the position[]
	for (int i = 0;
		i < position.size(); i++) {

		// Update the ans
		ans = (ans % MOD
			+ abs(position[i]
					- med_val)
					% MOD)
			% MOD;
	}

	// Return the final count
	return ans % MOD;
}

// Driver Code
int main()
{
	// Given arrange of seats
	string S;
    getline(cin, S);

	// Function Call
	cout << minJumps(S);

	return 0;
}
