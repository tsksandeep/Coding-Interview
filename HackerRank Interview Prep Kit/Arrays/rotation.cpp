#include <iostream>
#include <vector>

using namespace std;

vector<int> swapNum(vector<int> arr, int swapVal)
{
    vector<int> result = vector<int>(arr.begin() + swapVal, arr.end());

    result.insert(result.end(), arr.begin(), arr.begin() + swapVal);

    return result;
}

int main()
{
    int len = 0;
    int rot = 0;
    cin >> len;
    cin >> rot;

    int val;
    vector<int> arr;
    for (int i = 0; i < len; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    int swapVal = rot % len;

    vector<int> result = swapNum(arr, swapVal);

    for (int i = 0; i < len; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}