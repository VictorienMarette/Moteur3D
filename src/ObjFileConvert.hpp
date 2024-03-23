#ifndef OBJFILECONVERT_H
#define OBJFILECONVERT_H
using namespace std;
#include <stdexcept>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstring> // for strerror
#include <cerrno> // for errno
#include <string>
#include <sstream>
#include "ObjectMesh.hpp"

Mesh obj_file_convert(string adresse);


#endif