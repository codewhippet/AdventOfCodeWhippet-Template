#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle08_2021_Types
{
}

using namespace Puzzle08_2021_Types;

static void Puzzle08_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle08_A: %" PRId64 "\n", answer);
}

static void Puzzle08_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2021] Puzzle08_B: %" PRId64 "\n", answer);
}

void Puzzle08_2021(const string& filename)
{
	Puzzle08_A(filename);
	Puzzle08_B(filename);
}
