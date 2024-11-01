//reference variable is a reference to an existing  variable, and it is created with the & operator

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	string food = "pizza";
//	string &meal = food;
//	
//	cout << food << "\n";
//	cout << meal << "\n";
//}

//memory address is also can get by & simbol is important to manupalate data in computer memory 
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	string food = "pizza";
//	cout << &food;
//	return 0;
//}

//pointer stores address of referce 
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	string food = "pizza"; //a string variable
//	string* ptr = &food; //a pointer variable stores the address of food
//	
//	cout << food << "\n";
//	cout << &food << "\n";
//	cout << ptr << "\n";
//}

//you can also use to get pointer to get value of the variable by using * OPERATOR

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main () {
//	string food = "pizza"; //variable decalaration
//	string* ptr = &food;
//	
//	//reference the memory address of food with the pointer
//	cout << ptr << "\n";
//	
//	//dereference output the value of food with the pointer
//	cout << *ptr << "\n";
//	return 0;
//}

//you can also change the pointer value but this will also change the value of the original variable
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string food = "pizza";
//	string* ptr = &food;
//	
//	//out put of value of food 
//	cout << food << "\n";
//	
//	//output of memory of address of food
//	cout << &food << "\n";
//	
//	//Access the memory address of food and output its value
//	cout << *ptr << "\n";
//	
//	//change the value of the pointer 
//	*ptr = "vadapav";
//	
//	//output new value of pointer 
//	
//	cout << *ptr << "\n";
//	
//	//output of new value of variable food 
//	cout << food << "\n";
//	
//	return 0;
//}

//function is used to perform certain action and they used reusing code 

//#include <iostream>
//using namespace std;
//
//void myFunction() {//return type and declaration of function 
//	cout << "i just executed!\n";//defination of function
//}
//
//int main() {
//	myFunction();
//	return 0;
//}

//information can be passed to function as parameter.parameter act as varible inside the function 

//#include <iostream>
//#include <string>
//using namespace std;
//
//void myFunction(string fname){
//	cout << fname << "Refsnes\n";
//}
//
//int main () {
//	myFunction("saurabh");
//}

//default parameter 

//#include <iostream>
//#include <string>
//using namespace std;
//
//void myFunction ( string name,string fname="patil"){
//	
//	cout << name <<fname <<"\n";
//}
//
//int main () {
//	myFunction ("saurabh","chavan");
//	myFunction ("saurabh");
//	return 0;
//}

//Multiple parameter 

//inside the function , you can add multiple parameter

//#include <iostream>
//#include <string>
//using namespace std;
//
//void myFunction(string fname,int age){
//	cout << fname << " " << age <<" " << "years old \n";
//}
//
//int main() {
//	myFunction("saurabh",26);
//	myFunction("siddhesh",28);
//	return 0;
//}

//return value the the void word used in the privious examle ,indicate that functon not return value .if you return value then
//you can use return value data type such as return value int ,string etc. insted of write void and use return 0

//#include <iostream>
//#include <string>
//using namespace std;
//
//int myFunction (int x, int y) {
//	return x +y;
//}
//
//int main() {
//	cout << myFunction(5,3);
//	return 0;
//}

//pass by value 

//we can send also refernce as parameter for change value of the argument 

//#include <iostream>
//using namespace std;
//
//void swapNums(int &x,int &y) {
//	int z = x;
//	x= y;
//	y = z;
//}
//
//int main() {
//	int firstNum = 10;
//	int secondNum = 20;
//	
//	cout<< "Before swap:"<< "\n";
//	cout <<firstNum<<secondNum<< "\n";
//	
//	swapNums(firstNum,secondNum);
//	
//	cout << "After swap:" << "\n";
//	cout <<firstNum<<secondNum;
//	
//		
//}

//#include <iostream>
//using namespace std;
//
//void myFunction(int myNumbers[5]) {
//	 for(int i=0;i<5;i++){
//	 	cout<<myNumbers[i]<<"\n";
//	 }
//}
//
//int main() {
//	int myNumber[5] = {10,20,30,40,50};
//	myFunction(myNumber);
//	return 0;
//}

//function overloading,multipe functions can have the same name with different parameters

//multiple function have the same name as long as the number and /or type of parameter are differnt 
//
//#include <iostream>
//using namespace std;
//
//int plusFunction(int x,int y) {
//	return x + y;
//}
//
//double plusFunction(double x,double y){
//	return x + y;
//}
//
//int main () {
//	int myNum1 = plusFunction(8,5);
//	double myNum2 = plusFunction(4.3,6.26);
//	cout << "int:" << myNum1 << "\n";
//	cout << "double:" << myNum2 << "\n";
//	return 0;
//}

//scope of variable inside and outside of function 

//local scope variable are created in function 
//global scope avible golbali

//#include <iostream>
//using namespace std;
//
////global variable x
//int x = 5;
//
//void myFunction() {
//	//we can use x here 
//	cout << x ;
//	
//	//local not here 
//	// cout<<y;
//}
//
//int main () {
//	myFunction();
//	
//	//local
//	double y = 1.2;
//	cout << y ;
//	
//	//global function here also
//	cout << x;
//}

//recursion
//recursion is technique of making call itself.this technique provide  a way to break complicsted problems down into simple problem
//down into simple problem whitch are easier to solve

//#include <iostream>
//using namespace std;
//
//int sum(int k){
//	if(k>0){
//		return k + sum(k-1);
//	}else{
//		return 0;
//	}
//}
//
//int main(){
//	int result = sum(10);
//	cout << result;
//	return 0;
//}

//ops stands for Object-oriented Programming 
//advantages 
//faster and easier to execute
//oop provides a clear structure of program
//ops help create code as reusable 
//easier to maintain
//class and object are two main aspects of object-oriented programming 
//class is template for object and an object is an instance of class 

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Car {
//	public:  //public specifier
//	string brand;
//	string model;
//	int year;
//};
//
//int main() {
//	Car carobject1;
//	carobject1.brand ="bmw";
//	carobject1.model ="x4";
//	carobject1.year = 1999;
//	
//	cout << carobject1.brand <<"...";
//	return 0;
//	
//	
//	
//}

//method
//method are function that belongs to the class

//there are two ways of define function that belongs to function 
//inside class defination 
//outside class defination

//#include <iostream>
//using namespace std;
//
//class Myclass {
//	public:
//		void myMethod(); //method/function declaration 
//		
//		void method() {
//			cout << "inside ";
//		}
//};
//
////method /function are 	outside of the class
//
//void Myclass::myMethod() {
//	cout << "outside defination ";
//}
//
//int main () {
//	Myclass ob;
//	ob.myMethod();
//	ob.method();
//	return 0;
//}

//constructer
//A constructor in C++ is a spacial method that is automatically called when an object of a class is created
//constructer has same name as class , it is always public ,it does not have any return value
//constructer can also take parameter just like regular function whitch can be useful for setting initial values for attributes
//just like function ,constructer can also be defined outside the class first define and the declare 

//#include <iostream>
//using namespace std;
//
//class Car {
//	public:        //Access specifier
//		string brand;
//		string model;
//		int year;
//		Car(string x,string y, int z) { //constructer with parameter
//		
//		brand = x;
//		model = y;
//		year = z;
//			
//		}
//		
//};
//
//int main() {
//	//CREATE CAR OBJECT AND CALL CONSTRUCTER WITH DIFF VALUES
//	
//	Car ob("a","x",1999);
//	
//	//PRINT VALUE
//	cout <<  ob.brand;
//	return 0;
//}

//access specifier 
//how the members of class can be asseced and modified from outside 
//public - members are accessible from outside the class
//private - members cannot be accessed from outside the class
//protected	- members cannot be accessed from outside of the class,however they can be accessed in inherited class

//#include <iostream>
//using namespace std;
//
//class MyClass {
//	public:  //Public access specifier
//	int x;  //Public attribute
//	private: //private access specifier
//	int y;
//};
//
//int main() {
//	MyClass myObj;
//	myObj.x = 25;  //Allowed(x ispublic)
////	myObj.y = 50;  //Not allowed(y is private)
//	return 0;
//}

//By default , all members of a class are private if you dont specify an access specifier

//Encapsulation 
//the meaning of Encapsulation,is to make sure that "sensitive" data is hidden from users. to achive this, you must
//declare class variable and attribute as private (can not be assessed from outside of the class).if you want
//other to read or modify the value of a private member ,you can provide public get and set methids

//to access a private attribute ,use public "get" and "set" method:
//
//#include <iostream>
//using namespace std;
//
//class Employee {
//	private:
//		//private attribute
//		int salary;
//		
//		public:
//			void setSalary(int s) {
//				salary = s;
//			}
//			
//			int getSalary() {
//				return salary;
//			}
//};
//
//int main() {
//	Employee myObj;
//	
//	myObj.setSalary(700000);
//   cout<<	myObj.getSalary() << " here get salary called \n";
//   return 0;
//}

//inheritance in c++ it is possible to inheriate attributes and methods from one class to another.we group the "inheitance concept in two
//two categaries

//derived class and base class 
//to inherit from a class use the : symbol

//inheritance used for code reusability like methods of existing class 

//#include <iostream>
//#include <string>
//using namespace std;
//
////Base class
//
//class Vehicale {
//	public:
//		string brand = "ford";
//		void hock() {
//			cout << "tuut,tuut! \n";
//		}
//};
//
////Derived class
//class Car: public Vehicale {
//	public:
//	string model = "Mustang";
//};
//
//int main() {
//	Car myCar;
//	myCar.hock();
//	cout<< myCar.brand + " " + myCar.model;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////Parent class
//class MyClass {
//	public:
//		void myFunction() {
//			cout << "some content from parent class";
//		}
//};
//
////child class
//class MyChild: public MyClass {
//	
//};
//
////Grandchild class
//
//class MyGrandchild: public MyChild {
//	
//};
//
//int main() {
//	MyGrandchild myObj;
//	myObj.myFunction();
//	return 0;
//}


//multiple inheritance 
//a class can also be derived from more than one base class, using a comma-separated list:	

//#include <iostream>
//using namespace std;
//
//
////Base class
//class myClass {
//	public:
//		void mF(){
//			cout << "class 1\n";
//		}
//};
//
////other base class
//
//class myOther {
//	public:
//		void mFo() {
//			cout << "class 2";
//		}
//};
//
//class child : public myClass,public myOther {
//	
//};
//
//int main() {
//	child myobj;
//	myobj.mF();
//	myobj.mFo();
//}

//access specifier 
//protected is similar to private but it can also be acced in inheritance 

//#include <iostream>
//using namespace std;
//
////base class
//class Emp {
//	protected :
//		int salary;
//		
//};
//
//
////derived class
//
//class Pro : public Emp {
//	public:
//		int bonus;
//		void setSalary(int s) {
//			salary = s;
//			
//		}
//		int getSalary(){
//			return salary;
//		}
//};
//
//int main() {
//	Pro myObj;
//	myObj.setSalary(500000);
//	myObj.bonus = 150000;	
//	cout << myObj.getSalary() <<"\n";
//	cout << myObj.bonus ;
//	return 0;
//}

//bolymorphism 

//polymorphism means "many forms", and it occurs when we have many classes that are related to each other by
//inheritance- inheritance lets us inherit attributes and methods from another  class.polymorphism uses thi methods 
//to perform this task. this allow us to perform asingle action indiffernt ways .

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Base class
//class Animal {
//  public:
//    void animalSound() {
//      cout << "The animal makes a sound \n";
//    }
//};
//
//// Derived class
//class Pig : public Animal {
//  public:
//    void animalSound() {
//      cout << "The pig says: wee wee \n";
//    }
//};
//
//// Derived class
//class Dog : public Animal {
//  public:
//    void animalSound() {
//      cout << "The dog says: bow wow \n";
//    }
//};
//
//int main() {
//  Animal myAnimal;
//  Pig myPig;
//  Dog myDog;
//
//  myAnimal.animalSound();
//  myPig.animalSound();
//  myDog.animalSound();
//  return 0;
//}


