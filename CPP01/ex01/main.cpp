/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:04:07 by brpereir          #+#    #+#             */
/*   Updated: 2024/10/04 12:14:13 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Zombie zombie;
	Zombie *horde;

	horde = zombieHorde(5, "juan");
	for(int i=0; i<5; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
