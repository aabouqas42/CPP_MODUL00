/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:49:37 by aabouqas          #+#    #+#             */
/*   Updated: 2024/04/17 09:49:40 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {
	private:
		std::string first_name, last_name, nickname, phone_number;
		int index;
	
	public:
		Contact();
		~Contact();
		Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number);
		void	display_contacts();
		void	display_contact();
};

# endif
