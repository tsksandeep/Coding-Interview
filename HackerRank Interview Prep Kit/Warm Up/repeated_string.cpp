#include <iostream>

using namespace std;

int main()
{
    string val;
    cin >> val;

    long long int a;
    cin >> a;

    long long int count = 0;
    for (auto letter : val)
    {
        if (letter == 'a')
        {
            count++;
        }
    }

    long long int mulVal = a / val.size();

    count *= mulVal;

    long long int remVal = a % val.size();

    for (int i = 0; i < remVal; i++)
    {
        if (val[i] == 'a')
        {
            count++;
        }
    }

    cout << count;

    return 0;
}