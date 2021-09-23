/**

Jerry Lau
CS211 Exercise 1
Oct 7 2021
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string lName;
    int familySize;
    double income;
    double debts;
	
	const int EXP = 3000;
	const double SAV = 0.02;
    
    cout << "What is your family name?" << endl;
    cin >> lName;
    
    cout << "How many members are in your family?" << endl;
    cin >> familySize;
    
    cout << "What is the total family income?" << endl;
	cin >> income;
    
    cout << "What is the family debt?" << endl;
	cin >> debts;
    
	int expenses = EXP * familySize;
    double payments = debts / 12.0;
    double savings = familySize*(SAV*(income-debts));
    
	cout << endl << "*******************************" << endl;
	cout << "Family Budget Assistance Center" << endl;	
	cout << "*******************************" << endl << endl;
    
	cout << "Program assement for " << lName << endl;
	cout << "Number of family members: " << familySize << endl;
	cout << "Family income: $" << income << endl;
	cout << "Family debts: $" << debts << endl;
	
	cout << endl << "*******************************" << endl;
	cout << "Predicted family living expenses: $" << expenses << endl;
	cout << "The monthly payments necessary to pay off the debt in one year: $" << payments << endl;
	cout << "The amount of money your family should save: $" << savings << endl;
    
    return 0;
}
