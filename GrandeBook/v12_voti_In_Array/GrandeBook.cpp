////definizione delle fuznini membro della calsse GrandeBook
//che utilizza un array per memorizzare i voti di un corso.
//hpc 20.04.2021

#include <iostream>
#include <iomanip>
#include "GrandeBook.h"
using namespace std;

GrandeBook::GrandeBook(string name, const int grandeArray[])
{
    setCourseName(name);

    for (int i = 0; i < students; i++)
    {
        voti[i] = grandeArray[i];
    }
}

void GrandeBook::setCourseName(string name)
{
    courseName = name;
}

string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::displayMessage()
{

    cout << "Welcome to the grande book for\n"
         << getCourseName() << "!" << endl;
}

void GrandeBook::processGrandes()
{
    //visualizza tutti i voti
    outputGrandes();

    //richiama getAverage per calcolare la media
    cout << "\nClass average is " << setprecision(2) << fixed << getAverage() << endl;

    //richiama le funzionio getMinimum e getMaximum
    cout << "Lowest grande is " << getMinimum() 
         << "\nHighest grande is " << getMaximum() << endl;

    //richiama outputBarChart per visualizzare un istogramma dei voti
    outputBarChart();
}

int GrandeBook::getMinimum()
{
    int lowGrande = 100;

    for (int i = 0; i < students; i++)
    {
        if (voti[i] < lowGrande)
            lowGrande = voti[i];
    }

    return lowGrande;
}

int GrandeBook::getMaximum()
{
    int highGrande = 0;

    for (int i = 0; i < students; i++)
    {
        if (voti[i] > highGrande)
            highGrande = voti[i];
    }

    return highGrande;
}

double GrandeBook::getAverage()
{

    int totale = 0;

    for (int i = 0; i < students; i++)
    {
        totale += voti[i];
    }

    return static_cast<double>(totale) / students;
}

void GrandeBook::outputBarChart()
{
    cout << "\nGrande distribution: " << endl;

    //memorizza le frequenza dei voti in intervalli di 10
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};

    //per ogni voto incrememtare la frequenza
    for (int i = 0; i < students; i++)
    {
        frequency[voti[i] / 10]++;
    }

    for (int count = 0; count < frequencySize; count++)
    {
        if (count == 0)
            cout << "  0-9: ";
        else if (count == 10)
            cout << "  100: ";
        else
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";

        for (int stars = 0; stars < frequency[count]; stars++)
        {
            cout << '*';
        }

        cout << endl;
    }
}

void GrandeBook::outputGrandes()
{
    cout << "\nThe grandes are:\n\n";

    //visualizza ogni voto
    for (int i = 0; i < students; i++)
    {
        cout << "Student " << setw(2) << i + 1 << ": " << setw(3) << voti[i] << endl;
    }
}