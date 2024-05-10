#include <iostream>

using namespace std;

const int dimensioneMax=100;

//prototipi
void caricaVettore_Matrice(int matrix[dimensioneMax][2], int v[], int &n);
void stampaMatrice(int matrix[dimensioneMax][2], int n);
int Menu();




int main() {

  int n;
  int matrix[dimensioneMax][2];
  int vettoreDaCaricare[dimensioneMax];
  int scelta;
  
  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaVettore_Matrice(matrix,vettoreDaCaricare,n);
      break;
      case 2:
        stampaMatrice(matrix,n);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);
  
}

int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica vettore e matrice"<<endl;
  cout<<"2-Stampa matrice"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}




void caricaVettore_Matrice(int matrix[dimensioneMax][2], int v[], int &n) {


  do {
    cout<<"Inserisci il numero di elementi da caricare: ";
    cin>>n;
    if(n%2!=0) {
      cout<<"Il numero di elementi deve essere pari"<<endl;
    }
  }while(n%2!=0);

  
  for(int i=0; i<n; i++) {
    cout<<"Inserisci il "<<i+1<<"° elemento: ";
    cin>>v[i];
  }

  int riga=0;

  for(int i=0; i<n; i++) {
    if(i%2==0) {
      matrix[riga][0]=v[i];
    } else {
      matrix[riga][1]=v[i];
      riga++;
    }
  }

  
}




void stampaMatrice(int matrix[dimensioneMax][2], int n) {

  for(int i=0; i<n/2; i++) {
    for(int j=0; j<2; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }

  
}


