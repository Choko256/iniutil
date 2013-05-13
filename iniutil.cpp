#include "iniutil.hpp"

IniFile::IniFile() {
	this->infile = nullptr;
	this->outfile = nullptr;
	this->mode = NONE;
}

IniFile::IniFile(std::string filename, IniFileMode mode) {
	this->mode = mode;
	switch(this->mode) {
		case IN:
			this->infile = new std::ifstream(filename.c_str(), std::ios_base::in);
			break;
		case OUT:
			this->outfile = new std::ofstream(filename.c_str(), std::ios_base::out);
			break;
		default:
			break;
	}
}

IniFile::IniFile(std::string filename): IniFile(filename, IN) {
}

unsigned short IniFile::Open(std::string filename) {
	
}
