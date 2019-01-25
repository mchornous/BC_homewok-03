#include <iostream>
#include "date.h"

//******************************************************************//
//  test the date class

int main()
{
   Date d1,d2(10,26,2003),d3;
   d3.setDate(12,19,2003);
   std::cout << std::endl << std::endl << "d1 = ";
   d1.print();
   std::cout << std::endl << "d2 = ";
   d2.print();
   std::cout << std::endl << "d3 = ";
   d3.print();
   d2 = d2 + 7;
   std::cout << std::endl << "Add 7 days to d2:" << std::endl << "d2 = " << d2;
   d2 = 7 + d2;
   std::cout << std::endl << "Add 7 days to d2:" << std::endl << "d2 = " << d2;
   Date d4(10,31,2003);
   std::cout << std::endl << "d4 = " << d4 << std::endl;
   if (d2 == d4)
      std::cout << "d2 and d4 are equal" << std::endl;
   if (d4 < d2)
      std::cout << "d4 is less than d2" << std::endl;
   if (d2 > d4)
      std::cout << "d2 is greater than d4" << std::endl;
   if (d4 <= d2)
      std::cout << "d4 is less than or equal to d2" << std::endl;
   if (d2 >= d4)
      std::cout << "d2 is greater than or equal to d4" << std::endl;
   if (d4 == d4)
      std::cout << "d4 is equal to itself" << std::endl;
   if (d2 != d4)
      std::cout << "d2 and d4 are not equal" << std::endl;

   std::cout << "Enter two dates: ";
   std::cin >> d2 >> d4;
   std::cout << "The dates were: " << d2 << " and " << d4 << std::endl;
}
