//
// Created by kedar on 12/13/2022.
//

#ifndef CNOTES_FILER_H
#define CNOTES_FILER_H


#include <string>
#include <fstream>
#include <iostream>

class Filer {
private:
    std::string fileName;
public:
    Filer(std::string file) {
        fileName = file;
    }

    std::string readFile() {
        std::string word;
        std::ifstream in;
        std::string content;
        in.open(fileName);
        if (!in.is_open()) {
            return "";
        }
        while (in >> word) {
            content += word + " ";
        }
        return content;
    }

    std::string readFileByLines() {
        std::string line;
        std::ifstream in;
        std::string content;
        in.open(fileName);
        if (!in.is_open()) {
            return "";
        }
        while (std::getline(in, line)) {
            content += line + "\n";
        }
        return content;
    }

    void writeFile(std::string input) {
        std::ofstream out;
        out.open(fileName);
        if (!out.is_open()) {
            return;
        }
        out << input << std::endl;
    }
};


#endif //CNOTES_FILER_H
