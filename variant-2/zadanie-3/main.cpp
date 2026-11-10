#include <iostream>

int main()
{
    int N; // всего учеников 
    int A; // пятерок 
    int c; // троек 
    int B; // двоек 
    
    std::cout << "Scolco ucenixov v classe" << std::endl;
    std::cin >> N;
    
    std::cout << "Scolco ucenixov polucili 5" << std::endl;
    std::cin >> A; 
    
    std::cout << "Scolco ucenixov polucilo troek" << std::endl;
    std::cin >> c; 
    
    std::cout << "Scolco ucenixov polucili dvoec" << std::endl; 
    std::cin >> B; 
    
    // Считаем процент учеников с пятерками: (часть * 100.0) / общее число
    double S = (A * 100.0) / N;
    
    std::cout << "Procent ucenicov s pyaterkami: " << S << "%" << std::endl;

    return 0;
}
