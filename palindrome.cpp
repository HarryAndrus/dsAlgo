#include <string>
#include <iostream>

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.length() - 1;

    while(left < right) {
        if(str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    std::cout << "level is a palindrome (true/false): " << (isPalindrome("level") ? "true" : "false") << std::endl;
    std::cout <<" hello is a palindrome (true/false): " << (isPalindrome("hello") ? "true" : "false") << std::endl;
}
