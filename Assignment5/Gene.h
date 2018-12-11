#include <iostream>
#include <fstream>
#include "Allele.h"
#pragma once

using namespace std;

class Gene
{
  public:
	void writetoFile(ofstream &);
	bool RunUnitTest();
	Gene(Allele newAlleleA, Allele newAlleleB);
	Gene();
	Allele GetExpressedTrait();
	void setName(string newName);
	string getName();
	void setTrait(string newTrait);
	string getTrait();
	void setAlleleA(Allele newAlleleA);
	Allele getAlleleA();
	void setAlleleB(Allele newAlleleB);
	Allele getAlleleB();

  private:
	string Name;
	string traitType;
	Allele AlleleA;
	Allele AlleleB;
};