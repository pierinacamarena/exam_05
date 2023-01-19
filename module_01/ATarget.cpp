/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:14:02 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 17:24:05 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type) : _type(type) {}

ATarget::ATarget(ATarget const &copy) : _type(copy._type)
{
	*this = copy;
}

ATarget::~ATarget(){}

ATarget &ATarget::operator=(ATarget const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

//getter
std::string const &ATarget::getType() const
{
	return _type;
}

void ATarget::getHitBySpell(ASpell const &aspell) const
{
	std::cout << _type << "has been " << aspell.getEffects() << "!" << std::endl;
}
