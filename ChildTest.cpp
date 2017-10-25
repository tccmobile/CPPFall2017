//
// Created by William Smith on 10/25/17.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Child.h"

TEST_CASE( "Child objects functions work as expected" , "[Child]" ) {

    Child boy("Tom",8, false);



    SECTION( "checking name change" ) {
        boy.setName("Phil");

        REQUIRE( boy.getName() == "Phil");

    }
    SECTION( "checking age change" ) {
        boy.setAge(6);

        REQUIRE( boy.getAge()==6 );

    }
    SECTION( "checking happy change" ) {
        boy.setHappy(true);

        REQUIRE( boy.isHappy()  );

    }
    SECTION( "checking play result" ) {
        boy.plays();

        REQUIRE( boy.isHappy() );

    }
}