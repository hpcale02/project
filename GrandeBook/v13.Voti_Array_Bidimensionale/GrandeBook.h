//definizione della classe GrandeBook che utilizza un array bidimensionale
//hpc 20.04.2021

#include <string>
using namespace std;

class GrandeBook
{
public:
    const static int students = 10;
    const static int tests = 3;

    GrandeBook(string, const int[][tests]);

    void setCourseName( string);
    string getCourseName();
    void displayMessage();
    void processGrandes();
    int getMinimum();
    int getMaximum();
    double getAverage(const int [], const int);
    void outputBarChart();
    void outputGrandes();

private:
    string courseName;
    int voti[students][tests];
};