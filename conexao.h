#define CONEXAO_H
#include <occi.h>

using namespace  std;
using namespace oracle::occi;

//Classe CONEXAO_H - conexao com a base de dados oracle  - 31/07/2009


class Conexao  {

	 string name;
	 string password;
	 string baseBD;
	public :

		~Conexao () {cout  << "destruindo objeto conexao\n";};
		void SetConexao(string nome , string passwd , string base){
		                               name = nome;
									   password = passwd;
									   baseBD = base;};
		Connection* GetConexao (){ Environment* env = Environment::createEnvironment();
					 	Connection *conn = env->createConnection(name , password, baseBD);
						return conn;
		void closeConnection ();
                                         };

};

