/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:44:19 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 21:44:41 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WARLOCK_HPP_
#define _WARLOCK_HPP_


#include <iostream>
#include <map>
#include "SpellBook.hpp"


class ATarget;
class ASpell;


class Warlock {
	private:
		//data attributes
		std::string	_name;
		std::string _title;
		SpellBook	_spellBook;
		// std::map<std::string, ASpell*> _spells;
		
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

		//settersa
		void	setTitle(std::string const &title);

		//extra member function
		void	introduce() const;
		void 	learnSpell(ASpell *new_spell);
		void	forgetSpell(std::string spell_name);
		void	launchSpell(std::string spell_name, ATarget const &atarget);
		
};

#include "ASpell.hpp"
#include "ATarget.hpp"
#endif