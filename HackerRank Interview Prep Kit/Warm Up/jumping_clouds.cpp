#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count = 0;
    int num;
    cin >> num;

    vector<int> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    while (i < num)
    {
        if (i + 2 < num && arr[i + 2] == 0)
        {
            count++;
            i += 2;
        }
        else if (i + 1 < num && arr[i + 1] == 0)
        {
            count++;
            i += 1;
        }
        else
        {
            cout << count;
            return 0;
        }
    }

    cout << count;

    return 0;
}