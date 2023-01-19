/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:50:43 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 16:17:12 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ASPELL_HPP_
#define _ASPELL_HPP_
#include <iostream>

class ASpell {
	
	private:
	
		//data attributes
		std::string _name;
		std::string _effects;
	
	public:

		//Constructors, Destructor, copy operator
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const & copy);
		
		virtual ~ASpell();
		
		ASpell& operator=(ASpell const & rhs);
		
		//getters
		std::string const getName() const;
		std::string const getEffects() const;

		//pure method
		virtual ASpell* clone() = 0;
		
};

#endif