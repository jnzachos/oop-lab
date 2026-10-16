#include <iostream>
#include "gene.h"
#include "protein.h"


int main(){

    Protein p1;

    p1.set_name("PTEN");
    p1.set_id("ENSP1234");
    p1.set_chain("MNAAATARATLL");

    p1.describe();

    p1.length();

    Gene g1;

    g1.set_name("BRCA1");
    g1.set_id("ENSG1234");
    g1.set_chrom("chr1");
    g1.set_start("43044295");
    g1.set_end("43170245");
    g1.set_strand('+');

    g1.describe();

    return 0;
}