/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:21:16 by pierina           #+#    #+#             */
/*   Updated: 2023/01/21 20:29:54 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POLYMORPH_
#define _POLYMORPH_

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	
		Polymorph();
		~Polymorph();

		Polymorph* clone() const;
};

#endif