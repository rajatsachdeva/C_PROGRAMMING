#include <stdio.h>
#include <stdlib.h>

struct person {
	char *name;
	int age;
};

void print (struct person *p)
{
	printf ("Name=%s age=%d\n", p->name, p->age);
}

int main ()
{
	struct person **list;
	int i;
	list = (struct person **) malloc (sizeof(struct person*) );
	printf ("Heap Address list : %u\n", list);
	for (i=0; i<3; i++) {
		list [i] = (struct person*) malloc (sizeof(struct person));
	}

	printf ("Heap Address list value: %u\n", *list);
	list[0]->name = "R2-D2";
	list[0]->age = 609;
	list[1]->name = "Optimus Prime";
	list[1]->age = 2700;
	list[2]->name = "Wall-E";
	list[2]->age = 210;
	
	for (i=0; i < 3; i++){
		print(list[i]);
	}
	for (i=0; i < 3; i++){
		printf ("Heap Address %d : %u\n", (i+1), list[i]);
	}
	return 0;
}

