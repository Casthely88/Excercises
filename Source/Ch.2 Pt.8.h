/*
 Chapter 2 - Part 8
 Constructors tasks

 1) open the coliru link you submitted in #ch2_p06 where you added and implemented member functions to your 10 User-Defined-Types.

 2) click the Edit button to edit it.

 3) Add a constructor for each User-Defined-Type.

 4) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.

 5) make them print out something interesting via std::cout

 ********
 After you finish defining each type/function,
 click the [Compile, Link and Run] button to make sure you don't have any errors.
 ********

 share the url into the #ch2_p08 channel once you're done.

 example:
 */

#include <iostream>
struct Foo  // my user defined type
{
	int a; //a member variable
	Foo() { a = 0; }             //3) the constructor
	void printThing()            //1) the member function
	{
		std::cout << "Foo::printThing() " << a << std::endl;  //5) printing out something interesting
	}
};

int main()
{
	Foo foo;              //4) instantiating a Foo in main()
	foo.printThing();     //4) calling a member function of the instance that was instantiated.
}
