# include <iostream>
# include "write.h"
# include "symbol.h"
using namespace std;

int main()
{
    const int SIZE = 100;
    Symbol *symb = new Symbol [SIZE];

   write();

   system("cls");

   read();

   get_bin();

   delete [] symb;

   system("pause");
   return 0;
}

