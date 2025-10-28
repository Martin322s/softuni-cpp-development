#pragma once

#include <string>
#include <map>

class Word {
	static std::map<std::string, int> wordsCount;
	std::string word;
	
	public:
		Word(const std::string & word): word(word) {
			wordsCount[word]++;
		}
		
		bool operator < (const Word & other) const {
			return this->word < other.word;
		}
		
		const std::string& getWord() const {
			return word;
		}
		
		int getCount() const {
			int count = wordsCount[word];
			wordsCount.erase(word);
			
			return count;
		}
};
