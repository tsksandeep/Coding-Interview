#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp, index;
    vector<int> arr = {4, 5, 2, 3, 1, 7, 4, 5};
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        int maxVal = -10000;
        for (int j = 0; j < size - i; j++)
        {
            if (maxVal < arr[j])
            {
                maxVal = arr[j];
                index = j;
            }
        }
        arr[index] = arr[size - i - 1];
        arr[size - i - 1] = maxVal;
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}