#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    ofstream fout("file.txt");
    fout << "Сообщение в файле";
    fout.close();
    system("pause");
    return 0;
}