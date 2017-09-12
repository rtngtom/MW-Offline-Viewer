#pragma once

#include <string>

class FileIO {
public:
	FileIO(std::string fileName);
	~FileIO();

	std::string readFile();
	std::string writeFile(std::string sheetData);
private:
	std::string fileName;
};