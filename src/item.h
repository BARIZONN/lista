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

    /*mudanças nao-sobreescrever remota*/
    /*mudança remota 2*/

#endif // !_it
