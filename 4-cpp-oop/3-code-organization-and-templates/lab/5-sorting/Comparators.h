#pragma once

template<typename T>
class LessThan {
	
	public:
		bool operator()(const T & a, const T & b) const {
			return a < b;
		}
};

template<typename T, typename Comparator>
class Reverse {
	
	public:
		bool operator()(const T & a, const T & b) const {
			Comparator comp;
			return !comp(a, b);
		}
};
