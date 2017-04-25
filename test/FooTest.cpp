//
//  FooTest.cpp
//  DepthTracker
//
//  Created by 加藤 哲朗 on 4/25/17.
//
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ofApp.h"

TEST_CASE( "foo will times by 2", "[foo]" ) {
    REQUIRE( foo(1) == 2 );
    REQUIRE( foo(2) == 4 );
    REQUIRE( foo(3) == 6 );
}
