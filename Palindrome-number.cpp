#include <string>
#include <iostream>
#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x)
    {
        std::string str1 = std::to_string(x);
        std::string str2 = str1;
        reverse(str2.begin(), str2.end());
        if(str1 == str2)
            return true;
        return false;
    }
};
