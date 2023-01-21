/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:32:38 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 23:30:55 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall"){}

BrickWall::~BrickWall() {}

BrickWall* BrickWall::clone() const
{
	BrickWall* brickwall_clone = new BrickWall();
	return (brickwall_clone);
}