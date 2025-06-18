#include <bits/stdc++.h> 
bool checkPalindrome(string S)
{
    std::string str;
    for (char ch : S) {
        if (std::isalnum(ch)) {
            str+= std::tolower(ch);
        }
    }
    int left= 0;
    int right= str.length() -1;

    while(left<right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;    
}
