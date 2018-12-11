#include "Chromosome.h"
#include "Gene.h"
#include "Allele.h"
#include <iostream>

using namespace std;

Chromosomes::Chromosomes()
{
}

vector<Gene> Chromosomes::getVectorGene()
{
	return Genes;
}

void Chromosomes::AddGene(Gene g)
{
	Genes.push_back(g);
}

Gene Chromosomes::FindGene(string name)
{
}

/*void Chromosomes::AnalyzeGenotype()
{
} */
void Chromosomes::InputfromFile(ifstream &file)
{
}
void Chromosomes::OutputtoFile(ofstream &of)
{
}
