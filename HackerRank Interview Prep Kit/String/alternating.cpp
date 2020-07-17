#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cin >> count;

    string val;

    while (count--)
    {
        int i = 1;
        int delCount = 0;
        int tempNum = 0;

        cin >> val;
        for (i = 1; i < val.size(); i++)
        {
            if (val[tempNum] == val[i])
            {
                delCount++;
            }
            else
            {
                tempNum = i;
            }
        }
        cout << delCount << endl;
    }

    return 0;
}