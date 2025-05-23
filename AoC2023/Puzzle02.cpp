#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle02_2023_Types
{
}

using namespace Puzzle02_2023_Types;

static void Puzzle02_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2023] Puzzle02_A: %" PRId64 "\n", answer);
}

static void Puzzle02_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2023] Puzzle02_B: %" PRId64 "\n", answer);
}

void Puzzle02_2023(const string& filename)
{
	Puzzle02_A(filename);
	Puzzle02_B(filename);
}
