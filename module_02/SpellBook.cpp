/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:22:19 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 23:31:52 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator iter = _spellBook.begin();
	while(iter != _spellBook.end())
	{
		delete iter->second;
		iter++;
	}
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_spellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
	}
}

void SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator iter = _spellBook.find(name);
	if (iter != _spellBook.end())
	{
		delete iter->second;
		_spellBook.erase(iter);
	}
}

// * ASpell* createSpell(string const &), that receives a string corresponding to
//   the name of a spell, creates it, and returns it.
ASpell* SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell*>::iterator iter = _spellBook.find(name);
	
	if (iter != _spellBook.end())
		return _spellBook[name];
	return NULL;
}
