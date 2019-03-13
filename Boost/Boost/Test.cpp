#ifdef TEST
#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include "Source.h"
#include <conio.h>


BOOST_AUTO_TEST_CASE( free_test_function )
/* Compare with void free_test_function() */
{

  BOOST_TEST( number_less_20_to_string(0) == std::string("ноль")  );
  BOOST_TEST( number_less_20_to_string(1) == std::string("один")  );
  BOOST_TEST( number_less_20_to_string(20) == std::string("двадцать")  );
  BOOST_TEST( number_less_100_to_string(21) == std::string("двадцать один")  );
  _getch();
}
 
#endif