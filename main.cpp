#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main() {
	std::vector<std::string> words;
	std::vector<std::string> keys;
	std::vector<std::string> result;
	std::string line;
	std::fstream in_words;
	in_words.open("tj.txt");
	while (std::getline(in_words, line))
		words.push_back(line);
	in_words.close();
	std::fstream in_keys;
	in_keys.open("klucze1.txt");
	while (std::getline(in_keys, line))
		keys.push_back(line);
	in_keys.close();
	



	return 0;
}
