#include<iostream>
#include <string>
#include<cmath>
using namespace std;

enum  enColor{red, yellow, blue, green};
enum enGender{mail, femaile};
enum enMatrialStatuse{single, married};

struct stAddress
{
	string StreetName;
	string NunHouse;  //when i use "int"
	string poBox;
	string numPhone;
};

struct stContact
{
	string phone;
	string Email;
	stAddress address;
};

struct stFAddress
{
	string poFBox;
	string NStreet;
	string NHouse;
};

struct stFather
{
	string FName;
	stFAddress Addressf;
	string FPhone;
};

struct stStudent
{
	string FirstName;
	string LastName;
	int age;

	stAddress AddressStudent;

	stContact ContactStudent;

	stFAddress fatherAddress;

	stFather FatherContact;

	enColor favorColor;
	enGender gender;
	enMatrialStatuse MatrialStatuse;
};

void ReadInfo(stStudent& Read)
{
	cout << "Enter First Name &LastName " << "\n";
	cin >> Read.FirstName >> Read.LastName;

	cout << "Enter Age: " << "\n";
	cin >> Read.age;

	cout << "Enter Address / Street Name: " << "\n";
	cin >> Read.AddressStudent.StreetName;

	cout << "Enter Address / poBox: " << "\n";
	cin >> Read.AddressStudent.poBox;

	cout << "Enter Address / NumPhone: " << "\n";
	cin >> Read.AddressStudent.numPhone;

	cout << "Enter Address / NumHouse: " << "\n";
	cin >> Read.AddressStudent.NunHouse;

	cout << "Enter father's Name\n";
	cin >> Read.FatherContact.FName;

}

void PrintInfo(stStudent& Print)
{
	cout << "\n******************************\n";

	cout << "First & LastName  " << Print.FirstName <<"  "<< Print.LastName << endl;
	cout << "Age: " << Print.age << endl;
	cout << "StreetName: " << Print.AddressStudent.StreetName << endl;
	cout << "poBox is: " << Print.AddressStudent.poBox << endl;
	cout << "The Phone Number is: " << Print.AddressStudent.numPhone << endl;
	cout << "The Num House is: " << Print.AddressStudent.NunHouse << endl;
	cout << "The Name's Father is: " << Print.FatherContact.FName << endl;
	cout << "\n*****************************************\n";

}

void ArrInfo(stStudent Student [2])
{
	ReadInfo(Student [0]);
	ReadInfo(Student[1]);
}

void ArrPrint(stStudent Student[2])
{
	PrintInfo(Student[0]);
	PrintInfo(Student[1]);
}


int main()
{
	stStudent student[2];
	ArrInfo(student);
	ArrPrint(student);
	
	







	return 0;
}