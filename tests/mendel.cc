#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() 
//#define CATCH_CONFIG_FAST_COMPILE
#include "catch.hpp"
#include "data.h"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
  string gen = "../../tests/test_data.vcf.gz";
  string reg = "1";
  string fam = "../../tests/test_data.fam";
  string out = "../../tests/phased.vcf.gz";
	data D;
	D.readGenotypes(gen, reg);
	D.readPedigrees(fam);
	D.solvePedigrees();
	D.writeGenotypes(out);

}


