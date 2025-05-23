#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle15_2015_Types
{
}

using namespace Puzzle15_2015_Types;

static void Puzzle15_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2015] Puzzle15_A: %" PRId64 "\n", answer);
}

static void Puzzle15_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2015] Puzzle15_B: %" PRId64 "\n", answer);
}

void Puzzle15_2015(const string& filename)
{
	Puzzle15_A(filename);
	Puzzle15_B(filename);
}
