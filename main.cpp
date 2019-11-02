#include <bits/stdc++.h>

int main() {
    std::unordered_map<std::string, std::string> dictionary;
    std::string englishWord, otherLanguageWord;

    while ( std::getline(std::cin, englishWord) && !englishWord.empty() )
    {
        std::stringstream ss(englishWord);
        ss >> englishWord >> otherLanguageWord;

        dictionary[otherLanguageWord] = englishWord;
    }

    while ( std::cin >> englishWord )
    {
        auto itDictionary = dictionary.find(englishWord);
        if(itDictionary != dictionary.end()) { std::cout << itDictionary->second << std::endl; }
        else { std::cout << "eh" << std::endl;}
    }

    return 0;
}
