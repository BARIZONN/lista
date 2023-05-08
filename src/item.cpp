#include "item.h"
#include <iostream>
using namespace std;
        item::item(int valor){
            this->valor=valor;
            this->prox= NULL;
        }
        void item::setprox(item* prox){
            this->prox=prox;
        }
        void item::setvalor(int valor){
            this->valor=valor;
        }
        int item::getvalor(){
            return valor;
        }
        item* item::getprox(){
            return prox;
        }

       
