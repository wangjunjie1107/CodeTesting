#include<stdio.h>
#include<stdlib.h>

//��C�����п���Ϊ�ṹ������������ֻҪ��struct�ؼ���ǰ����typedef,
//���ڻ����ź�д�����������Ϳ������κεط�ʹ�����������͡� 
//��� typedef�����������̴��볤�ȣ����ô���������Ķ���
 
typedef struct exercise{
	const char *description;
	float duration;
}exe; 

typedef struct meal{
	const char * ingredients;
	float weight;
}mael; 

typedef struct preferences{
	meal food;    //meal Ҳ����ı��� 
	exe exercise; //exe����ı��� 
}pre;

typedef struct fish{
	const char *name;
	const char *specise;
	int teeth;
	int age;
	pre care; //pre����ı��� 
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











