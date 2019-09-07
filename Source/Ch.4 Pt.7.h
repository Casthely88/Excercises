/*
 Chapter 4 Part 7
 Function/Constructor Overloading
 
 Edit your Chapter 4 part 3 task
 
 1) add pow() functions, and a powInternal() function to each of your UDTs
 a) your pow() functions should call powInternal()
 b) add a pow() whose argument type is the primitive your UDT owns.  the argument should be passed by copy.
 c) for each UDT in the file, your class should have pow() overloads that take that UDT as the function argument.
 the argument should be passed as const ref
 i.e. if you had UDTs named IntType, FloatType, DoubleType
 in your IntType class, you'd have:
 pow(const IntType&),
 pow(const FloatType&),
 pow(const DoubleType&),
 and pow(int)
 d) be sure to remember the rules about what member functions can be called on const objects.
 (const objects can only call their const member functions)
 
 2) your powInternal() function should do something like this in its body:    *val = std::pow( *val, arg );
 where 'arg' is the passed-in type, converted to whatever type your object is holding.
 if your UDT owns an int, then arg would be an int.
 if your UDT owns a float, then arg would be a float.
 std::pow's documentation is found here: https://en.cppreference.com/w/cpp/numeric/math/pow so be sure to include
 the proper header file listed there.
 
 3) modify the Point class below to have Constructors that accept your UDTs.
 a) make the Constructor's UDT arguments initialize the Point class's two member variables.
 b) overload the multiply() function so it can accept each of your UDTs.  I've added an implementation you can mimick for this function.
 c) add a toString() function to the Point class that prints out the x and y members via std::cout.
 
 4) clear out your old main()
 a) use your new pow() function in main for all of your types and print out the results.
 b) use the Point class in main and multiply some Point instances with your UDTs
 c) use the Point::toString() function to print out the results.
 
 
 5) make sure it compiles without errors.
 
 You will need to use Forward Declaration and out-of-class definitions to complete this.
 
 share it to #ch4_p07 when you're done.
 */

struct Point
{
    Point& multiply(float m)
    {
        x *= m;
        y *= m;
        return *this;
    }
private:
    float x{0}, y{0};
};

int main()
{
    
}

