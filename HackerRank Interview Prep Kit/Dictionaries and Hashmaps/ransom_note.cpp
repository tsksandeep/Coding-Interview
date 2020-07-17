#include <iostream>
#include <map>

using namespace std;

int main()
{
    int word1 = 0;
    int word2 = 0;
    cin >> word1 >> word2;

    string val;
    map<string, int> dict = {};

    for (int i = 0; i < word1; i++)
    {
        cin >> val;

        auto res = dict.find(val);
        if (res != dict.end())
        {
            res->second++;
        }
        else
        {
            dict.insert({val, 1});
        }
    }

    for (int i = 0; i < word2; i++)
    {
        cin >> val;

        auto res = dict.find(val);
        if (res != dict.end())
        {
            if (res->second == 0)
            {
                cout << "No";
                return 0;
            }
            res->second--;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}