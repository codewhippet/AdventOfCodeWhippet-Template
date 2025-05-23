#include "stdafx.h"

using namespace std;

static string dummy =
R"()";

namespace Puzzle11_2023_Types
{
}

using namespace Puzzle11_2023_Types;

static void Puzzle11_A(const string &filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2023] Puzzle11_A: %" PRId64 "\n", answer);
}

static void Puzzle11_B(const string& filename)
{
	(void)filename;
	ifstream input(filename);
	//istringstream input(dummy);

	int64_t answer = 0;

	printf("[2023] Puzzle11_B: %" PRId64 "\n", answer);
}

void Puzzle11_2023(const string& filename)
{
	Puzzle11_A(filename);
	Puzzle11_B(filename);
}
