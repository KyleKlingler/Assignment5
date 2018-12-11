#include "Allele.h"
#include <iostream>
#include <fstream>

using namespace std;

Allele::Allele()
{
}

Allele::Allele(string newSeq, string newName, string newType)
{
	nucleotideSequence = newSeq;
	variantName = newName;
	variantType = newType;
}

string Allele::getName()
{
	return variantName;
}
void Allele::setName(string newName)
{
	variantName = newName;
}
string Allele::getType()
{
	return variantType;
}
void Allele::setType(string newType)
{
	variantType = newType;
}
string Allele::getSeq()
{
	return nucleotideSequence;
}
void Allele::setSeq(string newSeq)
{
	nucleotideSequence = newSeq;
}

void Allele::WriteAlleletoFile(ofstream &of)
{
	of << variantName << "," << variantType << "," << nucleotideSequence;
}