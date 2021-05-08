//definizione della classe GrandeBook che utilizza un array per memorizzare i voting
//hpc 20.04.2021

#include <string>
using namespace std;

class GrandeBook
{
public:
    const static int students = 10;

    GrandeBook(string, const int[]);

    void setCourseName( string);
    string getCourseName();
    void displayMessage();
    void processGrandes();
    int getMinimum();
    int getMaximum();
    double getAverage();
    void outputBarChart();
    void outputGrandes();

private:
    string courseName;
    int voti[students];
};