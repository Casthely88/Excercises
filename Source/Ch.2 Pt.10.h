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

/*
 1)
 */

struct SmartPhone
{
    int screens = 1;
    SmartPhone(int s) : screens(s) { }
};
struct Signal
{
    SmartPhone strengthOfSignal(int threshold, int startingVal)
    {
        SmartPhone smartPhone(startingVal);
        while (smartPhone.screens < threshold)
        {
            smartPhone.screens += 1;
            
            if (smartPhone.screens >= threshold)
                return smartPhone;
        }
        
        return SmartPhone{ -1 };
    }
};

/*
 2)
 */

struct Workout
{
    int timeWorkingOut = 1;
    Workout(int t) : timeWorkingOut(t) { }
};
struct Trainer
{
    Workout cardio(int swimming, int walking)
    {
        Workout workout(walking);
        while (workout.timeWorkingOut < swimming)
        {
            workout.timeWorkingOut += 2;
            
            if (workout.timeWorkingOut >= swimming)
                return workout;
        }
        
        return Workout{ 2 };
    }
};

/*
 3)
 */



int main()
{
    Foo foo;
    Signal signal;
    Trainer trainer;
    
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5)
    auto smartPhone = signal.strengthOfSignal(5, 0);
    auto workout = trainer.cardio(1, 2);
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6)
    std::cout << "The signal of the smartphone: " << smartPhone.screens << std::endl;
    std::cout << "Hours a day swimming? " << workout.timeWorkingOut << std::endl;
}



