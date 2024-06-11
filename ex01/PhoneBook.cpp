/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:43:53 by aabouqas          #+#    #+#             */
/*   Updated: 2024/04/17 09:49:20 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::add_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number){
	if (index >= 8)
		index = (index + 2) % 10;
	PhoneBook::contacts[index] = Contact(index, first_name, last_name, nickname, phone_number);
}

void	PhoneBook::display_contacts(int index) {
	int i = 0;

	while (i < ((index <= 8) ? index : 8)) {
		this->contacts[i].display_contacts();
		i++;
	}
}

void	PhoneBook::display_contacts_at_index(int index) {
	PhoneBook::contacts[index].display_contact();
}

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}

