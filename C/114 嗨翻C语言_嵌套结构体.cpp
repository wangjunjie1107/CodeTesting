#include<stdio.h>
#include<stdlib.h>

//在C语言中可以为结构创建别名，你只要在struct关键字前加上typedef,
//并在花括号后写上类型名，就可以在任何地方使用这种新类型。 
//因此 typedef可以用来缩短代码长度，并让代码更容易阅读。
 
typedef struct exercise{
	const char *description;
	float duration;
}exe; 

typedef struct meal{
	const char * ingredients;
	float weight;
}mael; 

typedef struct preferences{
	meal food;    //meal 也是起的别名 
	exe exercise; //exe是起的别名 
}pre;

typedef struct fish{
	const char *name;
	const char *specise;
	int teeth;
	int age;
	pre care; //pre是起的别名 
};

void label(struct fish a)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
			a.name, a.specise, a.teeth, a.age);
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
			a.care.food.weight, a.care.food.ingredients,
			a.care.exercise.description, a.care.exercise.duration);
	
}

int main()
{
	fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2},{"swim in the jacuzzi", 7.5}}};
	label(snappy);
	
	return 0;
}











