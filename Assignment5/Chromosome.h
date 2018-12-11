#include <iostream>
#include <fstream>
#include <vector>
#include "Gene.h"
#pragma once

using namespace std;

class Chromosomes
{
  public:
	Chromosomes();
	void AnalyzeGeneotype();
	void InputfromFile(ifstream &file);
	void OutputtoFile(ofstream &of);
	void AddGene(Gene g);
	Gene FindGene(string name);
	bool RunUnitTest;
	vector<Gene> getVectorGene();
	Chromosomes operator+(Chromosomes chromoToAdd);

  private:
	vector<Gene> Genes;
};
