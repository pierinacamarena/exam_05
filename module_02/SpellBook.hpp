/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:22:07 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 21:04:23 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPELLBOOK_HPP_
#define _SPELLBOOK_HPP_

#include <iostream>
#include <map>
#include "ASpell.hpp"

/*
Now, make a SpellBook class, in canonical form, that can't be copied or
instantiated by copy. It will have the following functions:

* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.
*/

class SpellBook
{
	private:
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &rhs);
		std::map<std::string, ASpell*> _spellBook;

	public:
		SpellBook();
		~SpellBook();
		
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};
#endif