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

   read(symb);

   get_bin(symb,SIZE);

   delete [] symb;

   system("pause");
   return 0;
}

