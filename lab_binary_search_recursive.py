#!/usr/bin/python3
import sys

def binary_search( sequence, value ):
    # COMPLETE ME

    return False



def main():
    errflg = 0
    sequence = [ i for i in range(0,100,3) ]
    testing = [ (96,True), (33,True), (31,False), (76,False) ]

    for value, expected in testing:
        result = binary_search( sequence, value )

        print( "%s search for %d test, got %r expected %r" % \
            ("Passed" if result is expected else "Failed", value, result, expected) )

        if result is not expected:
            errflg += 1

    return errflg

if __name__ == '__main__':
    sys.exit( main() )