/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:49:28 by aabouqas          #+#    #+#             */
/*   Updated: 2024/04/17 10:02:51 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number) {
	this->index = index;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
}

void	Contact::display_contacts() {
	std::cout << "\n-------------------------------------\n";
	std::cout << first_name + " | " + last_name + " | " + nickname + " | " << phone_number;
	std::cout << "\n-------------------------------------\n";
}

void	Contact::display_contact() {
	std::cout << "\n---------------------------\n";
	std::cout << "| First Name : " + first_name + "|";
	std::cout << "\n---------------------------\n";
	std::cout << "| Last Name : " + last_name + "|";
	std::cout << "\n---------------------------\n";
	std::cout << "| Nick Name : " + nickname + "|";
	std::cout << "\n---------------------------\n";
	std::cout << "| Phone Number : " + phone_number + "|";
	std::cout << "\n---------------------------\n";
}

Contact::Contact()
{
	
}

Contact::~Contact() {

}
