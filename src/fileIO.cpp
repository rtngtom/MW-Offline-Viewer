#include <fstream>

#include "fileIO.h"

FileIO(std::string fileName) {
	_file.open(fileName);
}

~FileIO() {
	_file.close;
}

std::string readFile(std::string fileName) {
	
}

std::string writeFile(std::string fileName, std::string sheetData) {

}