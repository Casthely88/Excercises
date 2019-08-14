/*
 Chapter 2 - Part 10
 Scope and Lifetime tasks

 video covered:
	variable scope and lifetime relative to { }
	while loops
	for loops()

 tasks
 1) open the coliru link you submitted where you added and implemented constructors to your 10 user-defined types.

 2) click the Edit button on it.

 3) add some new member functions to your types.

 4) use while() or for() loops to do something interesting inside these new member functions.
		 a) for example: have a loop that modifies a member variable of some object created outside the loop.
		 b) when that member variable reaches a certain threshold, return it mid-loop.
		 c) maybe use function parameters to control the starting value of that member variable or control the threshold

 5) call those new member functions in main()

 6) use std::cout statements to print out information about what your loops did.

 7) click the [Compile, Link and Run] button to make sure you don't have any errors.

 share the url into the #ch2_p10 channel once you're done.

 example:
 */

#include <iostream>
struct Bar
{
	int num = 0;
	Bar(int n) : num(n) { }
};
struct Foo
{
	Bar scopeLifetimeFunc(int threshold, int startingVal) //3), 4c) 
	{
		Bar bar(startingVal);                //4a)
		while (bar.num < threshold)         //4a) 
		{
			bar.num += 1;                    //4a)

			if (bar.num >= threshold)       //4b)
				return bar;
		}

		return Bar{ -1 }; //if your startingValue >= threshold, the while loop never runs
	}
};

int main()
{
	Foo foo;
	auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 

	std::cout << "bar.num: " << bar.num << std::endl;     //6) 
}

#pragma once
