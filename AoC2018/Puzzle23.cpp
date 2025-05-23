#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle23_2018_Types
{
}

using namespace Puzzle23_2018_Types;

static void Puzzle23_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2018] Puzzle23_A: %" PRId64 "\n", answer);
}

static void Puzzle23_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2018] Puzzle23_B: %" PRId64 "\n", answer);
}

void Puzzle23_2018(const string& filename)
{
	Puzzle23_A(filename);
	Puzzle23_B(filename);
}
