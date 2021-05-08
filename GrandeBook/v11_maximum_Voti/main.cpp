//Fig 6.5 pag 232
//Crea un oggetto GrandeBook aquisisce i voti e restituisce i voti riportati
//hpc 12.04.2021

#include "GrandeBook.h"

int main()
{
    GrandeBook myGrandeBook("CS101 C++ programming");

    myGrandeBook.dispalyMessage();
    myGrandeBook.inputVoti();
    myGrandeBook.displayVotiRiportati();

    return 0;
}