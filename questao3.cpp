#include <iostream>
#include <cmath>
#include <iomanip> // biblioteca para inserir o setprecision
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    float A, B, C, tri_ret, circulo, trapezio, quadrado, retangulo, pi;
    pi = 3.14159;
    std::cout << std::fixed;
    std::cout << setprecision(3);
    cout << "Informe o lado A: " << endl;
    cin >> A;
    cout << "Informe o lado B: " << endl;
    cin >> B;
    cout << "Informe o lado C: " << endl;
    cin >> C;
        
    tri_ret = (A * C) / 2;
    circulo = pi * pow(C, 2.0);
    trapezio = (A + B) * C / 2;
    quadrado = B * B;
    retangulo = A * B;

      cout << "A área do triângulo retângulo de base A e altura C é: " << tri_ret << endl;
      cout << "A área do cículo de raio C é: " << circulo << endl;
      cout << "A área do trapézio de bases A e B e altura C é: " << trapezio << endl;
      cout << "A área do quadrado de lado B é: " << quadrado << endl;
      cout << "A área do retângulo de lados A e B é: " << retangulo << endl;

    return 0;
}