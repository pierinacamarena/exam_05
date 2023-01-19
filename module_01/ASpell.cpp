/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:50:37 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 17:18:27 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const & copy) : _name(copy._name), _effects(copy.getEffects())
{
	*this = copy;	
}

ASpell::~ASpell() {}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return *this;
}

std::string const &ASpell::getName() const
{
	return _name;
}

std::string const &ASpell::getEffects() const
{
	return _effects;
}

void ASpell::launch(ATarget const &atarget) const
{
	atarget.getHitBySpell(*this);
}