/*
 Chapter 2 - Part 9
 Member initialization tasks

 tasks
 1) open the coliru link you submitted where you added and implemented constructors to your 10 user-defined types. #ch2_p08

 2) click the Edit button on it.

 3) initialize some of your member variables either in-class or in the Constructor member initializer list.

 4) make some of your member functions use those initialized member variables via std::cout statements.

 5) click the [Compile, Link and Run] button to make sure you don't have any errors.

 share the url into the #ch2_p09 channel once you're done.
 */

#include <iostream>
struct Foo
{
	int a; //a member variable
	float b{ 2.f }; //3) in-class initialization
	Foo() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
	void printThing()  //the member function
	{
		std::cout << "Foo::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
	}
};

int main()
{
	Foo foo; //instantiating a Foo in main()
	foo.printThing(); //calling a member function of the instance that was instantiated.
}
#pragma once
