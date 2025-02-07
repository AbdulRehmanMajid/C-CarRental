#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

using namespace std;
class customer
{
	private:
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;

};
class rent : public customer
{
	public:
	int days=0,rentalfee=0;
	void data()
	{
		int login();
	login();
	cout << "\tPlease Enter your Name: ";
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t======== Car Rental System ======== \n\n"<<endl;
        cout <<"\tPlease Select a Car"<<endl;
        cout<<"\tEnter 'A' for Tesla 2023."<<endl;
        cout<<"\tEnter 'B' for Hyundai 2020."<<endl;
        cout<<"\tEnter 'C' for Ford 2022."<<endl;
        cout<<"\tEnter 'D' for Toyta Hilux."<<endl;
        cout<<"\tEnter 'E' for LandCruiser."<<endl;
        cout<<"\tEnter 'F' for RangeRover."<<endl;
        cout<<endl;
        cout<<"\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");

		cout<<"You have choosed Tesla model 2023"<<endl;
		 ifstream inA("A.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");

		cout<<"You have choosed Hyundai model 2020"<<endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);
         if(inB) cout << str << endl;

     }
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Ford model 2022"<<endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }
     sleep(2);
}
if(carmodel=="E")
 {
 	system("CLS");
	     cout<<"You have choosed LandCruiser"<<endl;
		 ifstream inC("E.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }
     sleep(2);
}
if(carmodel=="F")
 {
 	system("CLS");
	     cout<<"You have choosed RangeRover"<<endl;
		 ifstream inC("F.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     }
     sleep(2);
}
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" &&  carmodel !="E" &&  carmodel !="F")

      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" &&  carmodel !="E" &&  carmodel !="F");
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;

    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*56;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*60;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*75;
        if(carmodel == "E" ||carmodel=="E")
        rentalfee=days*100;
        if(carmodel == "F" ||carmodel=="F")
        rentalfee=days*125;
    }
void showrent()
    {
    cout << "\n                       Customer Invoice                  "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	| Invoice No. :"<<"------------------|"<<setw(10)<<"#BnC92243"<<" |"<<endl;
    cout << "	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

  
 
	}
};
class welcome{;
	public:
	int welcome_message()
	{
 ifstream in("welcome.txt");

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1);
  system ("CLS");
}

};
int main()
{
welcome obj1;
obj1.welcome_message();
rent obj2;

obj2.data();
obj2.calculate();
obj2.showrent();

return 0; 
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
   cout<<"\t------------------------------";
   cout<<"\n\tLOGIN \n";
   cout<<"\t------------------------------\n\n";
   cout << "\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "admin"){
      cout << "\n\n\n\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

