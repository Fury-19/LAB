#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int currSum = arr[0];
    int maxSum = arr[0];

    int start = 0, end = 0, s = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > currSum + arr[i])
        {
            currSum = arr[i];
            s = i;
        }
        else
        {
            currSum += arr[i];
        }

        if (currSum > maxSum)
        {
            maxSum = currSum;
            start = s;
            end = i;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) cout << arr[i] << " ";
    cout << endl;
}