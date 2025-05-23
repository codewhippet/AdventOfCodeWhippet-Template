#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 6_2022_Types
{
}

using namespace Puzzle 6_2022_Types;

static void Puzzle 6_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 6_A: %" PRId64 "\n", answer);
}

static void Puzzle 6_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 6_B: %" PRId64 "\n", answer);
}

void Puzzle 6_2022(const string& filename)
{
	Puzzle 6_A(filename);
	Puzzle 6_B(filename);
}

