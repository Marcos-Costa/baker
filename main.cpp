#include <iostream>
#include <fstream>
#include <string.h>
#include "docente.h"
#include "buffer.h"

using namespace std;

int main (int argv, char* argc[]){

    //Loads all ".csv" files into a Buffer Files
    character* docenteCSV = createBufferFile("csv/docentes.csv");
    //Remove the line that does not contain valuable data
    character* removedLine = removeCurBufferLine(&docenteCSV);
    printBufferFile(docenteCSV);
    cout << endl <<endl<<endl;
    printBufferFile(removedLine);

    destroyBufferFile(&docenteCSV);

    return 0;
}
