//Fig 6.4 pag 230
//Definizione delle funzioni membro della classe GrandeBook
//hpc 12.04.2021

#include <iostream>
using namespace std;

#include "GrandeBook.h"

//costruttore inizializza
GrandeBook::GrandeBook(string name)
{
    setCourseName(name);
    maximumVoti = 0;
}

//legger il nome del corso e vedere se il lome è più lungo o meno di 25 caratteri se si ricordare nella memoria solo i primi 25 caratteri se no tutti.
void GrandeBook::setCourseName(string name)
{
    if (name.length() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" superato i limiti (25 caratteri)\n"
             << endl;
    }
}

//legge il nome del corso
string GrandeBook::getCourseName()
{
    return courseName;
}

//visualizza il messagio di benvenuto al corso
void GrandeBook::dispalyMessage()
{
    cout << "Benvenunto al corso di " << getCourseName() << "!\n"
         << endl;
}

//inserisci i tre valori e ne determini il massimo
void GrandeBook::inputVoti()
{
    int voto1, voto2, voto3;

    cout << "inserisc i tre numeri (separati con uno spazio): ";
    cin >> voto1 >> voto2 >> voto3;

    maximumVoti = maximum(voto1, voto2, voto3);
}

int GrandeBook::maximum(int number1, int number2, int number3)
{
    int maximumValue = number1;

    if (number2 > maximumValue)
        maximumValue = number2;

    if (number3 > maximumValue)
        maximumValue = number3;

    return maximumValue;
}

//visualizza un reporto in base ai voti inseriti
void GrandeBook::displayVotiRiportati()
{
    cout << "il voto massimo: " << maximumVoti << endl;
}