#ifndef __INIUTIL_HPP_
#define __INIUTIL_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

enum IniFileMode {
	IN,
	OUT,
	BOTH
};

class IniFile {
protected:
	std::ifstream *infile;
	std::ofstream *outfile;
	IniFileMode mode;
public:
	IniFile();
	IniFile(std::string);
	IniFile(std::string, IniFileMode mode);
	
	unsigned short Open(std::string);
};

#endif
