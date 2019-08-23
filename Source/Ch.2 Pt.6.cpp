/*
Chapter 2 Part 6
Implementations tasks

Click the EDIT button to modify this file.

tasks
1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
you should be able to deduce the return type of those functions based on their usage in Person::run()
You'll need to insert the Person struct from the video in this file somewhere.

2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video
you'll need to add your UDT definitions first so your implementations compile
so be sure to paste them in this file before adding your implementations.

3) be sure to write the correct full qualified name for the nested type's member functions.
This is known as defining them outside of the class definition.

4) After you finish defining each type/function, click the [Compile, Link and Run] button to make sure you don't have any errors.

5) share the url into the #ch2_p06 channel once you've got all 10 implemented
*/

/*
the days of examples are over!  Good luck!

provide the leftFoot/rightFoot definitions here:
don't forget to insert the Person struct from the videos here so it's nested correctly.
*/

/*
provide implementations for the member functions for your 10 user-defined types here.
*/

struct Foot
{
	void stepForward();
	int stepSize();
};

void Foot::stepForward() {}

int Foot::stepSize() { return 0; }

struct Person
{
	int age = 31;
	int height = 193;
	float hairLength = 5.08f;
	float GPA = 4.02f;
	unsigned int SATScore = 1200;
	int distanceTraveled;

	void run(int howFast, bool startWithLeftFoot);

	Foot leftFoot;
	Foot rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
	if (startWithLeftFoot == true)
	{
		leftFoot.stepForward();
		rightFoot.stepForward();
	}
	else
	{
		rightFoot.stepForward();
		leftFoot.stepForward();
	}

	distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}

/*
1)
*/

struct Plane
{
	double weight = 386.265;
	int seats = 286;
	int litersOfFuel = 184;

	struct Pilot
	{
		int numberOfPilots = 2;
		bool sleepy = false;
		int flights = 386;
	};

	Pilot marcus;
};

/*
2)
*/

struct Athelete
{
	int age = 30;
	int points = 15386;
	bool football = false;
	bool jumpShots = true;
	bool layups = true;
	float pointsPerGame = 24.6f;

	void scoring();

};

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

	void overtime(float howMuchTime, bool holidays);

	Pay thanksgiving;
	Pay christmas;

};

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

struct School
{
	int classrooms = 6;
	int courses = 3;
	int test = 24;

	struct Student
	{
		bool female = true;
		char grade = 'B';
	};

	void testScore();
};

/*
5)
*/

struct Television
{
	bool smartTV = true;
	int hdmiPorts = 4;
	bool visio = true;

	void cableProvider();
};

/*
6)
*/

struct Compressor
{
	int rangeOfCompression = 20;
	bool vuMeter = true;
	int threshold = -20;
	int makeUpGain = 20;
};

/*
7)
*/

struct Typewriter
{
	int age = 32;
	int lettersWritten = 0;
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
	};

	Character link;
};

/*
9)
*/

struct Rack
{
	int equipment = 8;
	int rackSpace = 15;
	bool emptySpaces = true;
};

/*
10)
*/

struct Male
{
	int fatigueLevel = 8;
	bool readyToGiveUp = false;
	char motivationLevel = 'A';
};

#include <iostream>
int main()
{
std::cout << "good to go!" << std::endl;
}
