#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle03_2020_Types
{
}

using namespace Puzzle03_2020_Types;

static void Puzzle03_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2020] Puzzle03_A: %" PRId64 "\n", answer);
}

static void Puzzle03_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2020] Puzzle03_B: %" PRId64 "\n", answer);
}

void Puzzle03_2020(const string& filename)
{
	Puzzle03_A(filename);
	Puzzle03_B(filename);
}
