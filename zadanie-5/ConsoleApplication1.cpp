#include <iostream>
#include <cmath>

int main()
{
	double a, b;

	std::cout << "vvedite cislo a :" << std::endl;
	std::cin >> a;
	std::cout << "vvedite cislo b :" << std::endl;
	std::cin >> b;

	// 1. Убрали лишний << std::endl и добавили 2.0 для чистоты типа double
	double avg_cube = (a * a * a + b * b * b) / 2.0;

	// 2. Формула корня и модулей написана идеально!
	double geom_abs = std::sqrt(std::fabs(a) * std::fabs(b));

	// 3. Выводим ответы раздельно
	std::cout << "Srednee kubov: " << avg_cube << std::endl;
	std::cout << "Srednee moduley: " << geom_abs << std::endl;

	return 0;
}