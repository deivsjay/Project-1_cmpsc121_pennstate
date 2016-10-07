/*
Divya Jagadeesh
CMPSC 121 - Spring 2015
Sec 004

Purpose: Determine the total salary of an employee based on what base salary he/she recieves and how much
he/she recieved in commission due to sales. The base salary is determined by the number of years the employee has worked.
Input: name, years, sales
Output: name, salary
Procedure: total salary = base salary + commission
Test Data:	years = 0
			sales = 0
			salary = 10000
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	string	name;		// employee's name
	int		years;		// number of years employee has worked
	double	sales,		// employee's sales 
			salary;		// employee's salary

	// getting employee's name from user
	cout << "Enter the employee's name. ";	
	getline(cin, name);

	// asking user how many years employee has worked 
	cout << "How many years has " << name << " worked for the company? ";
	cin >> years;

	// if user inputs negative years, directions will be re-stated for second attempt
	if (years < 0) {
		cout << name << " cannot have worked a negative number of years!" << endl
			<< "How many years has " << name << " worked for the company? ";
		cin >> years;
	}

	// if employee works 0-5 years, they recieve $9000 as a base quarterly salary
	if (years <= 5) {
		cout << endl << name << " should receive $9000.00 as a base quarterly salary. " << endl;
		salary = 9000;
	}
	// if employee works 6-11 years, they recieve $12000 as a base quarterly salary
	else if (years <= 11) {
		cout << endl << name << " should receive $12000.00 as a base quarterly salary. " << endl;
		salary = 12000;
	}
	// if employee works 12-17 years, they recieve $15000 as a base quarterly salary
	else if (years <= 17) {
		cout << endl << name << " should receive $15000.00 as a base quarterly salary. " << endl;
		salary = 15000;
	}
	// if employee works 18-29 years, they recieve $22000 as a base quarterly salary
	else if (years <= 29) {
		cout << endl << name << " should receive $22000.00 as a base quarterly salary. " << endl;
		salary = 22000;
	}
	// if employee works 30+ years, they recieve $26000 as a base quarterly salary
	else {
		cout << endl << name << " should receive $26000.00 as a base quarterly salary. " << endl;
		salary = 26000;
	}

	// asking user for employee's sales last quarter
	cout << endl << "What was " << name << "'s sales for the last quarter? ";
	cin >> sales;

	// if user inputs negative sales, directions will be re-stated for second attempt
	if (sales < 0) {
		cout << name << " cannot have a negative amount of sales!" << endl
			<< "What was " << name << "'s sales for the last quarter? ";
		cin >> sales;
	}

	// if employee makes $0-$3999.99 in sales, they recieve $1000 in commission, which is added to total salary
	if (sales <= 3999.99) {
		salary += 1000;
		cout << endl << name << " earned $1000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}
	// if employee makes $4000-$11999.99 in sales, they recieve $2000 in commission, which is added to total salary
	else if (sales <= 11999.99) {
		salary += 2000;
		cout << endl << name << " earned $2000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}
	// if employee makes $12000-$15999.99 in sales, they recieve $5000 in commission, which is added to total salary
	else if (sales <= 15999.99) {
		salary += 5000;
		cout << endl << name << " earned $5000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}
	// if employee makes $16000-$23999.99 in sales, they recieve $8000 in commission, which is added to total salary
	else if (sales <= 23999.99) {
		salary += 8000;
		cout << endl << name << " earned $8000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}
	// if employee makes $24000-$27999.99 in sales, they recieve $12000 in commission, which is added to total salary
	else if (sales <= 27999.99) {
		salary += 12000;
		cout << endl << name << " earned $12000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}
	// if employee makes $28000+ in sales, they recieve $15000 in commission, which is added to total salary
	else {
		salary += 15000;
		cout << endl << name << " earned $15000.00 as a commission from sales last quarter." << endl
			<< endl << name << " should recieve $" << setprecision(2) << fixed << showpoint << salary
			<< " as a total salary for this quarter." << endl << endl;
	}

	return 0;
}