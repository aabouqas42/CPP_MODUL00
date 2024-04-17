/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:44:04 by aabouqas          #+#    #+#             */
/*   Updated: 2024/04/17 09:48:19 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number);
		void	display_contacts(int index);
		void	display_contacts_at_index(int index);
};

# endif
