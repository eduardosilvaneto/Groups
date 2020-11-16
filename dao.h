#define DAO_H
#ifndef CONEXAO_H
#include "conexao.h"
#endif
#ifndef CONTATO_H
#include "contato.h"
#endif
#ifndef GRUPOS_H
#include "grupos.h"
#endif


/* Classe DAO_H contém as DML's necessárias para as operações do sistemas  31/07/2009 */

using namespace  std;
using namespace oracle::occi;

class Dao {

	public:

		~Dao(){cout << "Classe destruida!!\n";};
		 void inserir (Contato *p);
		 void inserir (Grupos  *g);
		 void inserir (Grupos *g , Contato *c);
		 void alterarNome(Grupos *p){ p->setNome("teste");}
		 //Grupos * getGrupo ();
		 Contato * getContato ();
		 //Connection * getCon (string nome, string senha , string conexao);

};



void Dao :: inserir (Contato *p){

	Conexao a;
	Connection *conn;
	a.SetConexao("eduardo", "edu213021##", "localhost");
	conn = (Connection*) a.GetConexao();
        Statement *stmt = conn->createStatement("INSERT INTO contatos values (:c1, :c2)");
	stmt->setInt(1, p->getId());
    	stmt->setString(2, p->getNome());
	stmt->executeUpdate ();
	conn->commit();

}

void Dao :: inserir (Grupos *g){

	Conexao a;
	Connection *conn;
	a.SetConexao("eduardo", "edu213021##", "localhost");
	conn = (Connection*) a.GetConexao();
    Statement *stmt = conn->createStatement("INSERT INTO grupos values (:c1, :c2)");
	stmt->setInt(1, g->getId());
    	stmt->setString(2, g->getNome());
	stmt->executeUpdate ();
	conn->commit();

}

void Dao ::  inserir (Grupos *g , Contato *c){

	Conexao a;
	Connection *conn;
	a.SetConexao("eduardo", "edu213021##", "localhost");
	conn = (Connection*) a.GetConexao();
        Statement *stmt = conn->createStatement("INSERT INTO contatos_grupos values (:c1, :c2)");
	stmt->setInt(1, c->getId());
    stmt->setInt(2, g->getId());
	stmt->executeUpdate ();
	conn->commit();

}

Contato * Dao :: getContato () {

    Conexao a;
	Connection *conn;
	Contato *aux;
	a.SetConexao("eduardo", "edu213021##", "localhost");
	conn = (Connection*) a.GetConexao();
    Statement* stmt = conn->createStatement();
	stmt->setSQL("select * from contatos");
	ResultSet *rs = stmt->executeQuery();
	while (rs->next()){
	    aux = new Contato();
	    aux->setId(rs->getInt(1));
	    aux->setNome(rs->getString(2));
    }
    return aux;
}

