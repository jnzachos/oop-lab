#include <iostream>
#include "gene.h"

/* Gene::Gene(std::string new_name, int new_id, std::string new_chrom, std::string new_start, std::string new_end, char new_strand)
: name(new_name), id(new_id), chrom(new_chrom), start(new_start), end(new_end), strand(new_strand) {} */

void Gene::set_name(std::string new_name){
    name = new_name;
}

void Gene::set_id(std::string new_id){
    id = new_id;
}

void Gene::set_chrom(std::string new_chrom){
    chrom = new_chrom;
}

void Gene::set_start(std::string new_start){
    start = new_start;
}

void Gene::set_end(std::string new_end){
    end = new_end;
}

void Gene::set_strand(char new_strand){
    strand = new_strand;
}


std::string Gene::get_name() const{
    return name;
}

std::string Gene::get_id() const{
    return id;
}

std::string Gene::get_chrom() const{
    return chrom;
}

std::string Gene::get_start() const{
    return start;
}

std::string Gene::get_end() const{
    return end;
}

char Gene::get_strand() const{
    return strand;
}

void Gene::describe() const{
    std::cout << "Gene " << name << " (" << chrom << ":" << start << "-" << end << "," << strand << ")" << "\n";
}