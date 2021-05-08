//Fig 6.3 pag 229
//Definizione della classe GrandeBook che restituisce il massimo tra tre voti
//hpc 12.04.2021

#include <string>
using namespace std;

class GrandeBook
{
private:
    string courseName;
    int maximumVoti;

public:
    GrandeBook(string);
    void setCourseName(string);
    string getCourseName();
    void dispalyMessage();
    void inputVoti();
    void displayVotiRiportati();
    int maximum(int, int, int);
};