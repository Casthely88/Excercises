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
 /*
 Example)
 */

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

/*
1)
*/

struct Plane
{
	double weight = 386.265;
	int seats = 286;
	int litersOfFuel = 184;
	int crewMembers;
	float milesFlying;

	Plane();

	void pilot()
	{
		std::cout << "This is your captain Marcus speaking" << std::endl;
		std::cout << "We have eight members on board to assist you with whatever your needs may be" << std::endl;
	}


};

Plane::Plane() : weight(386.265), seats(286), litersOfFuel(184), crewMembers(8), milesFlying(663.9f) {}

/*
 2)
 */

struct Athlete
{
	int age;
	int points = 15386;
	bool football = false;
	bool jumpShots = true;
	bool layups;
	float pointsPerGame;

	Athlete();

	void shootingGuard()
	{
		std::cout << "I gotta work on my game" << std::endl;
		std::cout << "I need to make 4 layups in todays game" << std::endl;
	}

};

Athlete::Athlete() : age(30), points(15386), football(false), jumpShots(true), layups(true), pointsPerGame(24.6f) {}

/*
 3)
 */

struct Pay
{
	void halfBusinessDay();
	int timeAndAhHalf();
};

void Pay::halfBusinessDay() {}
int Pay::timeAndAhHalf() { return 2; }

struct Employee
{
	bool manager = false;
	bool supervisor = true;
	int daysPerWeek = 5;
	float paycheck = 535.73f;
	int holidayPay;
	char workerRating;
	int lengthOfEmployment;

	Employee();

	void carpenter()
	{
		std::cout << "My paycheck is going to be fat!!!" << std::endl;
		std::cout << "I've been here for fifthteen months" << std::endl;
	}

	void overtime(float howMuchTime, bool holidays);

	Pay thanksgiving;
	Pay christmas;

};

Employee::Employee() : manager(false), supervisor(true), daysPerWeek(5), paycheck(535.73f), workerRating('B'), lengthOfEmployment(15) {}

void Employee::overtime(float howMuchTime, bool holidays)
{
	if (holidays == true)
	{
		thanksgiving.timeAndAhHalf();
		christmas.timeAndAhHalf();
	}
	else
	{
		christmas.halfBusinessDay();
		thanksgiving.halfBusinessDay();
	}

	holidayPay += thanksgiving.timeAndAhHalf() + christmas.timeAndAhHalf();
}

/*
 4)
 */

struct Student
{
	bool female = true;
	char grade = 'B';
	int classmates;
	int hoursOfStudying;
	float lunchbreak;

	Student();

	void lunchroom()
	{
		std::cout << "I hate this table" << std::endl;
		std::cout << "Good thing I've already studied!!!" << std::endl;
	}
};

Student::Student() : female(true), grade('B'), classmates(15), hoursOfStudying(3), lunchbreak(0.42f) {}

/*
 5)
 */

struct Television
{
	bool smartTV = true;
	int hdmiPorts = 4;
	bool visio = true;
	int channels;
	int cableCompany;
	bool hasRemote;

	Television();

	void chris()
	{
		std::cout << "Time to watch my shows" << std::endl;
		std::cout << "New batteries for the remote" << std::endl;
	}
};

Television::Television() : smartTV(true), hdmiPorts(4), visio(true), channels(72), cableCompany(0), hasRemote(true) {}

/*
 6)
 */

struct Compressor
{
	int rangeOfCompression = 20;
	bool vuMeter = true;
	int threshold = -20;
	int makeUpGain = 20;
	int attackRange;
	int releaseRange;
	int inputs;

	Compressor()
	{
		attackRange = 7;
		releaseRange = 7;
		inputs = 3;
	}

	void elevenSeventySix()
	{
		std::cout << "This KT-76 is great!!!" << std::endl;
	}

};

/*
 7)
 */

struct Typewriter
{
	int age = 32;
	int lettersWritten = 0;
	bool ink;
	int scrollsOfPaper;

	Typewriter()
	{
		ink = true;
		scrollsOfPaper = 3;
	}

	void diana()
	{
		std::cout << "I've got only 3 pages left" << std::endl;
	}
};

/*
 8)
 */

struct VideoGame
{
	int players = 1;
	bool rpg = true;
	char name = 'L';

	struct Character
	{
		bool greenOutfit = true;
		bool rescuePrincess = true;
		int fightingSkill;
		int b;

		Character()
		{
			fightingSkill = 86;
			b = 23;
		}
		void link()
		{
			std::cout << "Gotta get to Zelda before it's too late" << std::endl;
		}
	};
};

/*
 9)
 */

struct Rack
{
	int equipment = 8;
	int rackSpace = 15;
	bool emptySpaces = true;

	Rack();
};

Rack::Rack() {}

/*
 10)
 */

struct Male
{
	int fatigueLevel = 8;
	bool readyToGiveUp = false;
	char motivationLevel = 'A';

	Male();
};

Male::Male() {}

/*
End)
*/
int main()
{
	Plane plane;
	Athlete athlete;
	Employee employee;
	Television television;
	Compressor compressor;
	Typewriter typewriter;

	plane.pilot();
	athlete.shootingGuard();
	employee.carpenter();
	television.chris();
	compressor.elevenSeventySix();
	typewriter.diana();
}
