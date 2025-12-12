#include <iostream>
#include <vector>
#include <sstream>

#include "Fraction.h"

template<typename T>
T calcPercentage(const T& a, const T& b) {
	return (a * 100) / b;
}

template<typename T1, typename T2> std::string concatValues(const T1& a, const T2& b) {
	std::ostringstream out;
	out << a << b;
	return out.str();
}

template<typename T1, typename T2> void printValues(const T1& a, const T2& b) {
	std::cout << concatValues(a, b) << std::endl;
}

template<typename T>
void swapValues(T& a, T& b) {
	T aBeforeSwap = a;
	a = b;
	b = aBeforeSwap;
}

template<int N>
class FixedArray {
private:
    int data[N]; // Use the template constant N to define a fixed-size array

public:
    FixedArray() {
        for (int i = 0; i < N; ++i) {
            data[i] = i; // just init with something meaningful
        }
    }

    void print() const {
        for (int i = 0; i < N; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
	printValues("5 out of 10 = ", concatValues(calcPercentage(5, 10), "%"));
	printValues("1.2 out of 4.8 = ", concatValues(calcPercentage(1.2, 4.8), "%"));
	printValues("5 out of 4 = ", concatValues(calcPercentage(5, 4), "%"));
	printValues("0.5 out of 1 = ", concatValues(calcPercentage<double>(0.5, 1), "%"));
	printValues("1/4 out of 1/2 = ", concatValues(calcPercentage(Fraction{ 1, 4 }, Fraction{ 1,2 }), "%"));

	int a = 13, b = 42;
	swapValues(a, b);

	printValues(a, b);

	std::vector<double> vectorA, vectorB;
	vectorA.push_back(113);
	vectorB.push_back(142);
	swapValues(vectorA, vectorB);

	printValues(vectorA[0], vectorB[0]);


	// Create a FixedArray with compile-time size of 5
	FixedArray<5> myArray;
	myArray.print(); // Prints: 0 1 2 3 4

	FixedArray<10> biggerArray;
    biggerArray.print(); // Prints: 0 1 2 3 4 5 6 7 8 9

	return 0;
}
