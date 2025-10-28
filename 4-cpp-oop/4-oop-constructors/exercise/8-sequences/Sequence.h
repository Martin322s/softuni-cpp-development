#pragma once

#include <vector>
#include <climits>

template<class T, class Generator>
class Sequence {
    typedef std::vector<T> Data;

    Data data;
    Generator gen;

public:
    class Iterator {
        Data& data;
        unsigned long idx;

    public:
        Iterator(Data& data, unsigned long idx) : data(data), idx(idx) {}

        Iterator& operator++() {
            ++idx;
            return *this;
        }

        T& operator*() { return data[idx]; }
        const T& operator*() const { return data[idx]; }

        bool operator==(const Iterator& other) const {
            if (&this->data != &other.data) return false;
            if (this->isAtTheEnd() && other.isAtTheEnd()) return true;
            return this->idx == other.idx;
        }

        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }

    private:
        bool isAtTheEnd() const { return idx >= data.size(); }
    };

    Iterator begin() { return Iterator(data, 0); }
    Iterator end()   { return Iterator(data, ULONG_MAX); }

    void generateNext(int numToGenerate) {
        while (numToGenerate-- > 0) {
            data.push_back(gen());
        }
    }
};

