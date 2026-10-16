#pragma once
#include <string>

class Protein {

private:
    std::string name;
    std::string id;
    std::string chain;


public:

    // Protein(std::string name, int id, std::string chain);

    void set_name(std::string name);
    void set_id(std::string id);
    void set_chain(std::string chain);

    std::string get_name() const;
    std::string get_id() const;
    std::string get_chain() const;

    void describe() const;

    void length() const;

};