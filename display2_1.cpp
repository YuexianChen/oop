#include <iostream>
using namespace std;

double calculateWeight (double oneWeight, int numberOfBars)
{
	return oneWeight * numberOfBars;
}

int main()
{
	int numberOfBars;
	double oneWeight, totalWeight;

	cout <<"Enter the number of candy bars in a package\n";
	cout << "and the weight in ounces of one candy bar.\n";
	cout << "Then press return.\n";
	cin >> numberOfBars;
	cin >> oneWeight;

	totalWeight = calculateWeight(oneWeight, numberOfBars);

	cout << numberOfBars << " candy bars\n";
	cout << oneWeight << " ounces each\n";
	cout << "Total weight is " <<totalWeight << " ounces.\n";

	cout << "Try another brand.\n";
	cout << "Enterthe number of candy bars in a package\n";
	cout << "and the weight in ounces of one candy bar.\n";
	cout << "Then press return.\n";
	cin >> numberOfBars;
	cin >> oneWeight;

	totalWeight = calculateWeight(oneWeight, numberOfBars);

	cout << numberOfBars << " candy bars\n";
	cout << oneWeight << " ounces each\n";
	cout << "Total weight is " << totalWeight << " ounces.\n";

	cout << "Perhaps an apple would be healthier.\n";

	return 0;
}