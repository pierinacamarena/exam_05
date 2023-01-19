/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:11:42 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 18:17:38 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Dummy Practice"){}

Dummy::~Dummy() {}

Dummy* Dummy::clone() const
{
	Dummy* dummy_clone = new Dummy();
	return (dummy_clone);
}