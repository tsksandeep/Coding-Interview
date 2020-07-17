#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int num;
    cin >> num;

    string val;
    cin >> val;

    int temp = 0;
    for (auto letter : val)
    {
        if (letter == 'D' && temp == 0)
        {
            count++;
            temp--;
        }
        else if (letter == 'U')
        {
            temp++;
        }
        else if (letter == 'D')
        {
            temp--;
        }
    }
    cout << count;
    return 0;
}