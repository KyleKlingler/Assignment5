#include "Gene.h"
#include "Allele.h"
#include <iostream>

using namespace std;

Gene::Gene(Allele newAlleleA, Allele newAlleleB)
{
	AlleleA = newAlleleA;
	AlleleB = newAlleleB;
}

Gene::Gene()
{
}

void Gene::setName(string newName)
{
	Name = newName;
}

string Gene::getName()
{
	return Name;
}

void Gene::writetoFile(ofstream &of)
{
	of << Name << "," << traitType;
	AlleleA.WriteAlleletoFile(of);
	AlleleB.WriteAlleletoFile(of);
	of << endl;
}

Allele Gene::getAlleleA()
{
	return AlleleA;
}

void Gene::setAlleleA(Allele newAlleleA)
{
	AlleleA = newAlleleA;
}

Allele Gene::getAlleleB()
{
	return AlleleB;
}
void Gene::setAlleleB(Allele newAlleleB)
{
	AlleleB = newAlleleB;
}

Allele Gene::GetExpressedTrait()
{
	if (AlleleA.getType() == "Dominant")
	{
		return AlleleA;
	}
	else
	{
		return AlleleB;
	}
}