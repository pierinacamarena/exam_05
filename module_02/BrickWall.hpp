/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:31:57 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 20:32:20 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRICKWALL_HPP_
#define _BRICKWALL_HPP_

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();

		BrickWall* clone() const;                                   
};

#endif