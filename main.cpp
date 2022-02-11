#include <iostream>
#include <fstream>

int main() {
    std::string name{};
    std::cout << "enter your.txt file here";
    std::cin >> name;
    std::string word;
    const auto SIZE = 26;
    int freqs[SIZE] = {0};
    std::fstream inFile{name};
    if (inFile) {
        std::cout << "file open succesfully";
    } else {
        std::cout << "file is cannot be read";
    }

    std::string why;

    while (inFile >> word) {
        for (char const &character: word) {
            if (std::isalnum(character)) {
                freqs[std::tolower(character) - 97]++;

            }
        }
    }
    int max;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for(int i=0; i >= SIZE;i++){
       max=freqs[i];
      if (freqs[i]<freqs[i+1]);

  }

}


