#define LISTA_GRUPOS_H
#ifndef GLOBAIS_H
#include "globais.h"
#endif
#ifndef GRUPOS_H
#include "grupos.h"
#endif

//Classe LISTA_GRUPOS_H - Contém um lista de objeto especifico será


using namespace  std;

class  ListaGrupo {

	Grupos *inicio;
	Grupos *fim;

	public :
		 ListaGrupo(){inicio = NULL;fim = NULL;};
		~ListaGrupo(){cout << "Esta saindo a lista\n";};
		 void setGrupo (Grupos *p);
		 Grupos * getGrupos(string nome);
         void  getGruposAll ();
};


//inseri grupo na lista do contato
void ListaGrupo :: setGrupo (Grupos *p) {

     Grupos  *aux;
     aux = inicio;
     if (inicio == NULL)
     {
         inicio = p;
         fim =   p;
     }else{

          while (aux->getGrupos() != NULL){
               aux = aux->getGrupos();
          }
          aux->setGrupo(p);
          fim = p;
     }
}

//Imprimi informacoes de todos os grupos

void ListaGrupo :: getGruposAll (){
        Grupos *aux , *grupo;
        int  countg = 0;
        aux = inicio;
        while (aux != NULL){
            cout << "####################################\n";
            cout << "### Lista dos grupos cadastrados ###\n";
            cout << "####################################\n";
            cout << "\n";
            cout << "\n";
            cout << "id: " << countg << "==" << "Nome: " << aux->getNome() << "\n";
            countg++;

            aux = aux->getGrupos();
        }
}


//busca grupo a partir do nome
Grupos * ListaGrupo :: getGrupos(string nome){

            Grupos *aux , *grupo;
            aux = inicio;
            int achou = 1;

           while ((aux != NULL)){

                if (! (aux->getNome().compare(nome)) ){
                        grupo = aux;
                        //cout << aux->getNome() << " = " << nome << "\n";
                        achou = 0;
                }
                aux = aux->getGrupos();
           }

           if (achou == 1) {
               grupo = NULL;
               cout << "Nao encontrou objeto grupo\n";
           }

            return grupo;
}

