#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle12_2016_Types
{
}

using namespace Puzzle12_2016_Types;

static void Puzzle12_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2016] Puzzle12_A: %" PRId64 "\n", answer);
}

static void Puzzle12_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2016] Puzzle12_B: %" PRId64 "\n", answer);
}

void Puzzle12_2016(const string& filename)
{
	Puzzle12_A(filename);
	Puzzle12_B(filename);
}
