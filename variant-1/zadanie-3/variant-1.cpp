#include <iostream >
int main() {
	double a;
	double b;
	double c;
	std::cout << "vvedive dlina caridora " << std::endl;
	std::cin >> a;
	std::cout << "vvide clolico vicracili caridor " << std::endl;
	std::cin >> b;
	std::cout << "vvide colico izracxodovali craki " << std::endl;
	std::cin >> c;
	double paint_per_meter = c / b;//gemini исправил не там вёл 
	double paint_needed = (a - b) * paint_per_meter; //gemini исправил 
	std::cout << paint_needed << std::endl;
}