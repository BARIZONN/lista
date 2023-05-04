#ifndef _ITEM_H
#define _ITEM_H
using namespace std;

    class item{
        private:
        int valor;
        item* prox;

        public:
        item(int valor);
        void setprox(item* prox);
        void setvalor(int valor);
        int getvalor();
        item* getprox();

     
    
        

    };

#endif // !_it