// mileToKilometer (1.12)

#include <iostream>

double mileToKilometer(double d);


int main() {

	int n; 

	std::cout << "Bitte geben Sie eine Strecke in Meilen ein: ";
	std::cin >> n;
	std::cout << n << " mile(s) <=> " << mileToKilometer(n) << " km" <<  std::endl;

	return 0;
}

double mileToKilometer(double d) {
	return d * 1.609344;
}