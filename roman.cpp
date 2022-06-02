//I use the case switch getValue to get the case's value, then if else to see whether the value matches the case.
// and to get the value from the cout in order to solve the case issue.
#include <iostream> // cout
using namespace std; // cout
class elevator // elevator
{
private: // private
public: // public
};
    int i = 0; // i
    double d = 0.0; // d/ double elevator

int getValue // getValue
(char ch) // ch
  {
        switch(ch) // switch
  {
                case 'I': return 1;  // case 'I': return 1   
                case 'V': return 5; // case 'V': return 5
                case 'X': return 10; // case 'X': return 10
                case 'L': return 50; // case 'L': return 50
                case 'C': return 100; // case 'C': return 100
                case 'D': return 500; // case 'D': return 500
                case 'M': return 1000; // case 'M': return 1000
                default: return -1; // default: return -1
  }
  }
int romanToInt(string roman) // romanToInt
   {
    int result = 0; // result
    for // for
    (int i = 0; // i = 0
    i < roman.length(); // i < roman.length()
    i++
    ) 
    {
        int value1 = getValue(roman[i]); // value1 = getValue(roman[i])
        if (i + 1 < roman.length()) { // if (i + 1 < roman.length())
            int value2 = getValue(roman[i + 1]); // value2 = getValue(roman[i + 1])
            if (value1 >= value2) { // if (value1 >= value2)
                result = result + value1; // result = result + value1
            }
            else { // else
                result = result + value2 - value1; // result = result + value2 - value1
                i++; // i++
            }
        }
        else // else
            result = result + value1; // result = result + value1
    }
    return result; // return result
}

int main() // main
{
        cout << romanToInt("III") << endl; // cout << romanToInt("III") << endl
        cout << romanToInt("LVIII") << endl; // cout << romanToInt("LVIII") << endl
        cout << romanToInt("MCMXCIV") << endl; // cout << romanToInt("MCMXCIV") << endl
    return 0;
}
