/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:26:30 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 17:58:13 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FWOOSH_
#define _FWOOSH_

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	
		Fwoosh();
		~Fwoosh();

		Fwoosh* clone() const;
};

#endif