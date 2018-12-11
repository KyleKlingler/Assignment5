/*	Project:    Assignment 5
	Name:       Kyle Klingler
    Partner:
    Class:      CSC 1810 - Section 2
*/

#include <iostream>
#include <string>
#include <vector>
#include "Allele.h"
#include "Chromosome.h"
#include "Gene.h"
using namespace std;

void createChromo(Chromosomes &myChromo)
{
	Chromosomes mychromo;
	Gene myGene;
	string GeneName;
	string GeneTrait;
	string AlleleVariant1;
	string AlleleType1;
	string AlleleSeq1;
	string AlleleVariant2;
	string AlleleType2;
	string AlleleSeq2;
	cout << "What is the Name of the Gene?" << endl;
	cin >> GeneName;
	myGene.setName(GeneName);

	cout << "What is the Gene Trait?" << endl;
	cin >> GeneTrait;

	myGene.setName(GeneTrait);

	cout << "What is Allele 1 Variant?" << endl;
	cin >> AlleleVariant1;

	myGene.setName(AlleleVariant1);

	cout << "What is Allele 1 Type?" << endl;
	cin >> AlleleType1;

	myGene.setName(AlleleType1);

	cout << "What is Allele 1 Nucleotide Sequence?" << endl;
	cin >> AlleleSeq1;

	myGene.setName(AlleleSeq1);

	cout << "What is Allele 2 Variant?" << endl;
	cin >> AlleleVariant2;

	myGene.setName(AlleleVariant2);

	cout << "What is Allele 2 Type?" << endl;
	cin >> AlleleType2;

	myGene.setName(AlleleType2);

	cout << "What is Allele 2 Nucleotide Sequence?" << endl;
	cin >> AlleleSeq2;

	myGene.setName(AlleleSeq2);

	mychromo.AddGene(myGene);
}

int MenuFunction()
{
	cout << "Menu" << endl;
	cout << "1-Create Chromosome" << endl;
	cout << "2-Analyze Chromosome" << endl;
	cout << "3-Output Chromosome to file" << endl;
	cout << "4-Input Chromosome to file" << endl;
	cout << "5-Combine Chromosomes" << endl;
	cout << "6-Quit" << endl;

	int selectChoice;
	cout << "Please enter user choice: " << endl;
	cin >> selectChoice;

	string post;

	while (selectChoice != 5)
	{
		if (selectChoice == 1)
		{
			Chromosomes myChromo;
			createChromo(myChromo);
			cout << "Please enter user choice: " << endl;
			cin >> selectChoice;
		}
		else if (selectChoice == 2)
		{
			//AnalyzeChromo(Gene);
			cout << "Please enter user choice: " << endl;
			cin >> selectChoice;
		}
		else if (selectChoice == 3)
		{
			//	NameofFunction(post);
			cout << "Please enter user choice: " << endl;
			cin >> selectChoice;
		}
		else if (selectChoice == 4)
		{
			//	NameofFunction(post);
			cout << "Please enter user choice: " << endl;
			cin >> selectChoice;
		}
		else if (selectChoice == 5)
		{
			//	NameofFunction(post);
			cout << "Please enter user choice: " << endl;
			cin >> selectChoice;
		}
		else if (selectChoice == 6)
		{
			cout << "Thank You-GoodBye" << endl;
			break;
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	MenuFunction();

	/* UNIT TEST
	string seq = "TTT";
	string name = "Blonde";
	string type = "Recessive";
	Allele a(seq, name, type);
	cout << a.getType() << endl; */

	// This causes the program to pause at its completion.

	char c;
	cout << "Hit enter to exit:";
	cin.get(c);

	return 0;
}