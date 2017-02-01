//
//


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "reverse.hpp"

TEST_CASE("reverse reverses an integer") {
    auto test = int{1234567890};
    auto result = reverse::reverse(test);
    REQUIRE(result == 0987654321);
}

TEST_CASE("reverse reverses a string"){
    auto test = std::string{"hello world"};
    auto result = reverse::reverse(test);
    REQUIRE(result == "dlrow olleh");
}

TEST_CASE("reverse reverses a single digit integer"){
    auto test = int{0};
    auto result = reverse::reverse(test);
    REQUIRE(result == 0);
}

TEST_CASE("reverse reverses a single letter string"){
    auto test = std::string{"a"};
    auto result = reverse::reverse(test);
    REQUIRE(result == "a");
}
