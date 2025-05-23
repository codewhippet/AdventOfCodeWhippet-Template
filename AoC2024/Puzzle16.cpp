#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle16_2024_Types
{
}

using namespace Puzzle16_2024_Types;

static void Puzzle16_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle16_A: %" PRId64 "\n", answer);
}

static void Puzzle16_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2024] Puzzle16_B: %" PRId64 "\n", answer);
}

void Puzzle16_2024(const string& filename)
{
	Puzzle16_A(filename);
	Puzzle16_B(filename);
}
