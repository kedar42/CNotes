//
// Created by kedar on 12/12/2022.
//


#include "Car.h"
#include "Filer.h"

int main(int argc, char **argv) {
    Car *ford = new Car("Fiesta");

    Filer input = Filer(R"(C:\Users\kedar\Programming\Python\CNotes\input1.txt)");
    std::cout << input.readFileByLines();

    Filer output = Filer(R"(C:\Users\kedar\Programming\Python\CNotes\output1.txt)");
    output.writeFile(input.readFileByLines());
}
