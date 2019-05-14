#define BOOST_TEST_MODULE UnitTest
#include <boost/test/included/unit_test.hpp>
#include "headers/rational.h"

using namespace ExactArithmetic;


BOOST_AUTO_TEST_CASE(my_addition_test) { 
	Rational x, y;
	std::istringstream xstr("1/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;
	Rational result = Rational(2,3);
	// Check equality of the results of two expressions 
	BOOST_CHECK_EQUAL( (x+y) , result); 
}
	
BOOST_AUTO_TEST_CASE(substraction_test) {
	Rational x, y;
	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;
	Rational result = Rational(1,3);
	// Check equality of the results of two expressions 
	BOOST_CHECK_EQUAL((x - y), result);
}

BOOST_AUTO_TEST_CASE(multiplication_test) {
	Rational x, y;
	std::istringstream xstr("1/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;
	Rational result = Rational(1, 9);
	// Check equality of the results of two expressions 
	BOOST_CHECK_EQUAL((x * y), result);
}


BOOST_AUTO_TEST_CASE(division_test) {
	Rational x, y;
	std::istringstream xstr("1/3");
	std::istringstream ystr("1/3");
	xstr >> x;
	ystr >> y;
	Rational result = 1;
	// Check equality of the results of two expressions 
	BOOST_CHECK_EQUAL((x / y), result);
}


