/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:20:53 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 20:27:53 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIREBALL_
#define _FIREBALL_

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	
		Fireball();
		~Fireball();

		Fireball* clone() const;
};

#endif