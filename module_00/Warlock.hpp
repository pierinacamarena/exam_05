/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:44:19 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 15:06:06 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WARLOCK_HPP_
#define _WARLOCK_HPP_


#include <iostream>

class Warlock {
	private:
		//data attributes
		std::string	_name;
		std::string _title;
		
		//Constructors
		Warlock();
		Warlock(const Warlock &other);
		//Copy operator
		Warlock & operator=(Warlock const &rhs);

	public:

		//Constructors and Destructors
		Warlock(std::string name, std::string title);
		~Warlock();


		//getters
		std::string const &getName() const;
		std::string const &getTitle() const;

		//setters
		void	setTitle(std::string const &title);
		void	introduce() const;
};

#endif