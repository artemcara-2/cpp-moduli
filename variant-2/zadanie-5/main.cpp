#include <iostream >

int main() {
	double curs_dolora;// курс долорова 
	double summa_rublex; // на какую сумму будет покупать в рублях 
	std::cout << "vvedite kurs dolorova " << std::endl;
	std::cin >> curs_dolora;
	std::cout << "vvedite na cacui summy butete pocupati in rublyaх " << std::endl;
	std::cin >> summa_rublex;

	double scolico_dolorov = summa_rublex / curs_dolora;
	std::cout << "vash sumy dolora = " << scolico_dolorov << std::endl;

	return 0;
}