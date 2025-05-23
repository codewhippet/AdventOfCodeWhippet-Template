#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle07_2022_Types
{
}

using namespace Puzzle07_2022_Types;

static void Puzzle07_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle07_A: %" PRId64 "\n", answer);
}

static void Puzzle07_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle07_B: %" PRId64 "\n", answer);
}

void Puzzle07_2022(const string& filename)
{
	Puzzle07_A(filename);
	Puzzle07_B(filename);
}
