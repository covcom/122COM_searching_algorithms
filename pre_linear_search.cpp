#include <iostream>
#include <array>
#include <vector>
using namespace std;

bool linear_search( vector<int> sequence, int value )
{
    // COMPLETE ME

    return false;
}



/* this function is designed to test that your function produces the correct results */
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
    array<Test,4> testing = {{ {99,true}, {33, true}, {31, false}, {76, false} }};
    
    // populate sequence
    int count = 99;
    for( int &i : sequence )
    {
        i = count;
        count -= 3;
    }

    // carry out the tests
    for( Test test : testing )
    {
        bool result = linear_search( sequence, test.value );

        cout << (result == test.expected ? "Passed" : "Failed") << 
            " search for " << test.value << " test, got " <<
            (result ? "true" : "false") << " expected " <<
            (test.expected ? "true" : "false") << endl;

        if( result != test.expected ) errflg += 1;
    }

    return errflg;
}
