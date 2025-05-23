#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle18_2021_Types
{
}

using namespace Puzzle18_2021_Types;

static void Puzzle18_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle18_A: %" PRId64 "\n", answer);
}

static void Puzzle18_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle18_B: %" PRId64 "\n", answer);
}

void Puzzle18_2021(const string& filename)
{
	Puzzle18_A(filename);
	Puzzle18_B(filename);
}
