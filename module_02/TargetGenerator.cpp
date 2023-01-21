/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:30:41 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 23:31:34 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator iter = _targets.begin();
	while (iter != _targets.end())
	{
		delete iter->second;
		iter++;
	}
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *new_target)
{
	if (new_target)
	{
		_targets.insert(std::pair<std::string, ATarget*>(new_target->getType(), new_target->clone()));
	}
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
	std::map<std::string, ATarget*>::iterator iter = _targets.find(name);
	if (iter != _targets.end())
		delete iter->second;
	_targets.erase(name);
}

ATarget *TargetGenerator::createTarget(std::string const &name)
{
	std::map<std::string, ATarget*>::iterator iter = _targets.find(name);
	if (iter != _targets.end())
		return _targets[name];
	return NULL;
}