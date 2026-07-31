
template <typename Container>
int	parseToCountainer(int argc, char *argv[], Container &out)
{
	for (int i = 1; i < argc; i++)
	{
		char *end;
		long value = std::strtol(argv[i], &end, 10);

		if (*end != '\0' || value <= 0)
		{
			std::cerr << "Error" << std::endl;
			return -1;
		}
		out.push_back(static_cast<int>(value));
	}
	return (0);
}

template <typename Container>
void	printContainer(const std::string &label, const Container &container)
{
	std::cout << label;
	for (typename Container::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}