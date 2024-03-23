#include "ObjFileConvert.hpp"

Polygone get_polygone_number(int nb, int x, int y, int z, int i){
    if(nb != 0 and nb != 1){throw runtime_error("Error: nb needs to be 1 or 0");}
    if(nb == 0){
        return Polygone(x, y, z);
    }
    return Polygone(x, i, z);
}
//A tester
Mesh obj_file_convert(string adresse){
    string line;
    ifstream myfile(adresse);

    if (myfile.fail()) {
        // File opening failed
        std::cerr << "Error opening "<< adresse<<": " << strerror(errno) << std::endl; 
        // strerror(errno) returns a descriptive error message based on errno
        return Mesh();
    }

    vector<Position> * position_list = new vector<Position>;
    vector<Polygone> * polygones_list = new vector<Polygone>;

    string placeholder;
    string x;
    string y;
    string z;
    string i;
    while ( getline (myfile,line) )
    {
        if (line[0] == 'v' and line[1] == ' '){
            istringstream iss(line);
            iss>>placeholder;
            iss>>x;
            iss>>y;
            iss>>z;

            position_list->push_back(Position(stod(x),stod(y),stod(z)));
        }
        if (line[0] == 'f'){
            istringstream iss(line);
            iss>>placeholder;
            iss>>x;
            iss>>y;
            iss>>z;
            iss>>i;

            size_t posx = x.find('/');
            size_t posy = y.find('/');
            size_t posz = z.find('/');
            size_t posi = i.find('/');
    
            // Extract the substring before the first '/'
            x = x.substr(0, posx);
            y = y.substr(0, posy);
            z = z.substr(0, posz);
            i = i.substr(0, posi);

            polygones_list->push_back(get_polygone_number(0, stoi(x), stoi(y), stoi(z), stoi(i)));
            polygones_list->push_back(get_polygone_number(1, stoi(x), stoi(y), stoi(z), stoi(i)));
        }
    }
    myfile.close();
    return Mesh(*position_list, *polygones_list);

}
