#include <iostream>
#include <array>
#include <vector>
using namespace std;

bool binary_search( vector<int> sequence, int value, int start=-1, int end=-1 )
{
    // COMPLETE ME

    return false;
}


int main()
{
    int errflg = 0;
    const int size = 33;
    vector<int> sequence;
    sequence.resize(size);

    // search test values and results
    struct Test
    {
        int value;
        bool expected;

    };
    array<Test,4> testing = {{ {96,true}, {33, true}, {31, false}, {76, false} }};

    // populate sequence
    int count = 0;
    for( int &i : sequence )
    {
        i = count;
        count += 3;
    }

    // carry out the tests
    for( Test test : testing )
    {
        bool result = binary_search( sequence, test.value );

        cout << (result == test.expected ? "Passed" : "Failed") <<
            " search for " << test.value << " test, got " <<
            (result ? "true" : "false") << " expected " <<
            (test.expected ? "true" : "false") << endl;

        if( result != test.expected ) errflg += 1;
    }

    return errflg;
}
