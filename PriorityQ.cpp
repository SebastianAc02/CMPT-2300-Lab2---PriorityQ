#include "PriorityQ.hpp"
#include <iostream>

template<typename T>
PriorityQ<T>::PriorityQ()
{
	front = back = nullptr;
	lvOne = lvTwo = lvThree = lvFour = lvSix = lvSeven = lvEight = lvNine = lvTen = nullptr;
	size = 0;
}


template<typename T>
PriorityQ<T>::~PriorityQ()
{
	clear();
}

template<typename T>
void PriorityQ<T>::enqueue(const T& element, const int lv)
{
	if(front = nullptr)
		front = back = new Node<T>(element);
	else
	{
		back->next = new Node<T>(element);
		back = back->next;
	}
	size++;
} 



