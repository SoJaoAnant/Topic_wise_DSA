#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    string turn_roman(int num, unordered_map<int, string>& hashu)
    {
        int max;
        string roman = "";

        while(num != 0)
        {
            max = 1;
            for(auto it: hashu)
            {
                if(it.first > max && it.first <= num)
                {
                    max = it.first;
                }
            }

            // cout << max << " is absolute lower than " << num << endl;

            roman += hashu.at(max);

            num -= max;
        }

        // cout << roman << endl;

        return roman;
    }

    string intToRoman(int num)
    {
        unordered_map<int, string> hashu = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"},
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"},
        };

        return turn_roman(num, hashu);
    }
};

int main()
{
    Solution obj;
    // obj.turn_roman(700);
    // obj.intToRoman(1234);

    ofstream outfile("romans.txt");

    if(!outfile)
    {
        cout << "file not open" << endl;
        return 1;
    }

    for(int i = 1; i < 4000; i++)
    {
        outfile << i << " in roman is " << obj.intToRoman(i) << endl;
    }
    return 0;
}