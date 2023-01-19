/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:17:40 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 18:17:56 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ATARGET_HPP_
#define _ATARGET_HPP_

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string _type;		
	
	public:

		//Constructor, Destructor, Copy Operator
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &copy);

		virtual ~ATarget();

		ATarget &operator=(ATarget const &rhs);

		//getter
		std::string const &getType() const;

		//pure method
		virtual ATarget* clone() const = 0;

		void getHitBySpell(ASpell const &aspell) const;
		//test by adding const and removing const
};

#endif