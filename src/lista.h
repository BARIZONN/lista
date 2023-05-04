#ifndef _LISTA_H
#define _LISTA_H
#include "item.h"
#include <iostream>
using namespace std;

class lista{

    private:

        item* head;  
        item* tail;
    
    public:
        lista();
        void inserir_ultimo(item* novo_item);
        void remover_ultimo();
        void inserir_inicio(item* novo_item);
        void remover_inicio();
        void imprimir();
        int  size();
        bool vazia();
};

#endif // !_LISTA_H