/*
Declarations Tasks

click the edit button in the lower right corner.

Write down the names of all of the primitives available in C++ (except wchar_t)

for each primitive type, write out 3 variable declarations.
give each declaration an initial value
just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
'void' is a return type. you do not need to declare 3 variables of type 'void'.

write out 10 function declarations.
each declaration should have a random number of parameters in the function parameter list.

provide default values for an arbitrary number of parameters in the function parameter list.
When naming your parameters, choose names that are relevant to the task implied by the function's name.

for each of those functions declared, write out how the function would look if called with correct arguments

clear the "g++ -std=c++17 etc" text at the bottom and click 'share' when you're done.
share the url into the #week 1 channel
*/

/*
write out all C++ primitive types:
example:
*/
int;

/*
3 variable declarations per primitive type:
example
*/
int number = 2;

/*
10 function declarations
example:
*/
void rentACar(int rentalDuration, int carType = 0);  //function declaration with random number of arguments, arbitrary number of arguments have default value
rentACar(6, 2); //example of calling that function

/*
1)
*/
int
bool
double
char
float

/*
2)
*/
bool playSound = true;
bool rotateLeftArm = false;
bool driveCar = false;

int height = 64;
int shoeSize = 13;
int keysOnMyController = 25;

float amountOfSaturation = 65.49f;
float monitorVolume = 81.66f;
float mixKnob = 34.78f;

char myName = 'C';
char myRecordingRig = 'W';
char midiController = 'M';

double sizeOfFlorida = 65.755;
double sizeOfUSCoin = 1.287;
double distanceToMoon = 238.855;

/*
3)
*/
void getHairCut(bool getFade, bool skinnedOnTheSides);
getHairCut(true, true);

/*
4)
*/
void setMakeUpGain(int compressionRatio, int gainReductionNeedle);
setMakeUpGain(4, 2);

/*
5)
*/
void getHeight(int foot, int inches);
getHeight(6, 4);

/*
6)
*/
void cPlusPlus(bool takingCourses);
cPlusPlus(true);

/*
7)
*/
void phoneSize(float width, float height);
phoneSize(4.68f, 3.88f)

/*
8)
*/
void recordingVocals(bool dynamicMic, int vocalLevel);
recordingVocals(false, -15);

/*
9)
*/
void micDimensions(float weightOfMic, bool isSmall);
micDimensions(326.f, false);

/*
10)
*/
void chair(bool isBlack, int howManyArms);
chair(yes, 2);
