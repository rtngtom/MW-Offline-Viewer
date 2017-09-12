#pragma once

#include <string>
#include <iostream>

class FileIO {
public:
	FileIO(std::string fileName);
	~FileIO();

	std::string readFile();
	std::string writeFile(std::string sheetData);
private:
	std::string _fileName;
	std::ofstream _file;
};