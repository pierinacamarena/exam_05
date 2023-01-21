/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:23:34 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 22:30:33 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TARGETGENERATOR_HPP_
#define _TARGETGENERATOR_HPP_

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &rhs);
		std::map<std::string, ATarget*> _targets;
	
	public:
		TargetGenerator();
		~TargetGenerator();
		
		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const &);
		ATarget *createTarget(std::string const &);
};

#endif