#include<iostream>
#include<string.h>
#include<fstream>
#include"cost.h"

using namespace std;
class menu_main
{
	
	void calc()
	{
		total=cmomo+cchaumin+cburger;	
	}
	void momo()
	{
		cout<< "please Enter the quantity you want to order:";
		cin>> qmomo;
		cmomo=pmomo*qmomo;
	}
	void chaumin()
	{
		cout<< "please Enter the quantity you want to order:";
		cin>> qchaumin;
		cchaumin=pchaumin*qchaumin;
	}
	void burger()
	{
		cout<< "please Enter the quantity you want to order:";
		cin>> pburger;
		cburger=pburger*pburger;
	}
	void reorder()
	{
		qmomo=0, qchaumin=0, qburger=0;
		cmomo=0, cchaumin=0, cburger=0;
	}
	public:
	void menu()
	{
		int choose;
		reorder:
			reorder();			
		cout<<"------------------MENU FOR TODAY---------------------"<< endl;
		cout<<"\n\n"<<endl;
		cout<<" \t\t\t Items" << "\t\t price per Quantity"<<endl;
		cout<<"\t\t 1> MOMO"		<<"\t\t\t"<<pmomo<<endl;
		cout<<"\t\t 2> Chaumin"	<<"\t\t\t"<<pchaumin<<endl;
		cout<<"\t\t 3> Burger"	<<"\t\t\t"<<pburger<<endl;
		cout<<"\t ***************************************************"<<endl;
		cout<<"\t\t 4> Cancel / Reorder"<<endl;
		cout<<"\t\t 5> Bill"	<< endl;
		cout<<"\t\t 6> Cancel / Exit"<<endl;
		
		
		
		do{
		
		cout<< "Please enter your choice food:";
		cin>>choose;
				
			switch(choose)
			{
				case 1:
					momo();
					break;
				case 2:
					chaumin();
					break;
				case 3:
					burger();
					break;
				case 4:
					system("cls");
					goto reorder;
					break;
				case 5:
					displaybill();
					break;
				case 6:
					cout<< "Exit"<<endl;
					break;
				default:
					cout<<"invalid choosen";
					break;
			}
			//	system("cls"); 		// problem comming in clearing screen
		
		}while(choose!=5);
		
		
	}
	void displaybill()
	{
		system("cls");
		cout<<"\n\n\n"<<endl;
		cout<<"____________________________________________________________________________________"<<endl;
		cout<<"\t\t\t\t 	Bill"<< endl;
		cout<<"____________________________________________________________________________________"<<endl;
		
		cout <<"\t ITEMS"<<"\t\t\t    Quantity"<<"\t\t\t Price"	<<endl;
		cout <<"\t MOMO"<<"\t\t\t\t" <<qmomo <<		"\t\t\t" 	<<cmomo<<endl ;
		cout <<"\t Chaumin"<<"\t\t\t"<<qchaumin <<"\t\t\t"	<<cchaumin<<endl ;
		cout <<"\t Burger"<<"\t\t\t\t" <<qburger <<"\t\t\t"		<<cburger<<endl ;
		
		calc();
		cout<<"\n\n\n\n\n"<<"\t\t\t\t Total amount =\t"<<total;
		
	}
};




void login();
void registration();
void ownerlogin();

 
 

main()
 {
 	menu_main a;
 	int c;
 	cout <<"\n\n -------------------Welcome to the hotpot Hotel------------------------------------"<<endl;
 	cout <<"------------------------please select one---------------------------------------------------------"<<endl;
 	cout <<"\t\t  1> LOGIN"<<endl;
 	cout <<"\t\t  2> Owner LOGIN"<<endl;
 	cout <<"\t\t  3> REGISTRATION"<<endl;
 	cout <<"\t\t  4> EXIT"<<endl; 
 	cout << "\n\n please enter your choice"<<endl;
 	cin >> c;
 	cout <<endl;
 	switch(c)
 	{
 		case 1:
 			login();
 			break;
 			
 		case 2:
 			ownerlogin();
 			break;
 		case 3:
 			registration();
 			break;
 		case 4:
 			cout<< "Exit succefull";
 			break;
 		default:
 			cout<<"invalid choosen";
 			main();
 		
	 }
 	
 }
 
 
 
 
 
 
 
 
 //  login page
 void login()
 {
 	menu_main a;
 	int count;
 	string userid,userpw,id,pass;
 	system("cls");
 	cout <<"Please  Enter the your user name and password"<<endl;
 	cout <<"\t\t Username:";
 	cin >> userid;
 	cout<<"\n\n\t\t Password:";
 	cin >> userpw;
 	
 	ifstream input("record.txt"); 
 	
 	while(input>>id>>pass)
 	{
 		if (id==userid && pass==userpw  )
 		{
 			count=1;
 			system("cls");
		 }
	 }
	 input.close();
	 
	 if(count == 1)
	 {
	 	cout<<"\n\n\n\t\t\t"<<userid<< " your login is succesfull"<<endl;
	 	cout<< "\t\t\t THnak you for login"<<endl<<endl<<endl;
	 	a.menu();
		a.displaybill();
	 }
	 else
	 {
	 	cout<<" Login Error \n please check your username and password"<<endl;
	 	 main();
	 }
 }
 void ownerlogin()
 {
 	menu_main a;
 	int count;
 	string userid,userpw,id,pass;
 	system("cls");
 	cout <<"Please  Enter the your user name and password"<<endl;
 	cout <<"\t\t Username:";
 	cin >> userid;
 	cout<<"\n\n\t\t Password:";
 	cin >> userpw;
 	
 	ifstream input("records.txt"); 
 	
 	while(input>>id>>pass)
 	{
 		if (id==userid && pass==userpw  )
 		{
 			count=1;
 			system("cls");
		 }
	 }
	 input.close();
	 
	 if(count == 1)
	 {
	 	cout<<"\n\n\n\t\t\t"<<userid<< " your login is succesfull"<<endl;
	 	cout<< "\t\t\t THnak you for login"<<endl<<endl<<endl;
	 }
	 else
	 {
	 	cout<<" Login Error \n please check your username and password"<<endl;
	 	 main();
	 }
 }
 
 void registration()
 {
 	string ruserid, ruserpw,rid,ipass;
 	
 	system("cls");
 	
 	cout<<"\t Enter your Username:";
	cin>>ruserid;
	cout<<"\t Enter your password:";
	cin>> ruserpw;
	
	ofstream file1("record.txt",ios::app);
	file1<<ruserid<<' '<<ruserpw<<endl;
	
	system("cls");
	cout<< "registration is succesful"<<endl;
	
	main(); 
}
