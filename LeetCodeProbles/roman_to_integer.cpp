#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
    public:
        int romanToInt(string s)
        {
            unordered_map<char, int> rm;

            rm['I'] = 1;
            rm['V'] = 5;
            rm['X'] = 10;
            rm['L'] = 50;
            rm['C'] = 100;
            rm['D'] = 500;
            rm['M'] = 1000;

            int result = 0;

            for (int i = 0; i < s.length(); i++)
            {
                if (rm[s[i]] < rm[s[i + 1]])
                {
                    result -= rm[s[i]];
                }
                else
                {
                    result += rm[s[i]];
                }
            }
            return result;
        }
};

int main()
{
    Solution r = Solution();
    string romanNumbers;

    cout << "Enter the Roman Numbers :- ";
    cin >> romanNumbers;

    cout << r.romanToInt(romanNumbers) << endl;
}
