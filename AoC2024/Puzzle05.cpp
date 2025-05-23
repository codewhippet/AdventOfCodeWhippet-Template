#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle05_2024_Types
{
}

using namespace Puzzle05_2024_Types;

static void Puzzle05_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle05_A: %" PRId64 "\n", answer);
}

static void Puzzle05_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle05_B: %" PRId64 "\n", answer);
}

void Puzzle05_2024(const string& filename)
{
	Puzzle05_A(filename);
	Puzzle05_B(filename);
}
