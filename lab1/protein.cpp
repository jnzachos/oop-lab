#include <iostream>
#include "protein.h"

/* Protein::Protein(std::string new_name, int new_id, std::string new_chain) : name(new_name), id(new_id), chain(new_chain) {} */

void Protein::set_name(std::string new_name){
    name = new_name;
}

void Protein::set_id(std::string new_id){
    id = new_id;
}

void Protein::set_chain(std::string new_chain){
    chain = new_chain;
}

std::string Protein::get_name() const{
    return name;
}

std::string Protein::get_id() const{
    return id;
}

std::string Protein::get_chain() const{
    return chain;
}

void Protein::describe() const{
    std::cout << "protein " << name << " " << chain << "\n";
}