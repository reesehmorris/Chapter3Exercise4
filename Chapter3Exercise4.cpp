#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double InsuranceRate = 0.80;
	double replacementCost, minimumInsurance;

	cout << "Enter the replacement cost of the building: $";
	cin >> replacementCost;

	minimumInsurance = replacementCost * InsuranceRate;

	cout << fixed << setprecision(2);
	cout << "The minimum amount of insurance you should buy is: $" << minimumInsurance << endl;

	return 0;
}