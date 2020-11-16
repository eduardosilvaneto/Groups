#define GRUPOS_H
#include <iostream>

// Classe GRUPOS_H - contém um objeto qualquer referenciando por uma tabela - 31/07/2009

using namespace std;

class  Grupos {

	int id;
	string nome;
	Grupos *prox;
	public:
		 Grupos (){cout << "";};
		~Grupos(){cout << "Classe Grupos destruida";};
		 void setId( int i ) { id = i ;};
		 void setNome (string n){ nome =  n;};
		 int  getId () {return  id;};
		 string getNome () {return nome;};
		 void setGrupo(Grupos *p){prox = p;};
		 Grupos * getGrupos (){return prox;};
		 //void setContato (Contato c , int index){contato[index] = c;}
		 //Contato getContato (int index) {return contato[index];}

};

