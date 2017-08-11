#include <cstdio>

#include <iostream>
#include <string>

#include "rxcpp/rx.hpp"


namespace rx
{
	using namespace rxcpp;
	using namespace rxcpp::sources;
	using namespace rxcpp::operators;
	using namespace rxcpp::util;
}
using namespace rx;

int main()
{
	std::cout << "start" << std::endl;

	rx::sources::range(1, 6)
		.take(3)
		.subscribe(
			[](int i) { std::cout << i << std::endl; },
			[]() { std::cout << "completed" << std::endl; });

	std::cout << "end" << std::endl;

	{
		int a;
		std::cin >> a;
	}


	return 0;
}