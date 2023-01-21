/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:09:07 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 20:15:25 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done." << std::endl;
	std::map<std::string, ASpell*>::iterator it = _spells.begin();
	while(it != _spells.end())
	{
		delete it->second;
		it++;
	}
	_spells.clear();
}

std::string const &Warlock::getName() const
{
	return (_name);
}

std::string const &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *new_spell)
{
	if (new_spell)
		_spells.insert(std::pair<std::string, ASpell*>(new_spell->getName(), new_spell->clone()));
}

void Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell*>::iterator iter = _spells.find(spell_name);
	if (iter != _spells.end())
	{
		delete iter->second;
		_spells.erase(iter);
	}
}

void Warlock::launchSpell(std::string spell_name, ATarget const &atarget)
{
	std::map<std::string, ASpell*>::iterator iter = _spells.find(spell_name);
	if (iter != _spells.end())
		iter->second->launch(atarget);
}