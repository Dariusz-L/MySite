#pragma once

#include <initializer_list>

void F()
{
	auto arrayOfPtrs = new int[10];

	// #include <initializer_list>
	auto initializerList = { 1, 2, 3, 4 };
}