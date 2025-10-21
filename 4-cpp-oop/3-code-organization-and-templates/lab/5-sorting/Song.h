#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
	std::string name;
	int lengthSeconds;
public:
	Song() {}

	Song(std::string name, int lengthSeconds) : name(name), lengthSeconds(lengthSeconds) {}

	std::string getName() const {
		return this->name;
	}

	int getLengthSeconds() const {
		return this->lengthSeconds;
	}
};

bool operator<(const Song& thiz, const Song& other) {
	return thiz.getLengthSeconds() < other.getLengthSeconds();
}


#endif

