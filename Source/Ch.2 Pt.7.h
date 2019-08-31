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

 /*
  1)
  */

struct FloatType
{
	float add(float lhs, float rhs);
	float subtract(float lhs, float rhs);
	float multiply(float lhs, float rhs);
	float divide(float lhs, float rhs);

};

float FloatType::add(float lhs, float rhs)
{
	return lhs + rhs;
}

float FloatType::subtract(float lhs, float rhs)
{
	return lhs - rhs;
}

float FloatType::multiply(float lhs, float rhs)
{
	return lhs * rhs;
}

float FloatType::divide(float lhs, float rhs)
{
	if (rhs == 0)
	{
		return 0;
	}
	else
	{
		return lhs / rhs;
	}
}

/*
 2)
 */

struct DoubleType
{
	double add(double lhs, double rhs);
	double subtract(double lhs, double rhs);
	double multiply(double lhs, double rhs);
	double divide(double lhs, double rhs);
};

double DoubleType::add(double lhs, double rhs)
{
	return lhs + rhs;
}

double DoubleType::subtract(double lhs, double rhs)
{
	return lhs - rhs;
}

double DoubleType::multiply(double lhs, double rhs)
{
	return lhs * rhs;
}

double DoubleType::divide(double lhs, double rhs)
{
	if (rhs == 0)
	{
		return 0;
	}
	else
	{
		return lhs / rhs;
	}
}

/*
 3)
 */

struct IntType
{
	int add(int lhs, int rhs);
	int subtract(int lhs, int rhs);
	int multiply(int lhs, int rhs);
	int divide(int lhs, int rhs);
};

int IntType::add(int lhs, int rhs)
{
	return lhs + rhs;
}

int IntType::subtract(int lhs, int rhs)
{
	return lhs - rhs;
}

int IntType::multiply(int lhs, int rhs)
{
	return lhs * rhs;
}

int IntType::divide(int lhs, int rhs)
{
	if (rhs == 0)
	{
		return 0;
	}
	else
	{
		return lhs / rhs;
	}
}

#include <iostream>
int main()
{
	FloatType ft;
	auto resultFloatType = ft.add(103.2f, 23.f);
	std::cout << "result of ft.add(): " << resultFloatType << std::endl;
	resultFloatType = ft.subtract(313.2f, 23.f);
	std::cout << "result of ft.subtract(): " << resultFloatType << std::endl;
	resultFloatType = ft.multiply(33.2f, 23.f);
	std::cout << "result of ft.multiply(): " << resultFloatType << std::endl;
	resultFloatType = ft.divide(633.2f, 23.f);
	std::cout << "result of ft.divide(): " << resultFloatType << std::endl;

	DoubleType dt;
	auto resultDoubleType = dt.add(38.2, 53);
	std::cout << "result of dt.add(): " << resultDoubleType << std::endl;
	resultDoubleType = dt.subtract(403.2, 63);
	std::cout << "result of dt.subtract(): " << resultDoubleType << std::endl;
	resultDoubleType = dt.multiply(413.2, 73);
	std::cout << "result of dt.multiply(): " << resultDoubleType << std::endl;
	resultDoubleType = dt.divide(423.2, 83);
	std::cout << "result of dt.divide(): " << resultDoubleType << std::endl;

	IntType it;
	auto resultIntType = it.add(32, 23);
	std::cout << "result of it.add(): " << resultIntType << std::endl;
	resultIntType = it.subtract(32, 23);
	std::cout << "result of it.subtract(): " << resultIntType << std::endl;
	resultIntType = it.multiply(32, 23);
	std::cout << "result of it.multiply(): " << resultIntType << std::endl;
	resultIntType = it.divide(32, 23);
	std::cout << "result of it.divide(): " << resultIntType << std::endl;
}


