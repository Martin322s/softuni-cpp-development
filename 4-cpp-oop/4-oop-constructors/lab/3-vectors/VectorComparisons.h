#pragma once

#include "Vector.h"

struct VectorLengthComparer {
	bool operator()(const Vector & a, const Vector & b) const {
		return a.getLength() < b.getLength();
	}
};

template<class T, typename Comparator>
class ReverseComparer {
	Comparator c;
	
	public:
		bool operator()(const Vector & a, const Vector & b) const {
			return !c(a, b);
		}
};
