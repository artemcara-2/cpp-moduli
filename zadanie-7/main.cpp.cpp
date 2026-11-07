#include <iostream>

int main() {
	double rastoeanie;
	std::cout << "vvedite rastoeanie :" << std::endl;
	std::cin >> rastoeanie;
	
	double t = rastoeanie / 12.0;
	std::cout << "vremea " << t << std::endl;
	return 0;
}