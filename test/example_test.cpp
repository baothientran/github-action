#include <array>
#include <doctest/doctest.h>
#include <math_utility.h>

TEST_CASE("Hello World")
{
    CHECK(action::sum(1, 4) == 5);
}
