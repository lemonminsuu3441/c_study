#include <stdio.h>

int main()
{
	char vc = 'A', *pc;
	int vi = 123, *pi;
	double vd = 12.345, *pd;

	pc = &vc;
	pi = &vi;
	pd = &vd;

	printf("\n pc-1 = %u, pc = %u, pc+1 = %u", pc - 1, pc, pc + 1);
	printf("\n pi-1 = %u, pi = %u, pi+1 = %u", pi - 1, pi, pi + 1);
	printf("\n pd-1 = %u, pd = %u, pd+1 = %u", pd - 1, pd, pd + 1);

	return 0;
}