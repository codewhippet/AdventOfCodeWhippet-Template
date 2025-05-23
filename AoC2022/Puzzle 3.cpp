#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 3_2022_Types
{
}

using namespace Puzzle 3_2022_Types;

static void Puzzle 3_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 3_A: %" PRId64 "\n", answer);
}

static void Puzzle 3_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 3_B: %" PRId64 "\n", answer);
}

void Puzzle 3_2022(const string& filename)
{
	Puzzle 3_A(filename);
	Puzzle 3_B(filename);
}

