//data structure are used to store and organise a data array is example of data structure where which allow multiple 
//elements to be stored in a single variable
//stl is standard template library 	it consiste diff and algorithams to effectivaly store and manupulate data

//data structure 

//vector stores element like array but can change dynamically adding removeing done at end .each element can be acce by index
//list store elemnt sequentially,where each elemnt is connected to the next adding reoming can done at bth end,index not use 
//stack elemet store specific order called lifo remove and add done at top not accessible by index
//queue stores element specific order add at end remove from frount fifo
// double ended queue add and remove from both end
//set  - not accessible index set unique element 
//map - Stores element in key/value pairs. accessible by keys (not by Index).


//vector resizable array chnage size of array

//#include <iostream>
//using namespace std;
//
//int main() {
//	int row,col;
//	
//	cin>>row>>col;
//	
//	for(int i =1;i<=row;i++){
//		for(int j=1;j<=col;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int row,col;
//	cin>>row>>col;
//	
//	for(int i=1;i<=row;i++){
//		for(int j=1;j<=col;j++){
//			if(i==1 || i==row || j==1 || j==col){
//				cout<<"*";
//			}
//			else {
//				cout<<" ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main () {
//	cin>> n;
//	
//	for (int i=n; i>=1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	
//	for(int i =1;i<=n;i++){
//		for(int j =1;j<=n;j++){
//			if(j<=n-i){
//				cout<< " ";
//			}
//			else{
//				cout<<"*";
//			}
//			
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		int space = 2*n - 2*i;
//		for(int j=1;j<=space;j++){
//			cout<<" ";
//		}
//		for(int j=1;j<=space;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	for(int i=n;i>1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		int space = 2*n - 2*i;
//		for(int j=1;j<=space;j++){
//			cout<<" ";
//		}
//		for(int j=1;j<=space;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}
