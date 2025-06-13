#include "Form.hpp"

Form::Form(): name("default"){
        this->flag = false;
}

Form::Form(std::string name): name(name) {
        this->flag = false;
}

Form::~Form(){}

std::string const Form::getName() const { return this->name; }
bool const Form::getFlag() const { return this->flag; }


