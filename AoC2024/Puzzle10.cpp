#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle10_2024_Types
{
}

using namespace Puzzle10_2024_Types;

static void Puzzle10_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle10_A: %" PRId64 "\n", answer);
}

static void Puzzle10_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle10_B: %" PRId64 "\n", answer);
}

void Puzzle10_2024(const string& filename)
{
	Puzzle10_A(filename);
	Puzzle10_B(filename);
}
