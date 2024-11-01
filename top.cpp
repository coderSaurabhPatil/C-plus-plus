//case sensentive lanuvage
//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}


//variable is container to store data value can be change start _ or atob

//data type whitch type of variable 
//int = 4 byte  8 bit = 1 byte
//sizeof() return size of variable in byte
//char = 1byte
//float =4byte
//boodoule = 8byte is all primitive data tyoe 

//tyoe casting //
//two type implicite casting explicite

//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int age = 25;
//	char grade = 'a';
//	float PI = 3.14f;
//	bool isSafe = true;
//	int value = grade; //implicite conversion type covesion
//	
//	//type casting convert data
//	double price = 100.99;
//	int newPrice = (int)price; //explicite type conversion
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}

//input in C++

//#include <iostream>
//using namespace std;
//
//int main() {
//	int age;
//	cout << "enter the age:";
//	cin>>age;
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}

//operator 

//arithamatic operator 
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a =5,b=10;
//	int sum = a + b;
//	cout <<sum<<endl;
//	cout << (5/(double)2)<<endl; //type casting
//	return 0;
//}

//relational operator 

//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	cout << "saurabh patil" <<endl;
//	cout <<(3 < 5) << endl;//return boolen value 
//	return 0;
//}

//logical 

//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	cout << "saurabh patil" <<endl;
//	
//cout << !(3<5);
//	return 0;
//}

//unary operator  and binary operator 
//

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 10;
//	int c = 20;
//	
//	int b = a++; //post increnet
//	int d =++c;  //pre increment
//	
//	cout <<a <<endl<<b<<endl<<c<<endl<<d<<endl;
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}


//.................................conditional sataemnt 

//if else 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int n = 4;
//	
//	
//	if ( n > 0 )
//	{
//		cout << "pos";
//	} else {
//		cout << "nagaticve";
//	}
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}

//odd or evan no 

//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	
//	cout << "enter no ";
//	cin >> n;
//	
//	if (n%2 == 0) {
//		cout << "enter number is even";
//	} else{
//		cout<< " enter no is odd no ";
//	}
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	char ch;
//	cout << "enter characteristic:";
//	cin >> ch;
//	
//	if (ch >= 68 && ch <=98){
//		cout << "uppercase\n";
//	}else{
//		cout << "lowercase\n";
//	}
//
//	return 0;
//}

//Ternary statement 
//condition?sta1:sta2;

//while


//nated loops pattern

//sqare pater

//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int n ;
//	cin>> n;
//	
//	for (int i =1;i<=n;i++){
//		for(int j =1;j<=n;j++)
//		{
//			cout << j ;
//		}
//		cout << endl;
//	}
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	int n ;
//	cin>> n;
//	
//	for (int i =1;i<=n;i++){
//		char ch = 'A';
//		for(int j =1;j<=n;j++)
//		{
//			cout << ch ;
//			ch = ch + 1;
//		}
//		cout << endl;
//	}
//	
//	cout << "saurabh patil" <<endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n =4;
//    
//    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//        // Inner loop for columns
//        for (int j = 0; j < n; j++) {
//            cout << num << " ";  // Print the current number
//            num++;  // Increment the number
//        }
//        cout << endl;  // Move to the next line after each row
//    }
//
//      // Print your name after the grid
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
////    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//        // Inner loop for columns
//        for (int j = 0; j < i+1; j++) {
//            cout << "*" << " ";  // Print the current number
////            num++;  // Increment the number
//        }
//        cout << endl;  // Move to the next line after each row
//    }
//
//    cout << "saurabh patil" << endl;  // Print your name after the grid
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
////    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//        // Inner loop for columns
//        for (int j = 0; j < i+1; j++) {
//            cout << i+1 << " ";  // Print the current number
////            num++;  // Increment the number
//        }
//        cout << endl;  // Move to the next line after each row
//    }
//
//    cout << "saurabh patil" << endl;  // Print your name after the grid
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//        // Inner loop for columns
//        for (int j = 0; j < i+1; j++) {
//            cout << j+1 << " ";  // Print the current number
////            num++;  // Increment the number
//        }
//        cout << endl;  // Move to the next line after each row
//    }
//
//    cout << "saurabh patil" << endl;  // Print your name after the grid
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//        // Inner loop for columns
//        for (int j = i+1; j > 0; j--) {
//            cout << j << " ";  // Print the current number
////            num++;  // Increment the number
//        }
//        cout << endl;  // Move to the next line after each row
//    }
//
//    cout << "saurabh patil" << endl;  // Print your name after the grid
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//    	
//    	//space : n-i-1
//    	for(int j=0;j<n-i-1;j++){
//    		cout << " ";
//		}
//		
//		//nuns i+1
//		for(int j=1;j<=i+1;j++){
//			cout<< j;
//		}
//		
//		//num 2
//		for(int j=i;j>0;j--){
//			cout << j;
//		}
//		
//		cout << endl;
//		
//		
//	}
//        
//
//     return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int num = 1;
//
//    // Outer loop for rows
//    for (int i = 0; i < n; i++) {
//    	
//    	//space : n-i-1
//    	for(int j=0;j<n-i-1;i++){
//    		cout << " ";
//		}
//		
//		//nuns i+1
//		for(int j=1;j<=i+1;j++){
//			cout<< j;
//		}
//		
//		//num 2
//		for(int j=i;j>0;j--){
//			cout << j;
//		}
//		
//		
//	}
//        
//
//     return 0;
//}

//functon 

//list

//#include <iostream>
//using namespace std;
//
//class node{
//	public:
//		int data;
//		node* next;
//		
//		node(int val){
//			data=val;
//			next=NULL;
//		}
//};
//void insertAtTail(node* &head, int val){
//	node* n = new node(val);
//	
//	if(head== NULL){
//		head=n;
//		return ;
//		
//	}
//		node* temp = head;
//	while(temp->next!=NULL){
//		temp=temp->next;
//	}
//	temp->next=n;
//}
//
//void display (node* head){
//	node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<" ";
//		temp=temp->next;
//	}
//	cout<<endl;
//}
//
//int main() {
//	
//	node* head=NULL;
//	insertAtTail(head,1);
//	insertAtTail(head,2);
//	insertAtTail(head,3);
//	display(head);
//	
//	
//	return 0;
//}


//reverse linked list 


//linked list
//
//#include <iostream>
//using namespace std;
//
//class node{
//	public:
//		int data;
//		node* next;
//		
//		node(int val){
//			data=val;
//			next=NULL;
//		}
//};
//
//void insertAtTail(node* &head, int val ){
//	node* n = new node(val);
//	
//	if(head==NULL){
//		head =n;
//		return;
//	}
//	
//	node* temp=head;
//	while(temp->next!=NULL){
//		temp = temp->next;
//	}
//	temp->next=n;
//	
//}
//
//void display(node* head){
//	node* temp = head;
//	while(temp!=NULL){
//		cout<<temp->data << " ";
//		temp=temp->next;
//	}
//	cout<<endl;
//}
//
//int main(){
//	
//	node* head=NULL;
//	insertAtTail(head,1);
//	insertAtTail(head,2);
//	insertAtTail(head,3);
//	display(head);
//	
//}
////..................//////////////////////..........................
//
//#include <iostream>
//using namespace std;
//
//class node{
//	public:
//		int data;
//		node* next;
//		
//		node(int val){
//			data=val;
//			next=NULL;
//		}
//};
//
//void insertAtTail(node* &head,int val){
//	node* n = new node(val);
//	
//	if(head==NULL){
//		head=n;
//		return;
//	}
//	
//	node* temp=head;
//	while(temp->next!=NULL){
//		
//		temp=temp->next;
//}
//temp->next=n;
//}
//
//void display(node* head){
//	node* temp = head;
//	
//	while(	temp!=NULL){
//		cout<<temp->data<<"->";
//		temp=temp->next;
//	}
//	cout<<endl;
//}
//
//void insertAtHead(node* &head,int val){
//	node* n = new node(val); //Creat a new node 
//	n->next = head;//point the new nodes next to the current head
//	head = n;//update head to point to the new node
//	
//}
//
//bool search(node* head,int key){
//	
//	node* temp = head;
//	while(temp!=NULL){
//		if(temp->data==key){
//			return true;
//		}
//		temp=temp->next;
//	}
//	return false;
//}
//
//void sdelete(node* &head,int val){
//	if(head == NULL) return; //if the list is empty do nothing
//	
//	//if the node to be deleted is the head
//	if(head->data==val){
//		node* toDelete = head; //keep track of the node to delete
//		head = head->next;
//		delete toDelete;
//		return;
//	}
//	
//    node* temp=head;
//    while(temp->next->data!=val){
//    	temp=temp->next;
//	}
//	node* toDelete = temp->next;
//	temp->next=temp->next->next;
//	
//	delete toDelete;
//	
//}
//
//void reverseList(node* &head){
//	node* prev = NULL;
//	node* current = head;
//	node* nextNode = NULL;
//	
//	while(current!= NULL){
//		nextNode = current->next;
//		current->next = prev;
//		prev = current;
//		current =nextNode;
//	}
//	head=prev;
//}
//int main() {
//	node* head=NULL;
//	insertAtTail(head,1);
//	insertAtTail(head,2);
//	insertAtTail(head,3);
//		insertAtHead(head,4);
//		sdelete(head,2);
//	display(head);
//	cout<<search(head,1);
//	 reverseList(head); // Reverse the linked list
//
//    cout << "\nReversed List:" << endl;
//    display(head);
//
//	
//	return 0;
//	
//}
//


//doubali linkd list
//
//#include <iostream>
//using namespace std;
//
//class Node {
//	public:
//		int data;
//		Node* next;
//		Node* prev;
//		
//		Node(int val) {
//			data = val;
//			next = NULL;
//			prev = NULL;
//		}
//};
//
//class DoublyLinkedList{
//	Node* head;  //Head of the list
//	
//	DoublyLinkedList {
//		public:
//			Node* head; //Head of the list define 
//			
//			DoublyLinkedList() {
//				head = NULL;
//			}
//			
//			void insertAtHead(int val) {
//				Node* newNode = new Node(val);
//				if(head == NULL){
//					head = newNode; //if list is empty,new node becomes head
//				}
//				else{
//					
//					newNode->next=head;
//					head->prev = newNode;
//					head = newNode; //update head to new node
//					
//				}
//			}
//			//
//			void insertAtTail(int val) {
//				Node* newNode = new Node(val);
//				if(head == NULL){
//					head = newNode; //if list is empty,new node becames head
//				}else{
//					Node* temp = head;
//					while(temp->next != NULL){
//						temp = temp->next; //traverse to the last node
//					}
//					temp->next =newNode;
//					newNode->prev =temp;
//				}
//				
//			}
//			
//			//function to insert a node after a given a given node 
//			
//			void insertAfter(Node* prevNode, int val) {
//				if(prevNode == NULL) {
//					cout<< "the given privious node cannot be null."<< endl;
//					return 0;
//				}
//				
//				Node* newNode = new Node(val);
//				newNode->next = prevNode->next;
//			}
//	
//	}
//};




