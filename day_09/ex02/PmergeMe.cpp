#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i) {
		lst.insert(atoi(argv[i]));
		sec.insert(atoi(argv[i]));
	}
	struct timespec time_start;
	struct timespec time_end;
	clock_gettime(CLOCK_THREAD_CPUTIME_ID, &time_start);
	sort_list(0, argc - 1);
	clock_gettime(CLOCK_THREAD_CPUTIME_ID, &time_end);
	print_sorted();
	std::cout << calc_time(&time_start, &time_end) << std::endl;
	std::cout << std::endl;
	clock_gettime(CLOCK_THREAD_CPUTIME_ID, &time_start);
	sort_sec(0, argc - 1);
	clock_gettime(CLOCK_THREAD_CPUTIME_ID, &time_end);
	std::cout << calc_time(&time_start, &time_end) << std::endl;
}

void PmergeMe::sort_list(int const left, int const mid, int const right)
{

}

void PmergeMe::sort_list(int const begin, int const end)
{
	if (begin >= end)
		return;
	int mid = begin + (end - begin) / 2;
	sort_list(begin, mid);
	sort_list(mid + 1, end);
	merge_list(begin, mid, end);
}
