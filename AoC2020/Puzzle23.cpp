#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle23_2020_Types
{
}

using namespace Puzzle23_2020_Types;

static void Puzzle23_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2020] Puzzle23_A: %" PRId64 "\n", answer);
}

static void Puzzle23_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2020] Puzzle23_B: %" PRId64 "\n", answer);
}

void Puzzle23_2020(const string& filename)
{
	Puzzle23_A(filename);
	Puzzle23_B(filename);
}
