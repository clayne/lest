// C++11 - use multiple source files.

#include "lest.hpp"

const lest::test module[] = {

    CASE( "A passing test" "[pass]" ) 
    {
        EXPECT( 42 == 42 );
    }
};

extern lest::tests & specifications();

lest_MODULE( specifications(), module )
