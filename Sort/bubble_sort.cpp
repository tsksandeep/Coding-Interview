#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> arr = {4, 6, 2, 4, 8, 1, 4, 5};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (auto i : arr){
        cout << i << " ";
    }
    
    return 0;
}