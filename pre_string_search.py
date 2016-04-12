#!/usr/bin/python3
import sys

def search_string( text, substr ):
    # COMPLETE ME

    return False

def main():
    errflg = 1

    text = "This is the big piece of text that we are going to be searching in";

    if search_string( text, "This" ) != True:
        print( "Failed \"This\" test." )
    
    elif search_string( text, "big" ) != True:
        print( "Failed \"big\" test." )
    
    elif search_string( text, "in" ) != True:
        print( "Failed \"in\" test." )
    
    elif search_string( text, "kermit" ) == True:
        print( "Failed \"kermit\" test." )
    
    else:
        print( "Passed all tests." )
        errflg = 0

    return errflg

if __name__ == '__main__':
    sys.exit(main())
    