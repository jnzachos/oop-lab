#pragma once
#include <string>

class Gene {

private:
    std::string name;
    std::string id;
    std::string chrom;
    std::string start;
    std::string end;
    char strand;

public:

    // Gene(std::string name, int id, std::string chrom, std::string start, std::string end, char strand);

    void set_name(std::string name);
    void set_id(std::string id);
    void set_chrom(std::string chain);
    void set_start(std::string start);
    void set_end(std::string end);
    void set_strand(char strand);

    std::string get_name() const;
    std::string get_id() const;
    std::string get_chrom() const;
    std::string get_start() const;
    std::string get_end() const;
    char get_strand() const;

    void describe() const;

};