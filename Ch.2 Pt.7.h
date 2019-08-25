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
    float add( float lhs, float rhs );
    float subtract( float lhs, float rhs );
    float multiply( float lhs, float rhs );
    float divide( float lhs, float rhs );
    
};

float FloatType::add( float lhs, float rhs )
{
    return lhs + rhs;
}

float FloatType::subtract( float lhs, float rhs )
{
    if ( rhs == 0 )
    {
        return 0;
    }
    else
    {
        return lhs - rhs;
    }
}

float FloatType::multiply( float lhs, float rhs )
{
    return lhs * rhs;
}

float FloatType::divide( float lhs, float rhs )
{
    return lhs / rhs;
}

/*
 2)
 */

struct DoubleType
{
    double add( double lhs, double rhs );
    double subtract( double lhs, double rhs );
    double multiply( double lhs, double rhs );
    double divide( double lhs, double rhs );
};

double DoubleType::add( double lhs, double rhs )
{
    return lhs + rhs;
}

double DoubleType::subtract( double lhs, double rhs )
{
    return lhs - rhs;
}

double DoubleType::multiply( double lhs, double rhs )
{
    if ( rhs == 1 )
    {
        return 1;
    }
    else
    {
        return lhs * rhs;
    }
}

double DoubleType::divide( double lhs, double rhs )
{
    return lhs / rhs;
}

/*
 3)
 */

struct IntType
{
    int add( int lhs, int rhs );
    int subtract( int lhs, int rhs );
    int multiply( int lhs, int rhs );
    int divide( int lhs, int rhs );
};

int IntType::add ( int lhs, int rhs )
{
    if ( rhs == 0)
    {
        return 0;
    }
    else
    {
        return lhs + rhs;
    }
}

int IntType::subtract ( int lhs, int rhs )
{
    return lhs + rhs;
}

int IntType::multiply ( int lhs, int rhs )
{
    return lhs * rhs;
}

int IntType::divide ( int lhs, int rhs )
{
    return lhs / rhs;
}

#include <iostream>
int main()
{
    FloatType ft;
    auto resultFloat = ft.add(3.2f, 23.f );
    std::cout << "result of ft.add(): " << resultFloat << std::endl;
    resultFloat = ft.subtract(3.2f, 23.f );
    std::cout << "result of ft.subtract(): " << resultFloat << std::endl;
    resultFloat = ft.multiply(3.2f, 23.f );
    std::cout << "result of ft.multiply(): " << resultFloat << std::endl;
    resultFloat = ft.divide(3.2f, 23.f );
    std::cout << "result of ft.divide(): " << resultFloat << std::endl;
    
    DoubleType dt;
    auto resultDouble = dt.add(3.2, 23 );
    std::cout << "result of dt.add(): " << resultDouble << std::endl;
    resultDouble = dt.subtract(3.2, 23 );
    std::cout << "result of dt.subtract(): " << resultFloat << std::endl;
    resultDouble = dt.multiply(3.2, 23 );
    std::cout << "result of dt.multiply(): " << resultFloat << std::endl;
    resultDouble = dt.divide(3.2, 23 );
    std::cout << "result of dt.divide(): " << resultFloat << std::endl;
    
    IntType it;
    auto resultInt = it.add(32, 23 );
    std::cout << "result of it.add(): " << resultInt << std::endl;
    resultInt = it.subtract(32, 23 );
    std::cout << "result of it.subtract(): " << resultInt << std::endl;
    resultInt = it.multiply(32, 23 );
    std::cout << "result of it.multiply(): " << resultInt << std::endl;
    resultInt = it.divide(32, 23 );
    std::cout << "result of it.divide(): " << resultInt << std::endl;
}
