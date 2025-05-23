#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 1_2019_Types
{
}

using namespace Puzzle 1_2019_Types;

static void Puzzle 1_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2019] Puzzle 1_A: %" PRId64 "\n", answer);
}

static void Puzzle 1_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2019] Puzzle 1_B: %" PRId64 "\n", answer);
}

void Puzzle 1_2019(const string& filename)
{
	Puzzle 1_A(filename);
	Puzzle 1_B(filename);
}

