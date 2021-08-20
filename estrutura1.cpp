#include <iostream>
using namespace std;
struct Data {
	int dia;
	int mes;
	int ano;
};

struct Identidade {
	Data nasc; 
	Data emissao;

};

void ImprimeData(Data aux) {
	cout << "Data: " << aux.dia << "/" << aux.mes << "/" << aux.ano << endl;
}

Data CriaStruct(int dia, int mes, int ano){
	Data aux;
	aux.dia = dia;
	aux.ano = ano;
	aux.mes = mes;
	return aux;
}

int main() {
	Data data_prova;
	data_prova.dia = 24;
	data_prova.mes = 8;
	data_prova.ano = 2021;
	cout << "Dia da prova: " << data_prova.dia << "/" << data_prova.mes << "/" << data_prova.ano << endl;
	Data Hoje;
	cout << "Digite as informacoes do dia de hoje: "<< endl;
	cout << "Digite o dia: ";
	cin >> Hoje.dia;
	cout << "Digite o mes: ";
	cin >> Hoje.mes;
	cout << "Digite o ano: ";
	cin >> Hoje.ano;
	ImprimeData(Hoje);
	ImprimeData(data_prova);
	Data nasc = CriaStruct(2, 12, 1992);
	ImprimeData(nasc);
	
    return 0;
}