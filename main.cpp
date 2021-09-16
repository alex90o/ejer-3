#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>
#include <cstring>
int main(int argc, char *argv[]) {

    ofstream archi1; // ofstream para escribir
        archi1.open ("example.txt");
    char * buffer = new char[500];
    cin >> buffer;


    while (std::strcmp (buffer, ":q") != 0) { //termina el while cuando buffer = :q
            archi1 << buffer << '\n'; // cuando ponemos un espacio hace un salto de linea
            cin >> buffer;
        }
    archi1.close();
    ifstream archi2;
    archi2.open ("example.txt");
    string linea;
    while(getline(archi2,linea)){
    cout<<linea<<endl;
    }
    archi2.close();
    return 0;
}

