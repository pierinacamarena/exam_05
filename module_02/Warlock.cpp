/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:09:07 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 23:32:19 by pierina          ###   ########.fr       */
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
	_spellBook.learnSpell(new_spell);
}

void Warlock::forgetSpell(std::string spell_name)
{
	_spellBook.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &atarget)
{
	ATarget const *test = NULL;

	if (test == &atarget)
	{
		return;
	}
	ASpell *spell = _spellBook.createSpell(spell_name);
	if (spell)
		spell->launch(atarget);
}
