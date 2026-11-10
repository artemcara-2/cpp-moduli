#include <iostream>

int main()
{
	double a1;
	double b;
	int k;
	

	std::cout << "vvedite cislo a1 " << std::endl;
	std::cin >> a1;
	std::cout << "vvedite cislo b " << std::endl;
	std::cin >> b;
	std::cout << "vvedite cislo k " << std::endl;
	std::cin >> k;
	
	double	ak = a1 + (k - 1) * b;// gemini испрвил ошибку 
	std::cout << "k-y chlen = " << ak << std::endl; // gemini подсказал про "k-y chlen = " << ak 

	return 0;
}
