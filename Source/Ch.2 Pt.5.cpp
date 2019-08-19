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
struct woman
{
	bool hasChildren = true;
	int age = 36;
	double lengthOfTimeMarried = 8.03;

	struct wife
	{
		char name = 'J';
		bool bornInUSA = false;
	};

	void makesBed(mattress sheets);

	mattress kingSize;
};

/*
2)
*/
struct business
{
	bool isLLC = false;
	int numberOfEmployees = 32;
	float monthlyIncome = 754.68f;

	struct manager
	{
		int timeEmployed = 1460;
		float hoursPerDay = 11.30;
	};

	void customerAppreciationDay(saturday weekend);

	saturday 12 through 4;
};

/*
3)
*/
struct excercise
{
    int perWeek = 3;
    int howLong = 1;
    bool liftsWeights = false;
    
    struct workout
    {
        bool cardio = true;
        bool swimming = true;
        float distance = 12.345f;
    };
    
    void routines(treadmill, swimming, cycling);
    
    routines myRoutine;
};

/*
4)
*/
struct child
{
    int shoeSize = 12;
    float height = 109.728f;
    int gradeLevel = 1;
    
    struct Santana
    {
        int siblings = 0;
        bool isBoy = true;
    };
    
    void doesHomework(writing, reading);
    
    writing spellingAndHandwriting;
    
};

/*
5)
*/
struct midiKeyboard
{
	bool hasPads = true;
	bool hasKeys = true;
	int usbPorts = 1;

	struct MPD218
	{
		int pads = 16;
		int knobs = 6;
	};
	
	void programsDrums( drumPatterns );
};

/*
6)
*/
struct DigitalAudioWorkstation
{
	int tracks = 45;
	bool routedToBuss = true;
	int effectsPerBuss = 3;

	struct plugins
	{
		bool VST = true;
		bool AU = false;
		int bit = 64;
	};

	void recording(vocals, instruments);

	vocals male;
};

/*
7)
*/
struct electronic
{
	bool useElectricity = true;
	double lengthOfCharge = 23.578;
	char manufacturer = 'S';

	struct phone
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
struct building
{
	int windows = 29;
	int doors = 10;
	int rooms = 5;
};



/*
 9)
 */
struct deadboltLock
{
	int pads = 10;
	bool electronic = true;
	bool keyEntry = false;
};

/*
10)
*/
struct microphone
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
