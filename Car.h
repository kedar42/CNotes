//
// Created by kedar on 12/13/2022.
//

#ifndef CNOTES_CAR_H
#define CNOTES_CAR_H


#include <string>

class Car {

private:
    std::string m_model;
public:
    Car(std::string model) {
        m_model = model;
    }

    std::string getModel() {
        return m_model;
    }

    void setModel(std::string model) {
        m_model = model;
    }

};


#endif //CNOTES_CAR_H
