#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 7_2024_Types
{
}

using namespace Puzzle 7_2024_Types;

static void Puzzle 7_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle 7_A: %" PRId64 "\n", answer);
}

static void Puzzle 7_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle 7_B: %" PRId64 "\n", answer);
}

void Puzzle 7_2024(const string& filename)
{
	Puzzle 7_A(filename);
	Puzzle 7_B(filename);
}

