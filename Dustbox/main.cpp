#include <iostream>
#include <iterator>

template<typename T>
T add(T value1, T value2) {
    return value1 + value2;
}

int main() {
    
    std::string a = "Indie ";
    std::string b = "Tailor";
    
    char x = 'a';
    char y = 'b';
    
    double z1 = 1111111111111111;
    double z2 = 2222222222222222;
    
    std::cout << add(a,b) << std::endl;
    
    return 0;
}
