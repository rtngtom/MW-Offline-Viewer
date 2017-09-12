#pragma once

#include <string>

class FileIO {
public:
	std::string readFile(std::string fileName);
	std::string writeFile(std::string fileName, Sheet sheet);
private:
};