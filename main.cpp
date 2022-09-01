//Jeovan Gomes
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	const char resposta[] = "ABCDABCDA"; // Respostas
	char gabarito[9]; // gabarito de marcação
	int contAcert = 0; // quantidade de acertos
	char validar = '1';
	float porcent, porcentAprov, porcentReprov; // valores de porcentagem calculados
	int contParticipantes = 0; // quantidade de participantes
	int contAprovados = 0; // quantidade de aprovados

	setlocale(LC_ALL, "Portuguese");
	while(validar == '1'){
        do{ //pergunta 1 só aceita A,B,C e D não aceita minusculo
            system("cls");
			cout << "1 - Pergunta: ";
			cin >> gabarito[0];
			if(gabarito[0] == resposta[0]){ 
				contAcert += 1;
			}
			if(gabarito[0] == 'A' || gabarito[0] == 'B' || gabarito[0] == 'C' || gabarito[0] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
        }while(gabarito[0] != 'A' || gabarito[0] != 'B' || gabarito[0] != 'C' || gabarito[0] != 'D');

        do{//pergunta 2 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "2 - Pergunta: ";
			cin >> gabarito[1];
			if(gabarito[1] == resposta[1]){
				contAcert += 1;
			}
			if(gabarito[1] == 'A' || gabarito[1] == 'B' || gabarito[1] == 'C' || gabarito[1] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
        }while(gabarito[1] != 'A' || gabarito[1] != 'B' || gabarito[1] != 'C' || gabarito[1] != 'D');

		do{//pergunta 3 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "3 - Pergunta: ";
			cin >> gabarito[2];
			if(gabarito[2] == resposta[2]){
				contAcert += 1;
			}
			if(gabarito[2] == 'A' || gabarito[2] == 'B' || gabarito[2] == 'C' || gabarito[2] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[2] != 'A' || gabarito[2] != 'B' || gabarito[2] != 'C' || gabarito[2] != 'D');

		do{//pergunta 4 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "4 - Pergunta: ";
			cin >> gabarito[3];
			if(gabarito[3] == resposta[3]){
				contAcert += 1;
			}
			if(gabarito[3] == 'A' || gabarito[3] == 'B' || gabarito[3] == 'C' || gabarito[3] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[3] != 'A' || gabarito[3] != 'B' || gabarito[3] != 'C' || gabarito[3] != 'D');

		do{//pergunta 5 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "5 - Pergunta: ";
			cin >> gabarito[4];
			if(gabarito[4] == resposta[4]){
				contAcert += 1;
			}
			if(gabarito[4] == 'A' || gabarito[4] == 'B' || gabarito[4] == 'C' || gabarito[4] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[4] != 'A' || gabarito[4] != 'B' || gabarito[4] != 'C' || gabarito[4] != 'D');

		do{//pergunta 6 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "6 - Pergunta: ";
			cin >> gabarito[5];
			if(gabarito[5] == resposta[5]){
				contAcert += 1;
			}
			if(gabarito[5] == 'A' || gabarito[5] == 'B' || gabarito[5] == 'C' || gabarito[5] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[5] != 'A' || gabarito[5] != 'B' || gabarito[5] != 'C' || gabarito[5] != 'D');

		do{//pergunta 7 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "7 - Pergunta: ";
			cin >> gabarito[6];
			if(gabarito[6] == resposta[6]){
				contAcert += 1;
			}
			if(gabarito[6] == 'A' || gabarito[6] == 'B' || gabarito[6] == 'C' || gabarito[6] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[6] != 'A' || gabarito[6] != 'B' || gabarito[6] != 'C' || gabarito[6] != 'D');

		do{//pergunta 8 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "8 - Pergunta: ";
			cin >> gabarito[7];
			if(gabarito[7] == resposta[7]){
				contAcert += 1;
			}
			if(gabarito[7] == 'A' || gabarito[7] == 'B' || gabarito[7] == 'C' || gabarito[7] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[7] != 'A' || gabarito[7] != 'B' || gabarito[7] != 'C' || gabarito[7] != 'D');

		do{//pergunta 9 só aceita A,B,C e D não aceita minusculo
            system("cls");
            cout << "9 - Pergunta: ";
			cin >> gabarito[8];
			if(gabarito[8] == resposta[8]){
				contAcert += 1;
			}
			if(gabarito[8] == 'A' || gabarito[8] == 'B' || gabarito[8] == 'C' || gabarito[8] == 'D'){
				break;
			}else{
                cout << "Entrada invalida!" << endl;
                system("pause");
                system("cls");
			}
		}while(gabarito[8] != 'A' || gabarito[8] != 'B' || gabarito[8] != 'C' || gabarito[8] != 'D');

		porcent = contAcert * 100.00 / 9;

		// Verificar se o total de acertos da mais que 60%
		if(porcent >= 60.0){
			contAprovados += 1;
			cout << "Parabens Aprovado!" << endl;
			cout << "Porcentagem de acertos: " << porcent << "%\n";
		}else{
			cout << "Infelizmente Reprovado!" << endl;
			cout << "Porcentagem de acertos: " << porcent << "%\n";
		}
		cout << "Acertos: " << contAcert << endl;

		while(validar != '2'){
			cout << "Deseja verificar outro participante? (1-sim/2-não) ";
			cin >> validar;
			if(validar == '1'){
				break;
			}
			system("cls");	
		}
		
		contAcert = 0;
		contParticipantes += 1;
	}
	//Estatistica no final
	porcentAprov = contAprovados * 100.00 / contParticipantes;
	porcentReprov = 100.00 - porcentAprov;
	cout << "Total de participantes: " << contParticipantes << endl;
	cout << "Porcentagem de participantes aprovados: " << porcentAprov << "%\n";
	cout << "Porcentagem de participantes reprovados: " << porcentReprov << "%\n";
}
