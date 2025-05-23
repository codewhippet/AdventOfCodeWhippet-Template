#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 9_2017_Types
{
}

using namespace Puzzle 9_2017_Types;

static void Puzzle 9_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2017] Puzzle 9_A: %" PRId64 "\n", answer);
}

static void Puzzle 9_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2017] Puzzle 9_B: %" PRId64 "\n", answer);
}

void Puzzle 9_2017(const string& filename)
{
	Puzzle 9_A(filename);
	Puzzle 9_B(filename);
}

