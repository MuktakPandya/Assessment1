//Multilevel Inheritence

#include<iostream>
using namespace std;
	class Menu{
	public:
		
//		int new_choice;
		void set(){
			cout<<"==========FOOD SYSTEM ==============="<<endl;
			cout<<"1.Pizza             price=180rs/pc"<<endl;
			cout<<"2.Burger             price=100rs/pc"<<endl;
			cout<<"3.Dosa             price=120rs/pc"<<endl;
			cout<<"4.Idli             price=50rs/pc"<<endl;
			cout<<""<<endl;
		}
};
class Order: public Menu{
	public:
		int choice, quantity;
		void set1(){
			
				cout<<"Enter your choice: "<<endl;
				cin>>choice;
				cout<<""<<endl;
				cout<<"Enter Quantity: "<<endl;
				cin>>quantity;	
				cout<<""<<endl;			
	}
};
class Bill: public Order{
	public:
		int total;
		void set2(){
			if(choice==1){
				cout<<"You have selected Pizza"<<endl;
				cout<<"Amount = 180rs/pc"<<endl;
				total= 180*quantity;
				cout<<"Total is: "<<total<<endl;
			}
			else if(choice==2){
				cout<<"You have selected Burger"<<endl;
				cout<<"Amount = 100rs/pc"<<endl;
				total=100*quantity;
				cout<<"Total is: "<<total<<endl;
			}
			else if(choice==3){
				cout<<"You have selected Dosa"<<endl;
				cout<<"Amount = 120rs/pc"<<endl;
				total=120*quantity;
				cout<<"Total is: "<<total<<endl;
			}
			else if(choice==4){
				cout<<"You have selected Idli"<<endl;
				cout<<"Amount = 50rs/pc"<<endl;
				total=50*quantity;
				cout<<"Total is: "<<total<<endl;
			}
		}
	
};		
	int main(){
	
		Bill b1;
		int new_choice;
		do{
			{
	     	b1.set();
		    b1.set1();
		    b1.set2();
		    cout<<""<<endl;
		    cout<<"Do you want to continue(Press 1 for Yes and 2 for No): \n";
			cin>>new_choice;
			}
		}
		while(new_choice==1);
		cout<<"\nThank You";
	}		
