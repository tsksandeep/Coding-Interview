#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count, max, temp, sum = 0;
    cin >> count >> max;

    vector<int> arr(count);

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            cout << i;
            return 0;
        }
    }

    cout << count;

    return 0;
}