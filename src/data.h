#ifndef _DATA_H
#define _DATA_H

#include "otools.h"

class data {
public:

	vector < string > vec_names;				//samples ids in vector
	map < string, int > map_names;				//samples ids in map
	vector < int > fathers;					//father ids
	vector < int > mothers;					//mother ids

	vector < string > chr, id, ref, alt;
	vector < int > pos;

	vector < int > mendel_error;
	vector < int > mendel_total;
  vector <bool> processed;
  bool processing;

	vector < vector < bool > > gen1;
	vector < vector < bool > > gen2;
	vector < vector < bool > > phas;
	vector < vector < bool > > miss;

	data();
	~data();

	void readPedigrees(string);
	void readGenotypes(string, string);
	void writeGenotypes(string);

	bool solveTrio(int locus, int cidx, int fidx, int midx);
	bool solveDuoFather(int locus, int cidx, int pidx);
	bool solveDuoMother(int locus, int cidx, int pidx);
	void solvePedigrees();
private:
  void assign_phased_genotype(int idx, int locus, int g1, int g2, int phased);
};

#endif
