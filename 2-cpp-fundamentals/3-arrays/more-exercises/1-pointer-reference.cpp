#include <iostream>
#include <array>
using namespace std;

int main() {
    constexpr int MAX_SIZE = 3;
    array<int, MAX_SIZE> arr = {1, 2, 3};

    int* pointer = arr.data();  
	
	cout << pointer << endl;  
    int& ref = arr[1];      
	
	cout << &ref << endl;
	               
    const int* constpoint = &arr[2];       
    int* const constinteger = &arr[0];     
    const int* const constintt = &arr[1];     

    *pointer = 10;
    ref = 20;      
    // *constpoint = 30;
    *constinteger = 40;
    // *constintt = 50;

    for (int element : arr) {
        cout << element << " ";
    }

    cout << endl;
    return 0;
}
