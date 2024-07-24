#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision

int main() {
    int a, b;
    std::cin >> a >> b;
    
    double sum = a + b;
    double difference = a - b;
    double result = sum / difference;
    
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
    
    return 0;
}