#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

const size_t DIMENSION = 10;

const char RUST = '!';
const char ALPAKA = '#';
const char EMPTY = '.';
const char TEMP_RUST = '?';

class Board {

    char board[DIMENSION][DIMENSION];

    public:

        Board(istream & istr) 
        {
            for(size_t row = 0; row < DIMENSION; row++)
                for(size_t col = 0; col < DIMENSION; col++)
                    istr >> board[row][col];
        }

        void setCell(int row, int col, char symbol) {

            if (row < 0 || col < 0 || row >= DIMENSION || col >= DIMENSION)
                return;
            
            board[row][col] = symbol;
        }

        void setRust(int row, int col, char symbol) {

            if (row < 0 || col < 0 || row >= DIMENSION || col >= DIMENSION)
                return;
            
            if (board[row][col] == EMPTY)    
                board[row][col] = symbol;
        }

        void print(ostream & os) {
            for(size_t row = 0; row < DIMENSION; row++) {
                for(int col = 0; col < DIMENSION; col++)
                    os << board[row][col]; 
                os << endl;
            }
        }

        void putTempRust() 
        {
            for(int row = 0; row < DIMENSION; row++)
                for(int col = 0; col < DIMENSION; col++) 
                    if (board[row][col] == RUST)
                    {
                        setRust(row-1, col, TEMP_RUST);
                        setRust(row+1, col, TEMP_RUST);
                        setRust(row, col-1, TEMP_RUST);
                        setRust(row, col+1, TEMP_RUST);
                    }
        }

        void fixTempRust() 
        {
            for(int row = 0; row < DIMENSION; row++)
                for(int col = 0; col < DIMENSION; col++) 
                    if (board[row][col] == TEMP_RUST)
                        board[row][col] = RUST;
        }
};

class Rust {

    istream & is;
    ostream & os;

    Board b;
    size_t ticks;

    public:

        Rust(istream & istr, ostream & ostr) 
            :   is(istr), 
                os(ostr),
                b(istr)
        {
            is >> ticks;
        }

        void process() 
        {
            for(;ticks;ticks--) {
                b.putTempRust();
                //cout << "----" << endl << "Tick: " << ticks << ", applied temp rust." << endl;
                //printMatrix(matrix);
                b.fixTempRust();
                //cout << "----" << endl << "Tick: " << ticks << ", fixed temp rust." << endl;
                //printMatrix(matrix);

            }

            b.print(os);
        }

};

int main(void) {

    Rust r(cin, cout);

    r.process();

    return 0;
}
