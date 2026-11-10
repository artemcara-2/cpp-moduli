#include <iostream >

int main() {
	int mamin_got;
	int moi_got;
	int got;// в каком году родила мама 
	std::cout << "vvedite cacoi tvoi got "<<std::endl;
	std::cin >> moi_got;
	std::cout << "vvedite cacoi mamin got "<<std::endl; 
	std::cin >> mamin_got; 

	got =  moi_got - mamin_got;
	std::cout << got << std::endl;
	return 0; 
}