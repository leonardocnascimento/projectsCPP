/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = raiz de (x2 - x1)² + (y2 - y1)²

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/
#include <iostream>
#include <cmath> // funcionamento de pow e sqrt (potenciação e raiz).
#include <iomanip> // funcionamento de setprecision.
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    double x1, x2, y1, y2, distancia;
    std::cout << std::fixed;
    std::cout << setprecision(4);
    
    cout << "Informe o valor de X no ponto 1: ";
    cin >> x1;
    cout << "Informe o valor de Y no ponto 1: ";
    cin >> y1;
    cout << "Informe o valor de X no ponto 2: ";
    cin >> x2;
    cout << "Informe o valor de Y no ponto 2: ";
    cin >> y2;

    distancia = sqrt (pow (x2 - x1, 2) +  pow (y2 - y1, 2));

    cout << distancia;

    return 0;
}