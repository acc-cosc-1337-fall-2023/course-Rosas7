#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "char.h"
#include "char.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Test the get_char ascii value function", "char to int conversion ")
{
	REQUIRE(65 == get_char_ascii_value('A'));
	REQUIRE(97 == get_char_ascii_value('a'));
	REQUIRE(98 == get_char_ascii_value('b'));

}


/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

/**Test boolean operators*/
TEST_CASE("Test the and operator truth table", "only T T returns T")
{
	REQUIRE(get_and_result(3, 5) == true);
	REQUIRE(get_and_result(5, 3) == false);
	REQUIRE(get_and_result(3, 1) == false);
	REQUIRE(get_and_result(1, 5) == false);
}

TEST_CASE("Test the or operator truth table", "only F F returns F")
{
	REQUIRE(get_or_result(true, true) == true);
	REQUIRE(get_or_result(true, false) == true);
	REQUIRE(get_or_result(false, true) == true);
	REQUIRE(get_or_result(false, false) == false);
}

TEST_CASE("Test the negation operator truth table", "negate values")
{
	REQUIRE(get_bool_negation(true) == false);
	REQUIRE(get_bool_negation(false) == true);
}

TEST_CASE("Test the boolean operators order of precedence", "order of operations")
{
	REQUIRE(get_order_of_precedence_result(true, true, true) == true);
	REQUIRE(get_order_of_precedence_result(true, true, false) == false);

}

TEST_CASE("Test a use case for boolean operators", "negate a result")
{
	REQUIRE(is_letter_a_consonant('a') == false);
	REQUIRE(is_letter_a_consonant('z') == true);
}

TEST_CASE("Test ")