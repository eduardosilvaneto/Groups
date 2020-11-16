#define CONEXAODAO_H
#ifndef CONEXAO_H
#include "conexao.h"
#endif

using namespace std;

class  ConexaoDao : public conexao {

        string  nome;
        string  passwd;
        string  baseBD;

        public:
             void ~ConexaoDao (){cout << "ConexaoDao destruida \n"};
             void SetConexao (string nome , string passwd ,string baseBD) {
                        this.nome = nome;
                        this.passwd = passwd;
                        this.baseBD = baseBD;
             };


}

