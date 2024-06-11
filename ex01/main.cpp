/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:48:22 by aabouqas          #+#    #+#             */
/*   Updated: 2024/06/10 19:48:57 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	valide_number(std::string phone_number)
{
	int i = 0;
	if (phone_number[i] == '+')
		i++;
	while (phone_number[i] != '\0')
	{
		if (isnumber(phone_number[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

int	valide_name(std::string String) {
	int	i = 0;
	while (String[i]) {
		if (!isalpha(String[i]))
			return 0;
	}
	return 1;
}

int	check_index(std::string index_s, int contacts_num)
{
	int	index_i;

	index_i = atoi(index_s.c_str());
	if (index_i > 7)
	{
		std::cout << "The index is out of range\n";
		return -1;
	}
	if (index_i > contacts_num)
	{
		std::cout << "The index is unset yet";
		return -1;
	}
	return (index_i);
}

int	add(PhoneBook phonebook, size_t contacts_num)
{
	std::string	first_name, last_name, nickname, phone_number;

	std::cout << "Enter your first name : ";
	std::getline(std::cin, first_name);
	if (first_name == "")
		return -1;
	std::cout << "Enter your last name : ";
	std::getline(std::cin, last_name);
	if (last_name == "")
		return -1;
	std::cout << "Enter a nickname : ";
	std::getline(std::cin, nickname);
	if (nickname == "")
		return -1;
	std::cout << "Enter your phone number : ";
	std::getline(std::cin, phone_number);
	if (phone_number == "")
		return -1;
	if (valide_number(phone_number) == false)
	{
		std::cout << "Error number \n";
		return -1;
	}
	phonebook.add_contact (
		contacts_num,
		first_name,
		last_name,
		nickname,
		phone_number
	);
	std::cout << "\n ----------------------------\n";
	std::cout << "| Contact added successfully |\n";
	std::cout << " ----------------------------\n\n";
}

int	search(PhoneBook phonebook, int contacts_num)
{
	std::string	index_s;
	int			index_i;

	while (!std::cin.eof())
	{
		phonebook.display_contacts(contacts_num);
		if (contacts_num == 1)
			continue ;
		std::getline(std::cin, index_s);
		if (index_s == "")
		{
			std::cout << "Enter an index \n";
			continue ;
		}
		index_i = check_index(index_s, contacts_num);
		if (index_i == -1)
			continue ;
		if (isnumber(index_s[0]) && valide_number(index_s))
		{
			phonebook.display_contacts_at_index(index_i);
			return 0;
		}
		else
			std::cout << "Error : invalide index\n";
	}
}

int main() {

	std::string	command;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	index_s;
	PhoneBook	phonebook;
	size_t		contacts_num = 0;
	int			index_i = 0;

	while (std::cin.eof() != 0)
	{
		std::cout << "Enter Command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		if (command == "ADD") {
			add(phonebook, contacts_num);
			contacts_num++;
		} else if (command == "SEARCH") {
			search(phonebook, contacts_num);
		} else {
			std::cout << "Error : command not found\n";
		}
	}
	return 0;
}
