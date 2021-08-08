#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    float value, sum = 0;
    int value_positive = 0;
    std::cout << std::fixed;
    std::cout << setprecision(1);
    for (int i = 0; i < 6; i++){
        cout << "digite o " << i + 1 << "º número: ";
        cin >> value;
        if (value > 0){
            value_positive = value_positive + 1;
            sum = sum + value;
        }
    }
    float med = sum / value_positive;
    cout << "A média dos valores positivos digitados é: " << med;
    return 0;
}