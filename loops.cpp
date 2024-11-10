#include <iostream>

int main() {
    int choice;

    do{
        std::cout << "\n---loop Demonstrate Program----" << std::endl;
        std::cout <<"1. for Loop" << std::endl;
        std::cout << "Enter your choise:";
        std::cin >> choice;

        switch (choice){
            case 1: {
                std::cout << "\nFor loop Example :"<<std::endl;
                for(int i = 1; i<=5;i++){
                    std::cout << "i ="<<i<<std::endl;

                }
                break;
            }
            case 2 : {
                std::cout << "\nwhile loop example:"<< std::endl;
                int i = 1;
                while(i <=5){
                    std::cout << "i=" <<i <<std::endl;
                    i++;
                }
                break;
            }
            case 3: {
                std::cout << "\nDo-While Loop Examle:" << std::endl;
                int i = 1;
                do {
                    std::cout <<"i="<<i<<std::endl;
                } while (i <=5);
                break;
            }
            case 4 : {
                std::cout <<"\nNested loop Example(multipe table):" << std::endl;
                for(int i = 1; i<=3;i++){
                    for(int j=1;j<=3; j++){
                        std::cout <<i <<" *" <<j << "=" << i* j <<std::endl;
                    }
                    std::cout << "----"<<std::endl;
                }
                break;
            }
            case 5:{
                std::cout <<"\nBreak and Continue Example" <<std::endl;
                for(int i = 0; i< 5;i++){
                    if(i==2){
                        std::cout <<"Skipping i =2 using continue" <<std::endl;
                        continue;
                    }
                    if(i==4){
                        std::cout<<"Break loop at i =4"<<std::endl;
                        break;
                    }
                    std::cout << "i="<<i <<std::endl;
                }
                break;
            }
            case 6:{
                std::cout << "\nExiting the program."<<std::endl;
                break;
            }
            default: {
                std::cout<<"\nInvalid choice please try again."<<std::endl;
                break;            }

        }
    }while (choice != 6);
    return 0;
   
    
}