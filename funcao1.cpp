#include <iostream>
using namespace std;

int menor (int num1, int num2, int num3){ // fun��o para leitura de n�mero menor.
    if (num1 > num2 && num2 > num3){
        return num3;
    }
    if (num3 > num2 && num2 > num1){
        return num1;
    }
    if (num3 > num2 && num1 > num3){
        return num2;
    }
}   
int main () {
    setlocale (LC_ALL, "Portuguese");
    int num1, num2, num3;
    
    cout << "Digite os tr�s n�meros: ";
    cin >> num1 >> num2 >> num3;
    int num_menor = menor(num1, num2, num3);
    cout << "O menor n�mero digitado foi: " << num_menor;



    return 0;
}
#include <iostream>
using namespace std;
int menor(int num1, int num2, int num3) {
	if (num1 > num2 && num2 > num3) {
		return num3;
	}
	if (num3 > num2 && num2 > num1) {
		return num1;
	}

	if (num3 > num2 && num1 > num3) {
		return num2;
	}
}
int main() {
	int num1, num2, num3;
	cout << "Digite os tr�s numeros: ";
	cin >> num1 >> num2 >> num3;
	int  num_menor = menor(num1, num2, num3);
	cout << "O menor numero digitado foi: " << num_menor;


	return 0;
}