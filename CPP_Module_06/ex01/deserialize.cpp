/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:01:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/16 19:50:02 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
