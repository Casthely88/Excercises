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
#include <string>

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

struct Foot
{
	void stepForward();
	int stepSize();
	int sizeOfFoot();
};

void Foot::stepForward() {}

int Foot::stepSize() { return 13; }

struct Person
{
	int age = 31;
	int height = 193;
	float hairLength = 5.08f;
	float GPA = 4.02f;
	unsigned int SATScore = 1200;
	int distanceTraveled;

	Person()
	{
		distanceTraveled = 0;
	}

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
	std::cout << "Person::age: " << distanceTraveled << std::endl;
}

/*
 1)
 */

struct Plane
{
	double weight = 386.265;
	int seats;
	int litersOfFuel = 184;

	Plane()
	{
		seats = 286;
	}

	struct Pilot
	{
		int numberOfPilots = 2;
		bool sleepy = false;
		int flights = 386;
	};

	void Marcus(Pilot pilot)
	{

		std::cout << "Plane::weight " << pilot.sleepy << std::endl;

	};
};

/*
 2)
 */

struct Athelete
{
	int age;
	int points = 15386;
	bool football = false;
	bool jumpShots = true;
	bool layups;
	float pointsPerGame;

	Athelete()
	{
		age = 30;
		pointsPerGame = 24.6f;
		layups = true;
	}

	void Alan(Athelete athelete)

	{
		std::cout << "Athelete::pointPerGame: " << athelete.age << std::endl;
	}

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
	char workerRating;
	int lengthOfEmployment;

	Employee()
	{
		workerRating = 'B';
		lengthOfEmployment = 15;
	}

	void Alan(Employee employee)
	{
		std::cout << "Employee::name: " << employee.lengthOfEmployment << std::endl;
	}

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
		int classmates;
		int hoursOfStudying;
		float lunchbreak;

		Student()
		{
			classmates = 15;
			hoursOfStudying = 3;
			lunchbreak = 0.42f;
		}

		void Melissa(Student student)
		{
			std::cout << "Student::classmates: " << student.lunchbreak << std::endl;
		}
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
	int channels;
	int cableCompany;
	bool hasRemote;

	Television()
	{
		channels = 72;
		cableCompany = 0;
		hasRemote = true;
	}

	void Chris(Television television)
	{
		std::cout << "Television::channels: " << television.cableCompany << std::endl;
	}
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
	int attackRange;
	int releaseRange;
	int inputs;

	Compressor()
	{
		attackRange = 7;
		releaseRange = 7;
		inputs = 3;
	}

	void elevenSeventySix(Compressor compressor)
	{
		std::cout << "Compressor::inputs: " << compressor.attackRange << std::endl;
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

	void Diana(Typewriter typewriter)
	{
		std::cout << "Typewriter::scrollsOfPaper: " << typewriter.ink << std::endl;
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
		int b;

		Character() { b = 23; }
		void fightingSkill()
		{
			std::cout << "Character::fightingSkill() " << b << std::endl;
		}
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
