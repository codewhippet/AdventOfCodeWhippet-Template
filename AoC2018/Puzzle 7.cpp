#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 7_2018_Types
{
}

using namespace Puzzle 7_2018_Types;

static void Puzzle 7_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2018] Puzzle 7_A: %" PRId64 "\n", answer);
}

static void Puzzle 7_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2018] Puzzle 7_B: %" PRId64 "\n", answer);
}

void Puzzle 7_2018(const string& filename)
{
	Puzzle 7_A(filename);
	Puzzle 7_B(filename);
}

