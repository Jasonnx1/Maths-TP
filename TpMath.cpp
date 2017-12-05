#include <iostream>
#include <iomanip>

using namespace std;
menu(){
	
	cout << "1- Additionner les matrices" << endl;
	cout << "2- Multiplier les matrices" << endl;
	cout << "3- Multiplier par un reel" << endl;
	cout << "4- Transposition d'une matrice" << endl;
	cout << "5- Genere une Matrice Identite" << endl;
}

void addition(){
	
	int ligne;
	int colonne;
	 	
	cout << "Initialisation des matrices..." << endl;
	cout << "Entrez le nombre de lignes..." << endl;
	cin >> ligne;
	while(ligne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> ligne;
	}
	cout << "Entrez le nombre de colonnes..." << endl;
	cin >> colonne;
		while(colonne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> colonne;
	}
	int matrice1[ligne][colonne];
	int matrice2[ligne][colonne];
	int matriceResultat[ligne][colonne];
	cout << "Matrice1..." << endl;
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < colonne; j++){
			cout << "Position " << i+1 << "x" << j+1 << ':';
			cin >> 	matrice1[i][j]; 
		
		}	
	}

	cout << "Matrice2..." << endl;
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j<colonne; j++){
			cout << "Position " << i+1 << "x" << j+1 << ':';
			cin >> matrice2[i][j];
			 
		}	
	}

	for(int i = 0; i < ligne; i++){
		for(int j = 0; j<colonne; j++){
			
			matriceResultat[i][j] = matrice1[i][j] + matrice2[i][j];
			 	
		}	
	}

	for(int i = 0; i < ligne; i++){
		cout << endl;
		for(int j = 0; j<colonne; j++){
			cout << matriceResultat[i][j] << " ";	
		}
		cout << endl;	
	}
}

void multiplication(){
	
int ligneA;
int colonneA;
int ligneB;
int colonneB;

cout << "Entrez le nombre de ligne pour la matrice 1" << endl;
cin >> ligneA;
	while(ligneA > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> ligneA;
	}
cout << "Entrez le nombre de colonne de la matrice 1" << endl;
cin >> colonneA;
	while(colonneA > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> colonneA;
	}
int matrice1[ligneA][colonneA];
ligneB = colonneA;
cout << "Le nombre de ligne de la matrice 2 est donc " << colonneA << endl;
cout << "Entrez le nombre de colonne de la matrice 2" << endl;
cin >> colonneB;
	while(colonneB > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> colonneB;
	}
int matrice2[ligneB][colonneB];
int temp;
int matriceFinal[ligneA][colonneB];
cout << "Initialisation de la matrice 1" << endl;
for(int i = 0; i<ligneA; i++){
	for(int j = 0; j<colonneA; j++){
		cout << "Position: " << i+1 << 'x' << j+1 << ':' << endl;
		cin >> matrice1[i][j];
	}
}
cout << "Initialisation de la matrice 2" << endl;
for(int i = 0; i<ligneB; i++){
	for(int j = 0; j<colonneB; j++){
		cout << "Position: " << i+1 << 'x' << j+1 << ':' << endl;
		cin >> matrice2[i][j];
	}
}

for(int i = 0; i < ligneA; i++){
	for(int j = 0; j < colonneB; j++){
		temp = 0;
		for(int k = 0; k<ligneB;k++){
			temp = temp+(matrice1[i][j]*matrice2[k][j]);
		}
		matriceFinal[i][j] = temp;
	}	
}

cout << "Resultat " << endl;
for(int i = 0; i < ligneA; i++){
	for(int j = 0; j < colonneB; j++){
		cout << matriceFinal[i][j] << " ";
	}
	cout << endl;
}

}

void reel(){
	int ligne;
	int colonne;
	int nombre;
	cout << "Entrez le nombre de ligne de la matrice" << endl;
	cin >> ligne;
		while(ligne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> ligne;
	}
	cout << "Entrez le nombre de colonne" << endl;
	cin >> colonne;
		while(colonne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> colonne;
	}
	
	int matrice[ligne][colonne];
	cout << "Initisalisation de la matrice";
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < colonne; j++){
			cout << "Position " << i+1 << 'x' << j+1 << endl;
			cin >> matrice[i][j];
		}
	}
	cout << "Entrez le nombre" << endl;
	cin >> nombre;
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < colonne; j++){
		cout << matrice[i][j]*nombre << ' ';
		}
		cout << endl;
	}
} 

void transposition(){
	int ligne;
	int colonne;
	cout << "Entrez le nombre de lignes" << endl;
	cin >> ligne;
		while(ligne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> ligne;
	}
	cout << "Entrez le nombre de colonnes" << endl;
	cin >> colonne;
		while(colonne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> colonne;
	}
	int matrice[ligne][colonne];
	int matriceT[colonne][ligne];
	cout << "Initialisation de la matrice" << endl;
	
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < colonne; j++){
			cout << "Position " << i+1 << 'x' << j+1 << endl;
			cin >> matrice[i][j];
		}
	}
	
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < colonne; j++){
			matriceT[j][i] = matrice[i][j];
		}
	}
	
	for(int i = 0; i < colonne; i++){
		for(int j = 0; j < ligne; j++){
			cout << matriceT[i][j] << ' ';
		}
		cout << endl;
	}	
}

void identite(){
	int ligne;
	cout << "Entrez le nombre de lignes et colonnes de la matrice identite" << endl;
	cin >> ligne;
		while(ligne > 20){
		cout << "Maximum 20 svp..." << endl;
		cin >> ligne;
	}
	int matriceI[ligne][ligne];
	for(int i = 0; i < ligne; i++){
		for(int j = 0; j < ligne; j++){
			matriceI[i][j] = 0;
			if(i == j){
				matriceI[i][j] = 1;
			}
			cout << matriceI[i][j]<< ' ';
		}
		cout << endl;
	}	
}


int main() {
	int choix;
	int end = 0;
	while (end == 0){
	menu();
	cin >> choix;
	switch(choix){
	case 1: addition();
	break;
	case 2: multiplication();
	break;
	case 3: reel();
	break;
	case 4: transposition();
	break;
	case 5: identite();
	break;

		}
			cout << "Voulez-vous continuer ? (0 = oui; 1 = non)" << endl;
	cin >> end;
	 	while(end != 0 and end != 1){
	 		cout << "Voulez-vous continuer ? (0 = oui; 1 = non)" << endl;
			cin >> end;
		 }
	}
	return 0;
}
