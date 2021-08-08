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

      cout << "A �rea do tri�ngulo ret�ngulo de base A e altura C �: " << tri_ret << endl;
      cout << "A �rea do c�culo de raio C �: " << circulo << endl;
      cout << "A �rea do trap�zio de bases A e B e altura C �: " << trapezio << endl;
      cout << "A �rea do quadrado de lado B �: " << quadrado << endl;
      cout << "A �rea do ret�ngulo de lados A e B �: " << retangulo << endl;

    return 0;
}