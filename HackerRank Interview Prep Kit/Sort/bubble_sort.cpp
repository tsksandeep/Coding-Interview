#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp, count, swap = 0;
    cin >> count;

    vector<int> arr;
    arr.resize(count);

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swap++;
            }
        }
    }

    cout << "Array is sorted in " << swap << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[count - 1] << endl;

    return 0;
}