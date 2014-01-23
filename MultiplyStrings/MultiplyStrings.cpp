//============================================================================
// Multiply Strings
//
// Given two numbers represented as strings, return multiplication of the
// numbers as a string.
//
// Note: The numbers can be arbitrarily large and are non-negative.
//============================================================================

#include <iostream>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
        int n3 = n1+n2;
        string num3(n3, '0');
        for (int i = n1-1; i >= 0; i--) {
            int c = 0, j;
            for (j = n2-1; j >= 0; j--) {
                int s = (num1[i]-'0')*(num2[j]-'0')+(num3[i+j+1]-'0')+c;
                num3[i+j+1] = s%10+'0';
                c = s/10;
            }
            num3[i+j+1] = c+'0';
        }
        auto it = num3.begin();
        while (it < num3.end()-1 && *it == '0')
            it = num3.erase(it);
        return num3;
    }
};

int main() {
    return 0;
}