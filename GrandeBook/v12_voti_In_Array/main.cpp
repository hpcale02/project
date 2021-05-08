//Creare un oggetto nGrandeBook che utilizza gli array
//hpc 20.04.2021

#include "GrandeBook.h"

int main()
{
    int grandesArray[GrandeBook::students] = {87,
                                              68,
                                              94,
                                              100,
                                              83,
                                              78,
                                              85,
                                              91,
                                              76,
                                              87};

    GrandeBook myGrandeBook("CS101 Introduction to C++ Programming", grandesArray);
    myGrandeBook.displayMessage();
    myGrandeBook.processGrandes();
    return 0;
}