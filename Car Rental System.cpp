#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;
class Car  

{

public:

			 Car();

			 Car(char *MM, int Y, int Cat);

	virtual ~Car();

	void     setMakeModel(const char *mm);

	char*    getMakeModel() const;

	void     setCarYear(const int y);

	int      getCarYear() const;

	void     setCategory(const int c);

	int      getCategory() const;
	
 	

private:

	char*	 MakeModel;

	int		 CarYear;

	int		 Category;

};




//--------------------------------------------------------------------

Car::Car()

{

	setMakeModel("No Car Selected");

	setCarYear(2000);

	setCategory(1);

}

//--------------------------------------------------------------------

Car::Car(char *MM, int Y, int Cat)

{

	setMakeModel(MM);

	setCarYear(Y);

	setCategory(Cat);

}

//--------------------------------------------------------------------

Car::~Car()

{

//	delete [] MakeModel;

}

//--------------------------------------------------------------------

void Car::setMakeModel(const char *m)

{

	MakeModel = new char[strlen(m) + 1];

	strcpy(MakeModel, m);

}

//--------------------------------------------------------------------

char* Car::getMakeModel() const

{

	return MakeModel;

}

//--------------------------------------------------------------------

void Car::setCarYear(const int y)

{

	CarYear = y;

}

//--------------------------------------------------------------------

int Car::getCarYear() const

{ 

	return CarYear;

}

//--------------------------------------------------------------------

void Car::setCategory(const int c)

{

	Category = c;

}

//--------------------------------------------------------------------

int Car::getCategory() const

{

	return Category;

}

//------------------------------------------------------------------

class Customer 
{

private:

    char* FirstName;

    char* LastName;

    char* Address;

    char* City;

    char* State;

    long  ZIPCode;



public:

    void  setFirstName(const char *FN);

    char* getFirstName() const { return FirstName; }

    void  setLastName(const char *LN);

    char* getLastName() const { return LastName; }

    char* FullName() const;

    void  setAddress(const char *Adr);

    char* getAddress() const { return Address; }

    void  setCity(const char *CT);

    char* getCity() const { return City; }

    void  setState(const char *St);

    char* getState() const { return State; }

    void  setZIPCode(const long ZIP);

    long  getZIPCode() const { return ZIPCode; }

    Customer();

    Customer(char *FName, char *LName, char *Adr,

             char *Ct, char *St, long  ZIP);

    Customer(const Customer &Pers);

    Customer(char * FName, char * LName);

    ~Customer();

};



//---------------------------------------------------------------------------

char *Customer::FullName() const

{

    char *FName = new char[40];

    strcpy(FName, FirstName);

    strcat(FName, " ");

    strcat(FName, LastName);



    return FName;

}

//---------------------------------------------------------------------------

Customer::Customer()

    : ZIPCode(0)

{  

    FirstName = new char[20];

    strcpy(FirstName, "John");

    LastName  = new char[20];

    strcpy(LastName, "Doe");

    Address   = new char[40];

    strcpy(Address, "123 Main Street Apt A");

    City      = new char[32];

    strcpy(City, "Great City");

    State     = new char[30];

    strcpy(State, "Our State");

}

//---------------------------------------------------------------------------

Customer::Customer(char * FName, char * LName)

    : ZIPCode(0)

{

    FirstName = new char[strlen(FName) + 1];

    strcpy(FirstName, FName);

    LastName  = new char[strlen(LName) + 1];

    strcpy(LastName, LName);

    Address   = new char[40];

    strcpy(Address, "123 Main Street Apt A");

    City      = new char[32];

    strcpy(City, "Great City");

    State     = new char[30];

    strcpy(State, "Our State");

} 

//---------------------------------------------------------------------------

Customer::Customer(char *FName, char *LName, char *Adr,

                       char *Ct, char *St, long  ZIP)

    : ZIPCode(ZIP)

{                            

    FirstName = new char[strlen(FName) + 1];

    strcpy(FirstName, FName);

    LastName  = new char[strlen(LName) + 1];

    strcpy(LastName, LName);

    Address   = new char[40];

    strcpy(Address, Adr);

    City      = new char[32];

    strcpy(City, Ct);

    State     = new char[30];

    strcpy(State, St);

}

//---------------------------------------------------------------------------

Customer::Customer(const Customer &Pers)

    : ZIPCode(Pers.ZIPCode)

{              

    FirstName = new char[strlen(Pers.FirstName) + 1];

    strcpy(FirstName, Pers.FirstName);

    LastName  = new char[strlen(Pers.LastName) + 1];

    strcpy(LastName, Pers.LastName);

    Address   = new char[strlen(Pers.Address) + 1];

    strcpy(Address, Pers.Address);

    City      = new char[strlen(Pers.City) + 1];

    strcpy(City, Pers.City);

    State     = new char[strlen(Pers.State) + 1];

    strcpy(State, Pers.State);

}

//---------------------------------------------------------------------------

void Customer::setFirstName(const char *FN)

{

    strcpy(FirstName, FN);

}

//---------------------------------------------------------------------------

void Customer::setLastName(const char *LN)

{

    strcpy(LastName, LN);

}

//---------------------------------------------------------------------------

void Customer::setAddress(const char *Adr)

{

    strcpy(Address, Adr);

}

//---------------------------------------------------------------------------

void Customer::setCity(const char *CT)

{

    strcpy(City, CT);

}

//---------------------------------------------------------------------------

void Customer::setState(const char *St)

{

    strcpy(State, St);

}

//---------------------------------------------------------------------------

void Customer::setZIPCode(const long ZIP)

{

    ZIPCode = ZIP;

}

//---------------------------------------------------------------------------

Customer::~Customer()

{

    delete [] FirstName;

    delete [] LastName;

    delete [] Address;

    delete [] City;

    delete [] State;

}

//---------------------------------------------------------------------------


class Invoice  

{

public:

	Invoice();

	virtual ~Invoice();

	Customer CustomerRegistration();

	void	 CustomerInformation(const Customer& Pers);

	Car		 CarSelection();

	void	 CarSelected(const Car& Vehicle);

	double   CalculatePrice(const Car& Vehicle, double& Rate, int &Days);

	void	 setMileage(const long g);

	long	 getMileage() const;

	void	 setTankLevel(const char *v);

	char*	 getTankLevel() const;

	void     setCarCondition(const char *c);

	char*    getCarCondition() const;



	void ProcessOrder();

	void CarExamination();

	void ShowOrder();

	

private:

	long  Mileage;

	char *TankLevel;

	char *CarCondition;

};


//

//////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////

// Construction/Destruction

//////////////////////////////////////////////////////////////////////



Invoice::Invoice()

{

	setTankLevel("Empty");

	setCarCondition("Good");

}

//--------------------------------------------------------------------

Invoice::~Invoice()

{

}

//--------------------------------------------------------------------

Customer Invoice::CustomerRegistration()

{

    char FName[20], LName[20], Addr[40], CT[32], St[30];

    long ZC = 0;



    cout << "Enter Customer Information\n";

    cout << "First Name: "; cin >> FName;

    cout << "Last Name:  "; cin >> LName;

    cout << "Address:    "; cin >> ws;

    cin.getline(Addr, 40);

    cout << "City:       ";

    cin.getline(CT, 32);

    cout << "State:      ";

    cin.getline(St, 30);

    cout << "Zip Code:   "; cin >> ZC;



	Customer Cust(FName, LName, Addr, CT, St, ZC);

	return Cust;

}

//--------------------------------------------------------------------

Car Invoice::CarSelection()

{

	int CarType, ModelChosen;

	char strCarSelected[20];

	int CarSelectedYear = 2000;



	cout << "What type of car would you like to rent?";

	do {	

		cout << "\n1 - Economy   | 2 - Compact  | 3 - Standard"

			 << "\n4 - Full Size | 5 - Mini Van | 6 - Sports Utility";

		cout << "\nYour Choice: ";

		cin >> CarType;

		if( CarType < 1 || CarType > 6 )

			cout << "\nPlease type a number between 1 and 6";

	} while(CarType < 1 || CarType > 6);



	switch(CarType)

	{

	case 1:

		cout << "\nFor the Economy type, we have:"

			 << "\n1 - Daewoo Lanos | 2 - Cheverolet Metro";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "Daewoo Lanos");

			CarSelectedYear = 1999;

		}

		else

		{

			strcpy(strCarSelected, "Chevrolet Metro");

			CarSelectedYear = 1998;

		}

		break;



	case 2:

		cout << "\nFor the Compact type, we have:"

			 << "\n1 - Chevrolet Cavalier | 2 - Dogde Neon"

			 << "\n3 - Nissan Sentra      | 4 - Toyota Corolla";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "Chevrolet Cavalier");

			CarSelectedYear = 1999;

		}

		else if(ModelChosen == 2)

		{

			strcpy(strCarSelected, "Dodge Neon");

			CarSelectedYear = 2001;

		}

		else if(ModelChosen == 3)

		{

			strcpy(strCarSelected, "Nissan Sentra");

			CarSelectedYear = 1998;

		}

		else

		{

			strcpy(strCarSelected, "Toyota Corrolla"); 

			CarSelectedYear = 2002;

		}

		break;



	case 3:

		cout << "\nFor the Standard type, we have:"

			 << "\n1 - Chevrolet Monte Carlo | 2 - Toyota Camri";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "Chevrolet Monte Carlo");

			CarSelectedYear = 2000;

		}

		else

		{

			strcpy(strCarSelected, "Toyota Camri");

			CarSelectedYear = 1998;

		}

		break;



	case 4:

		cout << "\nFor the Full Size type, we have:"

			 << "\n1 - Chrysler 300M | 2 - Buick Century | 3 - Infinity I30";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "Chrysler 300M");

			CarSelectedYear = 2000;

		}

		else if(ModelChosen == 2)

		{

			strcpy(strCarSelected, "Buick Century");

			CarSelectedYear = 1999;

		}

		else

		{

			strcpy(strCarSelected, "Infinity I30");

			CarSelectedYear = 2003;

		}

		break;



	case 5:

		cout << "\nFor the Mini-Van type, we have:"

			 << "\n1 - Dodge Caravan   | 2 - Dodge Caravan"

			 << "\n3 - Pontiac Montana | 4 - Pontiac Montana | 5 - Chevrolet Astro Van";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "Dodge Caravan");

			CarSelectedYear = 2001;

		}

		else if(ModelChosen == 2)

		{

			strcpy(strCarSelected, "Dodge Caravan");

			CarSelectedYear = 2003;

		}

		else if(ModelChosen == 3)

		{

			strcpy(strCarSelected, "Pontiac Montana");

			CarSelectedYear = 2003;

		}

		else

		{

			strcpy(strCarSelected, "Chevrolet Astro Van");

			CarSelectedYear = 2000;

		}

		break;



	case 6:

		cout << "\nFor the Sport Utility type, we have:"

			 << "\n1 - GMC Jimmy        | 2 - Jeep Cherokee"

			 << "\n3 - Chevrolet Blazer | 4 - Toyota Pathfinder";

		cout << "\nWhich one would you prefer? ";

		cin >> ModelChosen;



		if(ModelChosen == 1)

		{

			strcpy(strCarSelected, "GMC Jimmy");

			CarSelectedYear = 1998;

		}

		else if(ModelChosen == 2)

		{

			strcpy(strCarSelected, "Jeep Cherokee");

			CarSelectedYear = 2003;

		}

		else if(ModelChosen == 3)

		{

			strcpy(strCarSelected, "Chevrolet Blazer");

			CarSelectedYear = 2001;

		}

		else

		{

			strcpy(strCarSelected, "Toyota Pathfinder");

			CarSelectedYear = 2000;

		}

		break;

	}



	Car Selected(strCarSelected, CarSelectedYear, CarType);

	return Selected;

}

//--------------------------------------------------------------------

void Invoice::setMileage(const long g)

{

	Mileage = g;

}

//--------------------------------------------------------------------

long Invoice::getMileage() const

{

	return Mileage;

}

//--------------------------------------------------------------------

void Invoice::setTankLevel(const char *v)

{

	TankLevel = new char[strlen(v) + 1];

	strcpy(TankLevel, v);

}

//--------------------------------------------------------------------

char* Invoice::getTankLevel() const

{

	return TankLevel;

}

//--------------------------------------------------------------------

void Invoice::setCarCondition(const char *c)

{

	CarCondition = new char[strlen(c) + 1];

	strcpy(CarCondition, c);

}

//--------------------------------------------------------------------

char* Invoice::getCarCondition() const

{

	return CarCondition;

}

//--------------------------------------------------------------------

void Invoice::ProcessOrder()

{

	int NbrOfDays;;

	double Rate, TotalPrice;

	// Enter Customer Information

	Customer Person = CustomerRegistration();

	cout << "\nProcess Car Information\n";

	Car	Driving = CarSelection();

	

	TotalPrice = CalculatePrice(Driving, Rate, NbrOfDays);

	CarExamination();



	

	system("cls");



	cout << " -  Car Rental System -";

	cout << "\n=============================";

	CustomerInformation(Person);

	cout << "\n------------------------------";

	CarSelected(Driving);

	cout << setiosflags(ios::fixed) << setprecision(2);

	cout << "\n------------------------------";

	cout << "\nCar Mileage: " << getMileage();

	cout << "\nCondition:   " << getCarCondition();

	cout << "\nTank Level:  " << getTankLevel();

	cout << "\n# of Days:   " << NbrOfDays;

	cout << "\n------------------------------";

	cout << "\nRate:        $" << Rate;

	cout << "\nTotal Price: $" << TotalPrice;

	cout << "\n==============================\n";

}

//--------------------------------------------------------------------

void Invoice::CustomerInformation(const Customer& Pers)

{

    cout << "\nEmployee Identification";

    cout << "\nFull Name:    " << Pers.FullName();

    cout << "\nAddress:      " << Pers.getAddress();

    cout << "\nCity:         " << Pers.getCity() << ", "

         << Pers.getState() << " " << Pers.getZIPCode();

}

//--------------------------------------------------------------------

void Invoice::CarSelected(const Car& Vehicle)

{

	cout << "\nModel:       " << Vehicle.getMakeModel();

	cout << "\nYear:        " << Vehicle.getCarYear();

}



//--------------------------------------------------------------------

double Invoice::CalculatePrice(const Car& Vehicle, double& DayRate,

							   int &NumberOfDays)

{

//	char	WeekEndResponse;// Does the customer rent the car for the week-end?

	double	OneDayRate, // If renting for less than 5 days including week-end

			WeekDay,	// If renting for at least 5 days, regardless of the days

			WeekEnd = 0;// If renting for more than two days from Friday to monday

	//double	DayRate;	// Rate applied based on the number of days

	double	TotalRate;



	switch(Vehicle.getCategory())

	{

	case 1:

		DayRate		= 24.95;

		OneDayRate	= 29.95;

		WeekDay		= 24.95;

		WeekEnd		= 19.95;

		break;



	case 2:

		DayRate		= 34.95;

		OneDayRate	= 39.95;

		WeekDay		= 34.95;

		WeekEnd		= 25.95;

		break;



	case 3:

		DayRate		= 38.95;

		OneDayRate	= 49.95;

		WeekDay		= 38.95;

		WeekEnd		= 32.95;

		break;



	case 4:

		DayRate		= 44.95;

		OneDayRate	= 69.95;

		WeekDay		= 44.95;

		WeekEnd		= 35.95;

		break;



	case 5:

		DayRate		= 54.95;

		OneDayRate	= 89.95;

		WeekDay		= 54.95;

		WeekEnd		= 42.95;

		break;



	case 6:

		DayRate		= 64.95;

		OneDayRate	= 89.95;

		WeekDay		= 64.95;

		WeekEnd		= 50.95;

		break;

	}



	cout << "\nHow many days? "; cin >>	NumberOfDays;

	TotalRate = DayRate * NumberOfDays;

	return TotalRate;

}

//--------------------------------------------------------------------

void Invoice::CarExamination()

{

	char Cond;

	int GasLevel;



	cout << "Rate the car's condition (e=Excellent/g=Good/d=Driveable): ";

	cin >> Cond;

	if( Cond == 'e' || Cond == 'E' )

		strcpy(CarCondition, "Excellent");

	else if( Cond == 'g' || Cond == 'G' )

		strcpy(CarCondition, "Good");

	else if( Cond == 'd' || Cond == 'D' )

		strcpy(CarCondition, "Driveable");

	else

		strcpy(CarCondition, "Can't Decide");

	

	cout << "Enter the car mileage: ";

	cin >> Mileage;



	do {

		cout << "Gas level in the tank"

			 << "\n1 - Considered Empty"

			 << "\n2 - 1/4 Full"

			 << "\n3 - Half Full"

			 << "\n4 - 3/4 Full"

			 << "\n5 - Full Tank";

		cout << "\nEnter the gas level: ";

		cin >> GasLevel;

	}while(GasLevel < 1 || GasLevel > 5);



	switch(GasLevel)

	{

	case 1:

		setTankLevel("Empty");

		break;

	case 2:

		setTankLevel("1/4 Full");

		break;

	case 3:

		setTankLevel("Half Full");

		break;

	case 4:

		setTankLevel("3/4 Full");

		break;

	case 5:

		setTankLevel("Full Tank");

		break;

	}

}

//--------------------------------------------------------------------

class CRentDate  

{

public:

	CRentDate();

	CRentDate(int m, int d, int y);

	CRentDate(const CRentDate& d);

	void setDate(int m, int d, int y);

	int getMonth();

	int getDay();

	int getYear();

	virtual ~CRentDate();

private:

	int Month;

	int Day;

	int Year;

};
CRentDate::CRentDate()

	: Month(1), Day(1), Year(1990)

{



}

//---------------------------------------------------------------------

CRentDate::CRentDate(int m, int d, int y)

	: Month(m), Day(d), Year(y)

{

	

}

//---------------------------------------------------------------------

CRentDate::CRentDate(const CRentDate& d)

{

	Month	= d.Month;
	Day	= d.Day;
	Year	= d.Year;
}
//---------------------------------------------------------------------
CRentDate::~CRentDate()
{

}
//---------------------------------------------------------------------
void CRentDate::setDate(int m, int d, int y)
{
	Month = m;
	Day   = d;
	Year  = y;
}

//---------------------------------------------------------------------

int CRentDate::getMonth()
{
	return Month;
}

//---------------------------------------------------------------------

int CRentDate::getDay()

{
	return Day;
}

//---------------------------------------------------------------------

int CRentDate::getYear()
{
	return Year;
}

//---------------------------------------------------------------------



int main()

{	
	int width = 80;
	int height = 20;
	int a = 10;
	bool z;
	for (int i = 1; i <= width + 2; i++)
	{
		Sleep(a);
		cout << "*";
		cout << "*";
		if (i == (width + 2) / 2)
		{
			cout << endl;
		}
	}
	cout << endl;

	for (int j = 1; j < height + 1; j++)
	{
		z = true;
		for (int i = 1; i < width + 1; i++)
		{
			if (i == 1 || i == width)
			{
				Sleep(a);
				cout << "!!";
			}
			else if (j == 7)
			{
				cout << "_";
			}
			else if (j == 13)
			{
				cout << "_";
			}
			else
			{
				cout << " ";
			}


			if (!z)
			{
				if (i == width - 1)
				{
					if (j == 9)
					{
						cout.width(34);
					}
					else if (j == 10)
					{
						cout.width(29);
					}
					else if (j == 11)
					{
						cout.width(32);
					}
					else if (j == 12)
					{
						cout.width(32);
					}
				}
				else
				{
					cout << "\b";
				}
			}


			if (j == 9)
			{
				if (z)
				{
					Sleep(a);
					cout.width(45);
					cout << "..Car Rental System..";
					z = false;
				}

			}
			else if (j == 10)
			{
				if (z)
				{
					Sleep(a);
					cout.width(50);
					cout << "..Project by..";
					z = false;
				}
			}
			else if (j == 11)
			{
				if (z)
				{
					Sleep(a);
					cout.width(47);
					cout << "";
					z = false;
				}
			}
			else if (j == 12)
			{

				if (z)
				{
					Sleep(a);
					cout.width(47);
					cout << "..Sudhakar Kumar..";
					z = false;
				}
			}
		}
		cout << endl;
	}

	for (int i = 1; i <= width + 2; i++)
	{
		Sleep(a);
		cout << "*";
		cout << "*";
		if (i == (width + 2) / 2)
		{
			cout << endl;
		}
	}
	_getch();
	system("cls");

	



	string userName;
	string userPassword;
	
	int loginAttempt = 0;
	while (loginAttempt < 5)
	{
		{
			cout << "\n\n\tPlease enter your user name: ";
			cin >> userName;
			cout << "\n\tPlease enter your user password: ";
			cin >> userPassword;

			if (userName == "admin" && userPassword == "admin123")
			{
				system("cls");
				cout << "\n\n\t\t\t\t\t Welcome Admin! \n\n";
				break;
			}
			else if (userName == "sudhakar" && userPassword == "sud123")
			{
				system("cls");
				cout << "\n\n\t\t\t\t\t Welcome Sudhakar !\n\n";
				break;
			}
			else
			{
				cout << "Invalid login attempt. Please try again.\n" << '\n';
				loginAttempt++;
			}
		}
		if (loginAttempt == 5)
		{
			cout << "\n\n\t\t\tToo many login attempts! The program will now terminate. \n\n\n\n" << endl;
			system("pause");
			return 0;
		}

	}
	int choice1,choice2,choice3;
	int choice4;
	string member_name, member_address, member_cnic;
	string  member_contact_no;
	int member_id;
	int member_id_show;
	int member_id_update;
	int choice5;
	string computer_name;
	int computer_model_no, computer_mac, computer_id, computer_id_show, computer_id_update;
a:	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t******************************";
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t CAR RENTAL SYSTEM";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t******************************";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      * MAIN MENU *";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******************************";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t1.Administrator";
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2. Rent A Car";
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t3.Exit";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice: ";
		cin >> choice1;
	switch (choice1)
	{ //switch choice 1
	b:		case 1://switch 1
		system("cls");
		cout << "\n\t\t\t\t\t\t\tADMINISTRATOR\n\n" << endl;
		cout << "\t 1) Member Entry \n" << endl;
		cout << "\t 2) Check Entry \n" << endl;
		cout << "\t 3) Back to Main Menu" << endl;
		cout << "\n\n\t\t Enter Your Choice" << endl;
		cout << "\t\t";
		cin >> choice2;
		switch (choice2)
		{ //switch choice 2
		case 1: //switch 2
		k:			system("cls");
			cout << "\n\t\t\t\t\tMember Entry Menu\n\n\n" << endl;
			cout << "\t 1 . Add Member " << endl;
			cout << "\t 2 . Show Member Record " << endl;
			cout << "\t 3 . Update Member Record " << endl;
			cout << "\t 4 . Return to Main Menu " << endl;
			cout << "\n\n\t\t Enter Your choice" << endl;
			cout << "\t\t";
			cin >> choice3;
			switch (choice3)
			{ //switch choice 3
			case 1: // switch 3
				system("cls");
				cout << "\n\t\t\t\t\tAdd Member Record";
				cout << "\n\n";
				cout << "\t\t Enter Member's name " << endl;
				cout << "\t\t";
				cin >> member_name;
				cout << "\t\t Enter Member's Contact Number " << endl;
				cout << "\t\t";
				cin >> member_contact_no;
				cout << "\t\t Enter Member's CNIC " << endl;
				cout << "\t\t";
				cin >> member_cnic;
				cout << "\t\t Enter Member's Address " << endl;
				cout << "\t\t";
				cin >> member_address;
				cout << "\t\t Enter Member's ID " << endl;
				cout << "\t\t";
				cin >> member_id;
				cout << "\n\n\n";
				system("pause");
				goto b;
				break; //Switch choice 3 case 1
			case 2: //switch 3
			u:				system("cls");
				cout << "\n\t\t\t\t\tShow Record";
				cout << "\n\n";
				cout << "\t\t Enter Members ID Whose Record you want to see" << endl;
				cout << "\t\t";
				cin >> member_id_show;
				cout << "\n";
				if (member_id_show == member_id)
				{
					cout << "\t Name:\t\t" << member_name << endl;
					cout << "\t Contact No:\t" << member_contact_no << endl;
					cout << "\t CNIC:\t\t" << member_cnic << endl;
					cout << "\t Address:\t" << member_address << endl;
					system("pause");
					goto b;

				}
				else
					cout << "\n\n\t\t\t\t\t Wrong Input !! Please Enter Again" << endl;
				cout << "\n\n\n\n\n\n";
				system("pause");
				goto u;
				break; //Switch choice 3...case 2
			case 3: //switch 3
				system("cls");
				cout << "\n\t\t\t\t\t\tUpdate Record" << endl;
				cout << "\n\n";
			t:				cout << "\t Enter member id whose Record you want to Update\n" << endl;
				cout << "\t";
				cin >> member_id_update;
				if (member_id_update == member_id)
				{
					cout << "\t\t Enter New Member's name " << endl;
					cout << "\t\t";
					cin >> member_name;
					cout << "\t\t Enter New Member's Contact Number " << endl;
					cout << "\t\t";
					cin >> member_contact_no;
					cout << "\t\t Enter New Member's CNIC " << endl;
					cout << "\t\t";
					cin >> member_cnic;
					cout << "\t\t Enter New Member's Address " << endl;
					cout << "\t\t";
					cin >> member_address;
					cout << "\t\t Enter New Member's ID " << endl;
					cout << "\t\t";
					cin >> member_id;
					system("pause");
					goto b;
				}
				else
					cout << "\n\n\t\t\t\t\t Wrong Input !! Please Enter Again" << endl;
				cout << "\n\n\n\n\n\n";
				system("pause");
				goto t;

				break;//switch choice 3...case 3
			case 4: //switch 3
				goto a;
				system("cls");

				break; // switch choice 1...case 1
			default:
				cout << "Invalid Input !!! Please Enter Again" << endl;
				system("pause");
			}	goto k;
		}
		case 2:
		system("cls");
		cout << "\n\t\t\t Management Menu \n\n" << endl;
		cout << "\n\n";
		cout << "\t 1 . Booking" << endl;
		cout << "\t 2 . Exit " << endl;
		cout << "\n\t\tEnter Your choice" << endl;
		cout << "\t\t";
		cin >> choice5;
		switch (choice5)
		{ //switch choice 5
			case 1: // Switch choice 5 ..Booking
			system("cls");
		
			//class Use
			Invoice Order;
			Order.ProcessOrder();
	}	}
				
}
