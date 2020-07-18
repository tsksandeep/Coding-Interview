#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> arr = {4, 2, 7, 2, 4, 1, 1, 3, 5};

    for (int i = 1; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
            j--;
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}