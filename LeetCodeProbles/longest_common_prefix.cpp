#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string> str){
    if (str.empty())
    {
        return "";
    }
    string prefix = str[0];

    for (int i = 0; i < str.size(); i++)
    {
        while (str[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
            {
                return "";
            }            
        }        
    }
    return prefix;
}

int main(){
    int n;

    cout << "Enter The Number Of String in The array :- ";
    cin >> n;
    cin.ignore();

    vector<string> example;

    for (int i = 0; i < n; i++)
    {
        string input;
        cout << "Enter String " << (i + 1) << " :- ";
        getline(cin, input);
        example.push_back(input);
    }    
    cout << "Longest Common Prefix :- " << longestCommonPrefix(example);
}

