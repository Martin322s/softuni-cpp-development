#include <iostream>
#include <set>
#include <numeric>

class Fraction {
	int numerator;
	int denominator;

public:
	Fraction() : numerator(0), denominator(1) { }
	
	Fraction(int num, int denom) : numerator(num), denominator(denom) {
		reduce();
	}

	void setNumerator(int num) { 
		numerator = num;
		reduce();
	}
	int getNumerator() const {
		return this->numerator;
	}

	void setDenominator(int denom) { 
		denominator = denom;
		reduce();
	}
	int getDenominator() const {
		return this->denominator;
	}

	bool operator<(const Fraction& other) const {
		return this->numerator * other.denominator < other.numerator * this->denominator;
	}

	bool operator==(const Fraction & other) const {
		return this->numerator == other.numerator && this->denominator == other.denominator;
	}

	Fraction operator+(const Fraction & other) const {
		return Fraction(
			this->numerator * other.denominator + other.numerator * this->denominator,
			this->denominator * other.denominator
		);
	}

	Fraction operator-(const Fraction & other) const {
		return Fraction(
			this->numerator * other.denominator - other.numerator * this->denominator,
			this->denominator * other.denominator
		);
	}

    Fraction & operator++()
    {
		numerator += denominator;
        return *this;
    }

	Fraction operator++(int) {
		Fraction prev = *this;
		numerator += denominator;
		return prev;
	}

	private:
		void reduce() {

			int gcdV = std::gcd(numerator, denominator);
			if (gcdV != 1) {
				numerator /= gcdV;
				denominator /= gcdV;
			}
		}

	friend std::istream & operator >> (std::istream & is, Fraction & fra);
};

std::ostream & operator << (std::ostream & os, const Fraction & fra) {
	os << fra.getNumerator() << '/' << fra.getDenominator();
	return os;
}

std::istream & operator >> (std::istream & is, Fraction & fra) {
	is >> fra.numerator >> fra.denominator;
	fra.reduce();
	return is;
}
