#include <iostream>

bool isPalindrome(const std::string &str, int left = 0, int right = -1) {
    if(right == -1) {
        if (str.empty()) return true;
        else right = str.length() - 1;
    }

    if (left >= right) return true;
    if (str[left] != str[right]) return false;

    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    // Example usage
    std::cout << "racecar is a palindrome (true/false): " << (isPalindrome("racecar") ? "true" : "false") << std::endl;
    std::cout << "hello is a palindrome (true/false): " << (isPalindrome("hello") ? "true" : "false") << std::endl;
    std::cout << "madam is a palindrome (true/false): " << (isPalindrome("madam") ? "true" : "false") << std::endl;

    return 0;
}
