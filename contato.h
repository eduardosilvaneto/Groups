#define  CONTATO_H
#ifndef LISTA_GRUPOS_H
#include "lista_grupo.h"
#endif

using namespace  std;

// Classe CONTATO_H

class  Contato {
	int id;
	string nome;
	string data;
	ListaGrupo lista;

	public :
         Contato(){id = 0;};
		~Contato(){cout << "Classe destruida \n";};
		void setId (int i) {id = i;};
		void setNome(string n){nome = n;};
		void setData(string d){data = d;};
		string getNome (){ return nome; };
		string getData (){ return data; };
		int getId (){ return id;};
		void setListaGrupo (Grupos *p);
		ListaGrupo * getListaGrupo(){return &lista;};


};

void Contato :: setListaGrupo (Grupos *p){

        if (p != NULL){
            lista.setGrupo(p);
        }
}

