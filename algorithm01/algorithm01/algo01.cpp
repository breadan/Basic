#include <iostream>
#include <string>
//#include "algo01.h"
using namespace std;
//001 print name by function

void printName()
{
	string name;
	cout << "enter the name\n";
	cin >> name;
	cout << " your name is " <<" " << name << endl;
}

//another way to print name

string readName()
{
	string Name;
	cout << "Please Enter yor Name\n";
	getline(cin, Name);
	return Name;
}
void printName2(string Name)
{
	cout << "\n the name is: " << Name << endl;
}

//odd or even
enum enNumberType {Odd= 1, Even = 2};
int readNumber()
{
	int num;
	cout << "Enter a Number: " << endl;
	cin >> num;
	return num;
}
enNumberType checkNumber(int num)
{
	int result = num % 2;
	if (result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}
void printNumberType(enNumberType numType)
{
	if (numType == enNumberType::Even)
		cout << "\n Number is Even\n";
	else
		cout << "\nNumber is Odd\n";
}

//bool
struct stInfo
{
	int Age;
	bool hasDriver;
};
stInfo readInfo()  //فاليو من نوع ستركتشر
{
	stInfo Info;
	cout << "Enter your Name" << endl;
	cin >> Info.Age;

	cout << "Do you have driver License?" << endl;
	cin >> Info.hasDriver;
	return Info;
}
bool isAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.hasDriver);
}
void printResult(stInfo Info)
{
	if (isAccepted(Info))
		cout << "\n Hired" << endl;
	else
		cout << "\n Rejected" << endl;
}

//print full name vid2;
struct stName
{
	string FirstName;
	string LastName;
};
stName readName2() //function type is structure
{
	stName Name;
	cout << "Enter the First Name" << endl;
	cin >> Name.FirstName;

	cout << "Enter the Last Name" << endl;
	cin >> Name.LastName;
	return Name;
}
string getFullName(stName Name)
{
	string fullName;
	fullName = Name.FirstName + " " + Name.LastName;
	return fullName;
}
void printName3(string fullName)
{
	cout << "\n the full name is " << fullName << endl;
	
}

//Calculate hafe number
int readNumber5()
{
	int N;
	cout << "Enter the Number\n";
	cin >> N;
	return N;
}
float CalculateHafe(int N)
{
	return (float)N / 2;
}
void printHave(int N)
{
	//how do this coad?
	//string Result = "Half of " + to_string(N) + " is " + to_string(CalculateHafe(N))
	//	cout << endl; << Result << endl;
	cout << CalculateHafe(N) << endl;
}

//check Number
enum enpassFail{pass=1, fail=2};
int readMark()
{
	int Mark;
	cout << "Enter the Mark\n";
	cin >> Mark;
	return Mark;
}
enpassFail checkNum(int Mark)
{
	if (Mark >= 10)
		return enpassFail::pass;
	else
		return enpassFail::fail;
}
void printResult2(int Mark) //لماذا لم تتم كتابتها زي البرنت اللي فوق؟؟
{
	if (checkNum(Mark) == enpassFail::pass)
		cout << "pass\n";
	else
		cout << "Fail\n";
}

/*
//calculate Ave;
int Mark()
{
	//const int size = 5;
	int arr[5];
	//int sum = 0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "Enter Numbers\n";
		cin >> arr[i];
		//sum += arr[i];
		return arr[i];
	}
	
}
*/

enum enPassFail{Pass= 1, Fail=2};
void readNum(int& Num1, int& Num2, int& Num3)
{
	cout << "Enter Number 1 " << endl;
	cin >> Num1;

	cout << "Enter Number2 " << endl;
	cin >> Num2;

	cout << "Enter Number3 " << endl;
	cin >> Num3;
}
int sumNum(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
float aveCall(int Num1, int Num2, int Num3)
{
	return sumNum(Num1, Num2, Num3) / 3;
}
enPassFail checkAvg(float Avge)
{
	if (Avge >= 20)
		return enPassFail::Fail;
	else
		return enPassFail::Pass;
}
void printSum(int Sum)
{
	cout << "the sum is " << Sum << endl;
}
void printAvg(float Avge)
{
	cout << "\n your avge is pass" << Avge << endl;
	if (checkAvg(Avge) == enPassFail::Pass)
		cout << "\n you passed " << endl;
	else
		cout << "\nyou Faild" << endl;
}
/*
void printAvg(int Avg)
{
	cout << "the Avg is " << (float)Avg << endl;
}
*/


int main()
{ 
	//print sum  $$try array here
	int Num1, Num2, Num3;
	readNum(Num1, Num2, Num3);
	printSum(sumNum( Num1, Num2, Num3));
	printAvg(aveCall(Num1, Num2, Num3));


	//check number
	//printResult2(readMark());

	//print hafe number;
	//printHave(readNumber5());

	//print full name
	//printName2(getFullName(readName2()));

	//bool
	//printResult(readInfo ());

	/*
	//odd or even
	printNumberType(checkNumber(readNumber()));


	

	//another way to print name
	printName2(readName());

	//print name by function
	printName();
	*/




	return 0;
}