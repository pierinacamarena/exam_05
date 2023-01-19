/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:05:57 by pierina           #+#    #+#             */
/*   Updated: 2023/01/19 18:11:33 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DUMMY_HPP_
#define _DUMMY_HPP_

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();

		Dummy* clone() const;                                   
};

#endif