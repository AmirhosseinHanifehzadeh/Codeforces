#include <bits/stdc++.h>

using namespace std;

int longestCommonSum(int arr1[], int arr2[], int n)
{
	int sum1, sum2, maxLen; 

	sum1 = 0; 
	sum2 = 0; 
	maxLen = 0;

	int diffs[2 * n + 1];

	memset(diffs, -1, sizeof(diffs));

	for (int i = 0; i < n; i++) 
	{
		sum1 += arr1[i];
		sum2 += arr2[i]; 

		int curr_diff = sum1 - sum2; 
		int diffIndex = n + curr_diff; 

		if (curr_diff == 0) 
		{
			maxLen = i + 1; 
		}
		else if (diffs[diffIndex] == -1) 
		{
			diffs[diffIndex] = i; 
		}
		else 
		{
			int len = i - diffs[diffIndex];

			if (len > maxLen) 
			{
				maxLen = len; 
			}
		}

	} 

	return maxLen; 
}

int main() {
	int arr1[] = {0, 1, 0, 1, 1, 1, 1};
    int arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Length of the longest common span with same "
            "sum is "<< longestCommonSum(arr1, arr2, n);
    return 0;	
}

