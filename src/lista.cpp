#include "lista.h"
#include <iostream>
using namespace std;


        lista::lista(){
            head=NULL;
            tail=NULL;
        }
        void lista::inserir_ultimo(item* novo_item){
            if(vazia()){
                head=novo_item;
                tail=novo_item;
            }
            else{
                tail->setprox(novo_item);
                tail=novo_item;
            }

        }

        void lista::remover_ultimo(){

            item* novo_elemento=head;
            if(vazia()){
                cout<<"Lista vazia!!"<<endl;
            }
            else if (head->getprox()==NULL){// SEGUNDO ELEMENTO VAZIO TAMBEM É POSSIVEL USAR HEAD==TAIL
                delete head;
                head=NULL;
                tail=NULL;
            }
            else{//dois elementos ou mais
                while(novo_elemento->getprox()!=tail){
                    novo_elemento=novo_elemento->getprox();
                }
            
                delete tail;
                novo_elemento->setprox(NULL);
                tail=novo_elemento;
            }
        }

        void lista::inserir_inicio(item* novo_item){

            if(vazia()){
                head=novo_item;
                tail=novo_item;
            }
            else{
                novo_item->setprox(head);
                head=novo_item;
            }

        }
        void lista::remover_inicio(){
            if(vazia()){
                cout<<"Lista Vazia!!"<<endl;
            }
            else if(head->getprox()==NULL){// lista contem 1 elemento
                    delete head;
                    head=NULL;
                    tail=NULL;
                }
            
            else if(head->getprox()->getprox()==NULL){//Lista contem 2 elementos
                delete head;
                head=tail;
                }

            else{// Mais de 2 elementos
                item* aux=head->getprox();
                delete head;
                head=aux;
            }
        }
        void lista::imprimir(){
            if(vazia()){
                cout<<"Lista Vazia !!"<<endl;
            }
            item* aux=head;
            int n=1;
            while(aux!=NULL){
                cout<<"Elemento "<<n<<": "<<aux->getvalor()<<endl;
                aux=aux->getprox();
                n++;
            }
            putchar('\n');
        }
        int  lista::size(){
            int size=0;
            item* aux=head;
            while(aux!=NULL){
                aux=aux->getprox();
                size++;
            }
            return size;

        }
        bool lista::vazia(){
            return(head==NULL);
        }