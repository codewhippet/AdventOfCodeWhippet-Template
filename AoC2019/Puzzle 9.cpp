#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 9_2019_Types
{
}

using namespace Puzzle 9_2019_Types;

static void Puzzle 9_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2019] Puzzle 9_A: %" PRId64 "\n", answer);
}

static void Puzzle 9_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2019] Puzzle 9_B: %" PRId64 "\n", answer);
}

void Puzzle 9_2019(const string& filename)
{
	Puzzle 9_A(filename);
	Puzzle 9_B(filename);
}

