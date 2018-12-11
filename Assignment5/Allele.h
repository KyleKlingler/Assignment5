#include <iostream>
#include <fstream>
#pragma once

using namespace std;

class Allele
{
  public:
	bool RunUnitTest;
	Allele();
	Allele(string newSeq, string newName, string newType);
	string getType();
	void WriteAlleletoFile(ofstream &of);
	string getName();
	void setName(string newName);
	string getSeq();
	void setType(string newType);
	void setSeq(string newSeq);

  private:
	string nucleotideSequence;
	string variantName;
	string variantType;
};
