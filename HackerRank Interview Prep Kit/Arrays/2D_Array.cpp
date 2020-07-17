#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<vector<int>> arr;

    for (int i = 0; i < 6; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 6; j++)
        {
            int val = 0;
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }

    int maxSum = -INFINITY;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            int tempSum = arr[i][j] + arr[i + 1][j + 1] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i - 1][j + 1];

            if (tempSum > maxSum)
            {
                maxSum = tempSum;
            }
        }
    }

    cout << maxSum;

    return 0;
}