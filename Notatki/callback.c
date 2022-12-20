
void array_init(int *tab, unsigned int size, int (*foo)(void))
{
	for(unsigned int i = 0; i < size; i++)
	{
		tab[i] = foo();
	}
}


int array_fill_zero(void)
{
	return 0;
}

int array_fill_rand(void)
{
	return rand();
}

int array[5]={1};
// EWENTUALNIE MOZE NA PRZYCUKRZYC TYPE DEFEM
typedef int( *NowyTypFunkcji)(int, int);

int oblicz(int a, int b, NowyTypFunkcji foo){ return foo(a,b) *2; }

void main(void)
{

	array_init(array,5,array_fill_zero);

	array_init(array,5,array_fill_rand);
	
}