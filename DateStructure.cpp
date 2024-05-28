// DateStructure
// 자료구조
/*STACK - LIFO: Last In First Out 후입선출(push, pop)
QUEUE - FIFO : First In first out 선입선출(enqueue, dequeue)
동일한 자료들을 어떻게 활용

Dynamaic Data Structure (동적 자료구조)
	추가나 삭제가 필요한 원소들만 제어
		순서(Sequential)
		-포인터*/
#include <iostream>

void InitialScreen()
{
	std::cout << "----- " << "STACK" << " -----" << std::endl;
	std::cout << "  1.Push, 2. Pop " << std::endl;
	std::cout << "-----------------" << std::endl;
}

void Print(int array[], int count)
{
	std::cout << "----- " << "STACK" << " -----" << std::endl;
	for (int i = count; i >= 0; --i)
	{
		std::cout << array[i] << std::endl;
	}
	std::cout << "-----------------" << std::endl;
}

void push(int array[], int count,int NUM_SIZE)
{
	int input{};
	std::cout << " Input Push number :";
	std::cin >> input;

	array[count] = input;
	

}

int main()
{
	const int NUM_SIZE{10};
	int processing{};
	int array[NUM_SIZE]{};
	int count{-1};

	InitialScreen();
	while (1)
	{
		std::cin >> processing;
		if (processing == 1)
		{
			count++;
			if (count < NUM_SIZE)
			{
				push(array, count, NUM_SIZE);
				Print(array, count);
			}
			else
			{
				count--;
				Print(array, count);
				std::cout << "배열이 꽉 찼습니다. 2 pop 해주세요" << std::endl;
			}
			
		}
		else if (processing == 2)//pop
		{
			if (count > -1)
			{
				count--;
				Print(array, count);
			}
			else
			{
				Print(array, count);

				std::cout << "배열이 비어 있습니다. 1 push 해주세요" << std::endl;
			}
			
		}
		else
		{
			Print(array, count);
			std::cout << "다시 입력해주세요.(1 or 2)" << std::endl;
		}
	}
	
}



/*
자기 차모 구조체
struct Bullet
{
	int demage;
	float speed;
	float size;

	Bullet* pNext
}
int main()
{
	Bullet* a = new Bullet;
	Bullet* b = new Bullet;

	a->pNext = b;
	포인터 구조체: ->
}

Single Linked List(단방향 목록)*/

