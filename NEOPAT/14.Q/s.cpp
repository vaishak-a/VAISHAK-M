#include <iostream>
using namespace std;

int main() {
    int totalPopulation, literacyPercentage, menPercentage, menLiteracyPercentage;

    cin >> totalPopulation;         // Total population
    cin >> literacyPercentage;      // Literacy percentage
    cin >> menPercentage;           // Percentage of men
    cin >> menLiteracyPercentage;   // Percentage of literate men

    int menPopulation = (totalPopulation * menPercentage) / 100;
    int womenPopulation = totalPopulation - menPopulation;

    int literates = (totalPopulation * literacyPercentage) / 100;
    int illiterates = totalPopulation - literates;

    int menLiterate = (menPopulation * menLiteracyPercentage) / 100;
    int womenLiterate = literates - menLiterate;

    int menIlliterate = menPopulation - menLiterate;
    int womenIlliterate = womenPopulation - womenLiterate;

    cout << "Men population=" << menPopulation << "; Women population=" << womenPopulation << endl;
    cout << "Literates=" << literates << "; Illiterates=" << illiterates << endl;
    cout << "Men literates=" << menLiterate << "; Women literates=" << womenLiterate << endl;
    cout << "Men illiterates=" << menIlliterate << "; Women illiterates=" << womenIlliterate << endl;

    return 0;
}
