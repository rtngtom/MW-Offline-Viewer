#include <fstream>

#include "fileIO.h"

FileIO::FileIO(std::string fileName) {
	_file.open(fileName);
}

FileIO::~FileIO() {
	_file.close();
}

std::string readFile(std::string fileName) {
	return NULL;
}

std::string writeFile(std::string fileName, std::string sheetData) {
	return NULL;
}