#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include "catch.hpp"
#include <cmath>
#include <iostream>

int gcd(int a, int b);

TEST_CASE("describe_gcd", "[gcd]") {
	REQUIRE(gcd(2,4) == 2); 
	REQUIRE(gcd(6,9) == 3); 
	REQUIRE(gcd(3,7) == 1);
	REQUIRE(gcd(5,10) == 5);
}

int checksum(int n);

TEST_CASE("describe_checksum", "[checksum]") {
	REQUIRE(checksum(234) == 9); 
	REQUIRE(checksum(69) == 15); 
	REQUIRE(checksum(42) == 6);
	REQUIRE(checksum(596) == 20);
	REQUIRE(checksum(-125) == -8);
	REQUIRE(checksum(-849) == -21);
	REQUIRE(checksum(115753) == 22);

}

int sumMultiples();

TEST_CASE("describe_sumMultiples", "[sumMultiples]") {
	REQUIRE(sumMultiples() == 234168); 
} 

double fract(double d);

TEST_CASE("describe_fract", "[fract]") {
	REQUIRE(fract(1.234) == Approx(0.234)); 
	REQUIRE(fract(9.364) == Approx(0.364));
	REQUIRE(fract(7.32342343) == Approx(0.32342343));
	REQUIRE(fract(8.212412413) == Approx(0.212412413));
}

double volumenZyl(double r, double h);

TEST_CASE("describe_volumenZyl", "[volumenZyl]") {
	REQUIRE(volumenZyl(4.3, 2.2) == Approx(127.794)); 
	REQUIRE(volumenZyl(3.0, 7.0) == Approx(197.92));
	REQUIRE(volumenZyl(9.3, 5.9) == Approx(1603.126));
	REQUIRE(volumenZyl(15.3, 3.4) == Approx(2500.412));
	REQUIRE(volumenZyl(22.1, 1.3) == Approx(1994.701));
} 

double mileToKilometer(double d);

TEST_CASE("describe_mileToKilometer", "[mileToKilometer]") {
	REQUIRE(mileToKilometer(1.0) == Approx(1.609344)); 
	REQUIRE(mileToKilometer(2.0) == Approx(3.21869));
	REQUIRE(mileToKilometer(4.0) == Approx(6.43736));
	REQUIRE(mileToKilometer(0.621371) == Approx(1.0));
	REQUIRE(mileToKilometer(1.24274) == Approx(2.0));
} 

/* ------------- Main ------------- */

int main(int argc, char* argv[]) {

	return Catch::Session().run(argc, argv);
}

/* -------------------------------- */


int gcd(int a, int b) {

	int result;

	if (b == 0) {
		result = a;
	}

	else {
		result = gcd(b, a % b);
	}

	return result; 
	
}

int checksum(int n) {
	int result = 0;

	while (n != 0) {
		result = result + (n % 10); // letzte Stelle wird betrachtet und auf result addiert 
		n = n / 10; // Nachkommastellen fallen weg
	}

	return result;
}

int sumMultiples() {
	int result = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i % 3 == 0) {
			result += i; // result wird um die durch 3 teilbare Zahl erhöht 
		}

		else if (i % 5 == 0) {
			result += i; // result wird um die durch 5 teilbare Zahl erhöht 
		}
	}

	return result; 
}

double fract(double d) {

	return  d - int(d); 
}

double volumenZyl(double r, double h) {
	double pi = M_PI;
	return ((pi * r * r) * h); // (pi * radius^2) * höhe
}

double mileToKilometer(double d) {
	return d * 1.609344;
}
