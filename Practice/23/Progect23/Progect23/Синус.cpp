#include "Синус.h"
#include <cmath>
#include "Фактериал.h"
int so4et(int a, int b)
{
	return (factor(a)) / ((factor(b)) * (factor(10 - b)));
}

