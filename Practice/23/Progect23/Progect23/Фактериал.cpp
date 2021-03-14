#include "Фактериал.h"
int factor(int a)
{
		int i = 0, d = 2;
		while (d <= a) {
			i = i * d;
			d++;
		}
		return i;
}
