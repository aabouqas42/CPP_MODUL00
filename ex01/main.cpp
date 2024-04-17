/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:48:22 by aabouqas          #+#    #+#             */
/*   Updated: 2024/04/17 09:52:22 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	valide_number(std::string phone_number)
{
	int i = 0;
	if (phone_number[i] == '+')
		i++;
	while (phone_number[i] != '\0')
	{
		if (isnumber(phone_number[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	valide_name(std::string String) {
	int	i = 0;
	while (String[i]) {
		if (!isalpha(String[i]))
			return 0;
	}
	return 1;
}

void f(int &i)
{
	i = 100;
}

int main() {

	std::string	command, first_name, last_name, nickname, phone_number, index_s;
	PhoneBook	phonebook;
	long long	contacts_num = 0;
	int			index_i = 0;
	
	while (1)
	{
		std::cout << "Enter Command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
		if (command == "ADD") {
			std::cout << "Enter your first name : ";
			std::getline(std::cin, first_name);
			if (first_name == "")
				continue ;
			std::cout << "Enter your last name : ";
			std::getline(std::cin, last_name);
			if (last_name == "")
				continue ;
			std::cout << "Enter a nickname : ";
			std::getline(std::cin, nickname);
			if (nickname == "")
				continue ;
			std::cout << "Enter your phone number : ";
			std::getline(std::cin, phone_number);
			if (phone_number == "")
				continue ;
			if (!valide_number(phone_number))
			{
				std::cout << "Error number \n";
				continue ;
			}
			phonebook.add_contact(contacts_num, first_name, last_name, nickname, phone_number);
			std::cout << "\n ----------------------------\n";
			std::cout << "| Contact added successfully |\n";
			std::cout << " ----------------------------\n\n";
			contacts_num++;
		} else if (command == "SEARCH") {
			phonebook.display_contacts(contacts_num);
			if (contacts_num == 1)
				continue ;
			std::getline(std::cin, index_s);
			if (index_s == "")
			{
				std::cout << "Enter an index \n";
				continue ;
			}
			index_i = atoi(index_s.c_str());
			if (index_i > 7)
			{
				std::cout << "The index is out of range\n";
				continue ;
			}
			if (index_i > contacts_num)
			{
				std::cout << "The index is unset yet";
				continue ;
			}
			if (isnumber(index_s[0]) && valide_number(index_s))
				phonebook.display_contacts_at_index(index_i);
			else
				std::cout << "Error : invalide index\n";
		} else {
			std::cout << "Error : command not found\n";
		}
	}
	return 0;
}
