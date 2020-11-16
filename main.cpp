#ifndef LISTA_GRUPOS_H
#include "lista_grupo.h"
#endif
#ifndef GLOBAIS_H
#include "globais.h"
#endif
#ifndef DAO_H
#include "dao.h"
#endif
#ifndef GRUPOS_H
#include "grupos.h"
#endif
#include <iostream>

// Classe Principal do Sistema

using namespace  std;

int main  () {

	Contato *c , *c1;
	Grupos  *g, *p , *l,*r;
	Dao  d;
	ListaGrupo *lista;



     /*
	p = new Grupos();
	p->setId(1);
	p->setNome("Programador C++");
	//cout << "nome :" << p->getNome() << "\n";

    //segundo grupo
	g = new Grupos();
	g->setId(2);
	g->setNome("     Perl");
	//cout << "nome :" << g->getNome() << "\n";

	//terceiro grupo
	l = new Grupos();
	l->setId(3);
	l->setNome("Programador Java");
	//cout << "nome :" << l->getNome() << "\n";
    */

    /*c = new Contato();
    c->setId(6);
 	c->setNome("Teste6");
    d.inserir(c);*/

    /*
	//inserindo lista de grupos que o usuario pertence
	c->setListaGrupo(p);
	c->setListaGrupo(g);
	c->setListaGrupo(l);


    lista  =  c->getListaGrupo();
    r =  lista->getGrupos("Programador Perl");

    if ( r != NULL) {
        cout << "id   : " <<  r->getId() << "\n";
        cout << "Nome :" << r->getNome() <<"\n";
    }else
        cout << "Grupo nao encontrado!!!\n";

	//cout << r->getNome() << "\n";

     d.inserir(p);
     d.inserir(g);
     d.inserir(l);
     d.inserir(c);
     d.inserir(g,c);
     d.inserir(p,c);
     d.inserir(l,c);
     */

     c1 = d.getContato();
     cout << "nome contato : " << c1->getNome() << "\n";
     cout << "id contato :   " <<  c1->getId ()    << "\n";
     cout << "inserido .....\n";
     cout << "Dados inseridos com sucesso  .....\n";



	return 0;
}

