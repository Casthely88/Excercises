/*

 Chapter 2 Part 5 Task:
 User-Defined Types

 click the edit button in the lower right corner.

 1) write 10 user-defined types, each with a random number of member variables
	try to make the member variables have names that are related to the user-defined type.

 2) give the member variables relevant data types

 3) add a couple member functions.
	make the function parameter list for those member functions use some of your User-Defined Types

 4) make 2 of the 10 user-defined types be nested class

 5) One of your UDTs should only use UDTs for its member variable types.
	 No primitives allowed!

 6) After you finish defining each type, click the [Compile, Link and Run] button to make sure you don't have any errors.

 share the url into the #ch2-p05 channel once you've got all 10 implemented
 */

 /*
  example:
  */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
	int numSponges = 3;
	double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
	unsigned int numCarsProcessed = 0;

	struct Car                             //4) nested class
	{
		bool isAPickupTruck = false;
		float gasMileage = 26.2f;        //2) relevant data types
	};

	void washAndWaxCar(Car car);         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.

	Car myCar;  //5) a member variable whose type is a UDT.
};


/*
1)
*/
struct Woman
{
	bool hasChildren = true;
	int age = 36;
	double lengthOfTimeMarried = 8.03;
	int mattress = 1;

	struct Wife
	{
		char name = 'J';
		bool bornInUSA = false;
	};

	void makesBed(Woman Wife);

	Wife myWife;

};

/*
2)
*/
struct Business
{
	bool isLLC = false;
	int numberOfEmployees = 32;
	float monthlyIncome = 754.68f;
	bool customerAppreciationDaySaturday = true;

	struct Manager
	{
		int timeEmployed = 1460;
		float hoursPerDay = 11.30f;
	};

	void customerAppreciationDay(Business Manager);

	Manager myManager;
};

/*
3)
*/
struct Excercise
{
	int perWeek = 3;
	int howLong = 1;
	bool liftsWeights = false;

	struct Workout
	{
		bool cardio = true;
		bool swimming = true;
		float distance = 12.345f;
	};

	void routine(Workout);

	Workout myWorkout;
};

/*
4)
*/
struct Child
{
	int shoeSize = 12;
	float height = 109.728f;
	int gradeLevel = 1;

	struct Santana
	{
		int siblings = 0;
		bool isBoy = true;
	};

	void doesHomework(Child, Santana);

	Santana mySon;

};

/*
5)
*/
struct MidiKeyboard
{
	bool hasPads = true;
	bool hasKeys = true;
	int usbPorts = 1;

	struct MPD218
	{
		int pads = 16;
		int knobs = 6;
	};

	void programsDrums(MPD218);
};

/*
6)
*/
struct DigitalAudioWorkstation
{
	int tracks = 45;
	bool routedToBuss = true;
	int effectsPerBuss = 3;
	int recordVocals = 23;
	int instruments = 2;

	struct Plugins
	{
		bool VST = true;
		bool AU = false;
		int bit = 64;
	};

	void recording(DigitalAudioWorkstation, Plugins);

	Plugins myMusic;
};

/*
7)
*/
struct Electronic
{
	bool useElectricity = true;
	double lengthOfCharge = 23.578;
	char manufacturer = 'S';

	struct Phone
	{
		int screen = 1;
		bool pushButtons = false;
		int chargePort = 1;
	};

	void communicationDevice(bool PCS = true, int frequency = 800);
};

/*
8)
*/
struct Building
{
	int windows = 29;
	int doors = 10;
	int rooms = 5;
};



/*
 9)
 */
struct DeadboltLock
{
	int pads = 10;
	bool electronic = true;
	bool keyEntry = false;
};

/*
10)
*/
struct Microphone
{
	int capsule = 1;
	int xlrInput = 1;
	int SPL = 144;
};

#include <iostream>
int main()
{
	std::cout << "good to go!" << std::endl;
}
