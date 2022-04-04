#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file("file.txt");
    int size = 0;
    file.seekg (0, std::ios::end);
    size = file.tellg();
    cout  << size << " байт" << endl;
    file.close();
    return 0;
}
