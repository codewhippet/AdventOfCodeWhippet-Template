#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle 8_2022_Types
{
}

using namespace Puzzle 8_2022_Types;

static void Puzzle 8_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 8_A: %" PRId64 "\n", answer);
}

static void Puzzle 8_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle 8_B: %" PRId64 "\n", answer);
}

void Puzzle 8_2022(const string& filename)
{
	Puzzle 8_A(filename);
	Puzzle 8_B(filename);
}

