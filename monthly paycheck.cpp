#include <iostream>
using namespace std;

int main()
{
	double baseSalary;
	double bonus;
	double totalSales;
	double additionalBonus;
	double payCheck;
	int noOfServiceYears;
	// Get input
	cout << "Please input Base Salary\n";
	cin >> baseSalary;
	cout << "Please input No of Service years\n";
	cin >> noOfServiceYears;

	if (noOfServiceYears <= 5)
		bonus = 10 * noOfServiceYears;
	else
		bonus = 20 * noOfServiceYears;
	cout << "Please input totalSales\n";
	cin >> totalSales;

	if (totalSales < 5000)
		additionalBonus = 0;
	else if (totalSales >= 5000 and totalSales <= 10000)
		additionalBonus = totalSales * (0.03);
	else
		additionalBonus = totalSales * (0.06);
	//Calculate Paycheck
	payCheck = baseSalary + bonus + additionalBonus;

	//Output Paycheck
	cout << "The paycheck is" << payCheck;
	return 0;
}