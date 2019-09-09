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
 Example B)
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
 Example C)
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
            workout.timeWorkingOut += 1;
            
            if (workout.timeWorkingOut >= swimming)
                return workout;
        }
        
        return Workout{ 0 };
    }
};

/*
 1)
 */

struct Airline
{
    int fleetSize = 12;
    Airline(int f) : fleetSize(f) { }
};
struct Plane
{
    Airline sections(int leftside, int rightside)
    {
        Airline airline(rightside);
        while (airline.fleetSize < leftside)
        {
            airline.fleetSize += 1;
            
            if (airline.fleetSize >= leftside)
                return airline;
        }
        
        return Airline{ 0 };
    }
};

/*
 2)
 */

struct Team
{
    int players = 2;
    Team(int p) : players(p) { }
};
struct Athlete
{
    Team position(int pointguard, int shootingguard)
    {
        Team team(shootingguard);
        while (team.players < pointguard)
        {
            team.players += 4;
            
            if (team.players >= pointguard)
                return team;
        }
        
        return Team{ 0 };
    }
};

/*
 3)
 */

struct Employee
{
    int manager = 1;
    Employee(int m) : manager(m) { }
};
struct Pay
{
    Employee hourlyRate(int supervisor, int leadWorker)
    {
        Employee employee(supervisor);
        while (employee.manager < leadWorker)
        {
            employee.manager += 21;
            
            if (employee.manager >= leadWorker)
                return employee;
        }
        
        return Employee{ 0 };
    }
};

/*
 4)
 */
struct College
{
    int courses = 3;
    College(int c) : courses(c) { }
};
struct Student
{
    College timeStudying(int math, int reading)
    {
        College college(reading);
        while (college.courses < math)
        {
            college.courses += 1;
            
            if (college.courses >= math)
                return college;
        }
        
        return College{ -1 };
    }
};

/*
 5)
 */
struct Electronic
{
    int equipment = 1;
    Electronic(int e) : equipment(e) { }
};
struct Television
{
    Electronic functions(int channels, int ports)
    {
        Electronic electronic(channels);
        while (electronic.equipment < ports)
        {
            electronic.equipment += 1;
            
            if (electronic.equipment >= ports)
                return electronic;
        }
        
        return Electronic{ 0 };
    }
};

/*
 6)
 */
struct Studio
{
    int hardware = 6;
    Studio(int h) : hardware(h) { }
};
struct Compressor
{
    Studio sessions(int hours, int bookings)
    {
        Studio studio(bookings);
        while (studio.hardware < hours)
        {
            studio.hardware += 1;
            
            if (studio.hardware >= hours)
                return studio;
        }
        
        return Studio{ -1 };
    }
};

/*
 7)
 */
struct Writer
{
    int works = 1;
    Writer(int w) : works(w) { }
};
struct Typewriter
{
    Writer genre(int fantasy, int horror)
    {
        Writer writer(horror);
        while (writer.works < fantasy)
        {
            writer.works += 3;
            
            if (writer.works >= fantasy)
                return writer;
        }
        
        return Writer{ 0 };
    }
};

/*
 8)
 */

struct VideoGame
{
    int players = 1;
    VideoGame(int p) : players(p) { }
};
struct Character
{
    VideoGame weapons(int swords, int shields)
    {
        VideoGame videogame(swords);
        while (videogame.players < shields)
        {
            videogame.players += 1;
            
            if (videogame.players >= shields)
                return videogame;
        }
        
        return VideoGame{ -1 };
    }
};

/*
 9)
 */

struct Rack
{
    int slots = 15;
    Rack(int s) : slots(s) { }
};
struct Console
{
    Rack mixing(bool good, bool bad)
    {
        Rack rack(good);
        while (rack.slots < bad)
        {
            rack.slots += 1;
            
            if (rack.slots >= bad)
                return rack;
        }
        
        return Rack{ -1 };
    }
};

/*
 10)
 */

struct Male
{
    int shirts = 6;
    Male(int s) : shirts(s) { }
};
struct Son
{
    Male cards(int baseball, int basketball)
    {
        Male male(basketball);
        while (male.shirts < baseball)
        {
            male.shirts += 3;
            
            if (male.shirts >= baseball)
                return male;
        }
        
        return Male{ 1 };
    }
};

int main()
{
    Foo foo;
    Signal signal;
    Trainer trainer;
    Plane plane;
    Athlete athlete;
    Pay pay;
    Student student;
    
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5)
    auto smartPhone = signal.strengthOfSignal(5, 0);
    auto workout = trainer.cardio(1, -1);
    auto airline = plane.sections(3, 0);
    auto team = athlete.position(4, 0);
    auto employee = pay.hourlyRate(2, 21);
    auto college = student.timeStudying(4, 0);
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6)
    std::cout << "The signal of the smartphone: " << smartPhone.screens << std::endl;
    std::cout << "Hours a day swimming? " << workout.timeWorkingOut << std::endl;
    std::cout << "Each row on the rightside of the plane has how many seats? " << airline.fleetSize << std::endl;
    std::cout << "How many pointguards are on the team? " << team.players << std::endl;
    std::cout << "How much does the supervisor make per hour? " << employee.manager << std::endl;
    std::cout << "How many days should I study for math? " << college.courses << std::endl;
}
