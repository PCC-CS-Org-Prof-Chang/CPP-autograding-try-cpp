// Test definitions. Do NOT edit this file other than instructor!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch_amalgamated.hpp"

#include "student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

// mame and tag of test case
TEST_CASE("ADD Test Case", "[sample test]")
{
    REQUIRE(add(1,1) == 2);
}

// =====================
// tests for exercise 2
// ---------------------

// mame and tag of test case
TEST_CASE("MUL Test Case", "[sample test]")
{
    REQUIRE(mul(3,3) == 9);
}

