#include "SumOfVectors.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintSum( const vector<string>& vecResult )
{
    for( int i = 0; i < vecResult.size(); i++ )
    {
        cout << vecResult[i] << endl;
    }
}


int main()
{
    int nSizeOfVectors;

    cin >> nSizeOfVectors;

    vector<string>vec1;

    vector<string>vec2;

    for( int i = 0; i < nSizeOfVectors; i++ )
    {
        string strToPush;

        cin >> strToPush;

        vec1.push_back( strToPush );
    }

    for( int i = 0; i < nSizeOfVectors; i++ )
    {
        string strToPush;

        cin >> strToPush;

        vec2.push_back( strToPush );
    }

    vector<string>vec3 = vec1 + vec2;

    PrintSum(vec3);


    return 0;
}
