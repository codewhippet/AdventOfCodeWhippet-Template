#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle22_2021_Types
{
}

using namespace Puzzle22_2021_Types;

static void Puzzle22_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle22_A: %" PRId64 "\n", answer);
}

static void Puzzle22_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle22_B: %" PRId64 "\n", answer);
}

void Puzzle22_2021(const string& filename)
{
	Puzzle22_A(filename);
	Puzzle22_B(filename);
}
