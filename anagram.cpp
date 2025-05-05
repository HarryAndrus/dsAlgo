#include <iostream>
#include <string>
#include <algorithm>

bool areAnagrams(const std::string &str1, const std::string &str2) {
    if(str1.length() != str2.length()) return false;

    std::string copy1 = str1;
    std::string copy2 = str2;

    std::sort(copy1.begin(), copy1.end());
    std::sort(copy2.begin(), copy2.end());

    return copy1 == copy2;
}

int main() {
    std::vector<std::vector<std::string>> anagramPairs = {{"listen", "silent"}, {"hello", "world"}, {"triangle", "integral"}}; // vector of vector of strings

    std::cout << "listen and silent are anagrams (0/1): " << areAnagrams("listen", "silent") << std::endl;
    std::cout << "hello and world are anagrams (0/1): " << areAnagrams("hello", "world") << std::endl;
    std::cout << "triangle and integral are anagrams (0/1): " << areAnagrams("triangle", "integral") << std::endl;

}