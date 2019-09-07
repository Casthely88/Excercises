/*
 Chapter 3 Part 6
 New/This/Pointers/References conclusion
 
 click the edit button to modify this Coliru link
 
 0) in the blank space before task #1, declare/define an empty struct named 'A' on a single Line.
 on the lines below it, write a struct named 'HeapA' that correctly shows how to own an instance of 'A'
 on the heap without leaking, without using smart pointers.
 */











/*
 1) write 3 structs that own a heap-allocated numeric type without using smart pointers
 call them IntType, FloatType, DoubleType.
 IntType should own a heap-allocated int, for example.
 
 2) give it a constructor whose argument initializes the owned numeric type's value.
 i.e. if you're owning an int on the heap, your ctor argument will initialize that heap-allocated int's value.
 
 3) implement those add/subtract/divide/multiply member functions from chapter 2 on it
 a) make them modify the owned numeric type
 b) set them up so they can be chained together.
 i.e.
 DoubleType dt(3.5);
 dt.add(3.0).multiply(-2.5).divide(7.2); //an example of chaining
 
 4) write some add/Subtract/divide/multiply member functions for each type that take your UDTs
 for example, if you created a DoubleType and IntType UDT, you would add a IntType::divide(const DoubleType& dt);
 
 5) print out the results with some creative couts i.e.
 FloatType ft(0.1f);
 IntType it(3);
 std::cout << "adding 3 and subtracting 'it' from 'ft' results in the following value: " << *ft.add(2.f).subtract( it ).value << std::endl;  //note the dereference of the `value` member of `ft`
 
 6) Don't let your heap-allocated owned type leak!
 
 7) compile/link/run to make sure you don't have any errors
 
 share it to the #ch3_p06 channel when you're done.
 */

#include <iostream>

int main()
{
    
}

