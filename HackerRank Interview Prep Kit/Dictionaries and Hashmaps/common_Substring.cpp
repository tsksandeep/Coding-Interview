#include <iostream>
#include <map>

using namespace std;

string solution(string val1, string val2)
{
    map<char, int> dict = {};
    for (auto letter : val1)
    {
        auto res = dict.find(letter);
        if (res != dict.end())
        {
            res->second = res->second + 1;
        }
        dict.insert({letter, 0});
    }

    for (auto letter : val2)
    {
        auto res = dict.find(letter);
        if (res != dict.end())
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{

    int num = 0;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string val1, val2;
        cin >> val1;
        cin >> val2;
        cout << solution(val1, val2) << endl;
    }

    return 0;
}