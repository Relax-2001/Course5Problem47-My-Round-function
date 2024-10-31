#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{

	float Number = 0;

	cout << "Please enter a number : \n";

	cin >> Number;

	return Number;

}

float GetFraction(float Number)
{
	return Number - (int)Number;
}

int MyRoundFunction(float Number)
{

	int Integer_Part = (int)Number;
	float Float_Part = GetFraction(Number);
	
	if (abs(Float_Part) >= .5)
	{
		if (Number > 0)
		
			return ++Integer_Part;
		else
		
			return --Integer_Part;
	}
	else
	{
		return Integer_Part;
	}

	return Number;

}


int main()
{

	float Number = ReadNumber();

	cout << "C++ Round function result : ";
	cout << round(Number) << "\n";

	cout << "My Round Result : ";
	cout << MyRoundFunction(Number) << "\n";


}

