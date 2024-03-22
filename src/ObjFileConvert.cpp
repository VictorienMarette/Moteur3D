#include "ObjFileConvert.hpp"

Mesh obj_file_convert(string adresse){
    string line;
    ifstream myfile(adresse);
    if (myfile.is_open())
    {
    while ( getline (myfile,line) )
    {
        cout << line << '\n';
    }
    myfile.close();
    }
}
