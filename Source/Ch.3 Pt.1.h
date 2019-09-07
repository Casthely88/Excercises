/*
 Chapter 3 Part 1
 The 'this' keyword
 
 1) Edit your previous task (#ch2_p12).
 2) Replace that task's instructions with these instructions.
 
 3) For any std::cout statements you had in main() that accessed member variables of your types or printed out the results of your member function calls,
 a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
 b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
 
 4) if you didn't have any std::cout statements in main() that accessed member variables:
 write some.
 then do 3a) & 3b)
 
 
 5) After you finish, click the [Compile, Link and Run] button to make sure you don't have any errors.
 
 share the url into the #ch3_p01 channel once you've got it implemented
 */

/*
 example:
 */
#include <iostream>
namespace example
{
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
        void memberFunc() { std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; }  //3)
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    int main()
    {
        MyFoo mf;
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl;  //3)
        mf.memberFunc();
        return 0;
    }
}

/*
 copied UDT 1:
 */

/*
 copied UDT 2:
 */

/*
 copied UDT 3:
 */

/*
 new UDT 4:
 */

/*
 new UDT 5:
 */

#include <iostream>
int main()
{
    example::main();
    std::cout << "good to go!" << std::endl;
}

