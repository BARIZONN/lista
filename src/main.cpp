#include "item.h"
#include "lista.h"
#include <iostream>
#include <locale>
using namespace std;

int main(){

    setlocale(LC_ALL, "");
    lista l;

    for(int i=1;i<=10;i++){// INSERE ELEMENTOS 1-10 NA LISTA

        l.inserir_ultimo(new item(i));
    }

    l.imprimir();//IMPRIME A LISTA

    for(int i=1;i<=10;i++){

        l.remover_ultimo(); 
    }

    l.imprimir();

    for(int i=1;i<=10;i++){// INSERE ELEMENTOS 1-10 NA LISTA
        
        l.inserir_inicio(new item(i));
    }
    l.imprimir();

    for(int i=1;i<=10;i++){// INSERE ELEMENTOS 1-10 NA LISTA
        
        l.remover_inicio();
    }
    l.imprimir();

    cout<<"O tamanho da lista é: "<<l.size()<<'.'<<endl;

    cout << "Pressione Enter para continuar..." << std::endl;
    cin.ignore();
   /*TESTE GALHO
    TESTE GALHO
    TESTE GALHO*/

    /*TESTE GALHO 2 TESTE GALHO 2*/
    teste

}
  

