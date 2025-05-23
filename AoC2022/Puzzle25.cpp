#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle25_2022_Types
{
}

using namespace Puzzle25_2022_Types;

static void Puzzle25_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2022] Puzzle25_A: %" PRId64 "\n", answer);
}

void Puzzle25_2022(const string& filename)
{
	Puzzle25_A(filename);
}
