//#include<iostream>
//using namespace std;
//
//int main() {
//    cout << "Hello, World!" << endl;
//    return 0;
//}


//c++ is high performace languvage that create for high performace appliction 
//created by Bjarane stroustrap

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int myage = 26;
//	cout << "i am saurabh " << myage << "age old.";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int x = 5, y = 6, z=50;
//	cout << x+y+z;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main () {
//	const int minutesPerHour = 60;
//	const float PI = 3.14;
//	cout << minutesPerHour <<"\n";
//	cout <<PI;
//	return 0;
//}


//cin 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int x ;
//	cout << "type a number :";
//	cin >> x;
//	cout << "your number is :" << x;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	//creating variable 
//	
//	int myNum = 5;
//	float myFloatNum = 1.9;
//	double myDoubleNum = 1.99;
//	char myLatter = 'a';
//	bool myBollean = true;
//	string myString = "saurabh";
//	
//	//print variable values 
//	cout << "int:" << myNum << "\n";
//	cout <<" myFloarNum" << myFloatNum << "\n";
//	cout << "myLatter:" << myLatter << "\n";
//	cout << "myBollean:" << myBollean << "\n";
//	cout << "myString:" << myString << "\n";
//	
//	return 0;
//	
//}


//string 

//concatination 

//a string is a an object is whitch contain function that can perform certain operation on string 

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main () {
//	string firstName = "saurabh";
//	string lastName = "patil";
//	string fullName = firstName + " " + lastName;
//	cout << fullName;
//	return 0;
//	
//}

//append

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	string fName = " saurabh ";
//	string lName = " patil";
//	string lfName = fName.append(lName);
//	cout << lfName ;
//	return 0;
//	
//}

//length of string 

// both same length and size wit ()

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	
//	string txt = "saurabh patil";
//	cout << "the length of the txt string is " << txt.length();
//	return 0;
//	
//}



//you can access string character by give index to it also use at 

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main () {
//	string myString = "abc";
//	cout << "first character" << myString.at(1)<< "\n";
//	return 0;
//	
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string fullName;
//	cout << "Type your full name";
//	getline (cin,fullName);
//	cout << "your name is :"<< fullName;
//	return 0;
//}


//math 

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main () {
//	cout << "Square root of 64 is:" <<sqrt(64) << "\n";
//	cout << "Round 2.6 is " << round(2.6) << "\n";
//	cout << "the natural logaritham of 2 is :"<< log(2) << "\n";
//	return 0;
//	
//}


//conditions 

//if 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int x = 20;
//	int y = 18;
//	if (x>y) {
//		cout << "x is grater than y";
//		return 0;
//		
//	}
//}

//else statement 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int time = 20;
//	if(time < 18) {
//		cout << "good day.";
//		
//	} else {
//		cout << "good evening.";
//	}
//	return 0;
//}


//short hand if__else ternary__operator

//variable = (condition) ? extrue : exfalse;

//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	int time = 20;
//	string result = (time<18)? "Good day." : "Good evening.";
//	cout << result;
//	return 0;
//}
//


//switch case

//#include <iostream>
//using namespace	std;
//
//int main() {
//	int day = 4;
//	switch (day) {
//		case 6:
//			cout <<"today is satarday";
//			case 7:
//				cout << "today is sunday";
//				
//				default:
//					cout << "Looking forward to the Weekend";
//	}
//	return 0;
//}
//

//while loop run until condition  is truee 

//#include <iostream>
//using namespace std;
//
//int main () {
//	int i=0;
//	while (	i<5){
//		cout << i <<"\n";
//		i++;
//	}
//	return 0;
//	
//}

//do wille loop is varient of while loop and excute once before checking the condition is true 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int i = 0;
//	
//	do {
//		cout << i << "\n";
//		i++;
//	}
//	while (i<5);
//	return 0;
//		
//	
//}

//when you know exactly how many times you want to loop through a blook of code , use the for loopinsted of a while loop

//#include <iostream>
//using namespace std;
//
//int main () {
//	
//	for (int i = 0; i <= 10;i =i+2){
//		cout <<i<<"\n";
//	}
//	return 0;
//	
//}

//nasted loop 


//#include <iostream>
//using namespace std;
//
//int main() {
//	//outter loop
//	for (int i =1;i<=2;++i) { 
//		cout << "outer:" << i << "\n ................................"; //excute 2 times 
//		
//		//inner loop
//		for (int j =1;j<=3;++j){
//			cout << "inner:" << j << "\n"; //excute each for outer time three times 
//			
//		}
//	}
//	return 0;
//	
//}
//

//the for each loop//#include <iostream>
//using namespace std;
//
//int main() {
//  // Create an array of integers
//  int myNumbers[5] = {10, 20, 30, 40, 50};
//  
//  // Loop through integers
//  for (int i : myNumbers) {
//    cout << i << "\n";
//  }
//  return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main () {
//	//example with break
//	
//	cout<< "Example of break:\n";
//	for (int i = 1;i<=10;i++){
//		if(i == 5) {
//			cout <<  "Breaking the loop at i =" << i << "\n";
//			break; //break the loop when i =5
//		}
//		cout <<i << "";
//	}
//	
//	cout << "\nExample continue:\n";
//	//example with continue
//	for (int i = 1; i<=10;i++){
//		if(i == 5) {
//			cout << "Skipping i=" <<i<< "\n";
//			continue;
//		}
//		cout <<i<< "";
//	}
//	
//	return 0;
//	
//}


//arays are used to strore multiple values in single variablex insted of declaring separate variable for each variable 
//
//#include <iostream>
//using namespace std;
//
//
//int main (){
//	string cars[5] = {"a","b","c","d","e"};
//	for(int i=0;i< 5;i++){
//		cout << cars[i] << "\n";
//		
//		
//	}
//	
//	cars[0] = "aa";
//	cout << cars[0] << "\n";
//	
//		for(int i=0;i< 5;i++){
//		cout << cars[i] << "\n";
//		
//		
//	}
//	return 0;
//
//}

//for ech loop

//#include <iostream>
//using namespace std;
//
//
//
//int main() {
//	//loop through integers
//	string myName[5] = {"a","b","c","d","e"};
//for (string i : myName){
//	cout << i << "\n";
//	
//}
//return 0;
//}



//vector dynamic array

//#include <iostream>
//#include <vector> //Including the vector liberary
//using namespace std;
//
//int main() {
//	// A vector with 3 elements
//	vector<string> cars = {"volvo","BMW","ford"};
//	
//	cars.push_back("tesla");
//	
//	for ( string car : cars) {
//		cout << car << "\n";
//	}
//	return 0;
//}

// size of operator return the size of type in bytes

//#include <iostream>
//using namespace std;
//
//
//	int main () {
//		int myNumber[5] = {1,2,3,4,5};
//		for (int i = 0; i <sizeof(myNumber)/sizeof(int);i++) {
//			cout << myNumber[i] << "\n";
//		}
//		return 0;
//	}
//

//multidimentional array is array of array 

//#include <iostream>
//using namespace std;
//
//int main() {
//	string letters[2][4] = {
//	{"a","b","c","d"
//	},{
//	"e","f","g","h"};
//	
//	cout << letters[0][2];
//	return 0;
//}

//lopp throug three dimensional array 

//#include <iostream>
//using namespace std;
//
//int main() {
//	string letters[2][2][2] = {
//	{
//		{"a","b"
//		},
//		{"c","d"
//		}
//	},
//	{
//		{"e","f"
//		},
//		{"g","h"
//		}
//	}
//};
//for (int i =0; i<2;i++){
//	for(int j = 0; j<2;j++){
//		for(int k = 0; k<2;k++){
//			cout << letters[i][j][k] << "\n";		
//		}
//	}
//}

//return 0;
//
//}


//multidimenstional array simple game 

//#include <iostream>
//using namespace std;
//
//int main() {
//	//we put "1" to indicate there is a ship
//	bool ships[4][4] = {
//	{0,1,1,0
//	},
//	{0,0,0,0
//	},
//	{0,0,1,0
//	},{0,0,1,0
//	}};
//	
//	//keep trck of how many hits the player has and how many turns they have played in these variable 
//	int hits = 0;
//	int numberOfTurns = 0;
//	
//	//allow the player to keep going untill they have hit all four ships 
//	while(hits < 4){
//		int row,column;
//		cout << "Selecting coordinates\n";
//		
//		//ask the player for a row 
//		cout << "Choose a row number between 0 and 3 :";
//		cin >>row;
//		
//		//ask the player for a column
//		cout << "choose a column number between 0 and 3 :";
//		cin >> column;
//		
//		//check if a ship exists in those coordinates
//		if(ships[row][column]) {
//			//if the plyer hit a ship,remove it by setting the value to zero.
//			ships[row][column] = 0;
//			//increse the hit counter
//			hits++;
//			
//			//Tell the player that they have hit a ship and how many ships are left 
//			
//			cout << "Hit!" << (4-hits) << "left.\n\n";
//		}else {
//			//tell the player that they missed
//			cout << "miss\n\n";
//		}
//		
//		//Count how many turncs the player has taken 
//		numberOfTurns++;
//	}
//	
//	cout << "Victory!\n";
//	cout <<"you won in " <<numberOfTurns <<"turns";
//	
//	return 0;
//}

//structures also caleed struct are a way to group several related variable into one place .each variable in the struture is known as a member of the structure 
//unlike a array struct containt many diff datatypes 

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//  struct {
//    int myNum;
//    string myString;
//  } myStructure;
//
//  myStructure.myNum = 1;
//  myStructure.myString = "Hello World!";
//
//  cout << myStructure.myNum << "\n";
//  cout << myStructure.myString << "\n";
//  return 0;
//}




//enum is spaial type of the representaion where unchangeble values t create enum use enum key word

//#include <iostream>
//using namespace std;
// 
//enum Level {
//  LOW = 25,
//  MEDIUM = 50,
//  HIGH = 75
//}; 
//
//int main() {
//  enum Level myVar = MEDIUM;
//  cout << myVar;
//  return 0;
//}



