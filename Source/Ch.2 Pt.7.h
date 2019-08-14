/*
 Chapter 2 Part 7
 Returning Values tasks

 Click the EDIT button to modify this file.

 1) write 3 UDTs named FloatType, DoubleType, IntType.

 2) give each UDT the following member functions:
		add( lhs, rhs );
		subtract( lhs, rhs );
		multiply( lhs, rhs );
		divide( lhs, rhs );

 3) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
		float FloatType::add( float lhs, float rhs )

 4) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
		FloatType ft;
		auto result = ft.add(3.2f, 23.f );

 5) print out those results using std::cout:
		std::cout "result of ft.add(): " << result << std::endl;

 6) After you finish defining each type/function, click the [Compile, Link and Run] button to make sure you don't have any errors.

 share the url into the #ch2_p07 channel once you're done.
 */

#include <iostream>
int main()
{
	std::cout << "good to go!" << std::endl;
}
#pragma once
