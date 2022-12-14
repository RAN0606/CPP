/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:10:41 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:22:44 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ctA("A");
    ClapTrap ctB(ctA);
    ClapTrap ctC;

    ctC = ctA;
    ctA.takeDamage(1);
    for (int i = 0; i< 7; i++)
    ctA.attack("aaaaaaaaaa");
    for (int i = 0; i < 6 ; i++)
    ctA.beRepaired(2);
    
    ctB.takeDamage(1);
    for (int i = 0; i< 7; i++)
    ctB.attack("bbbbbbbbbb");
    for (int i = 0; i < 6 ; i++)
    ctB.beRepaired(2);

    for (int i = 0; i< 7; i++)
    ctC.attack("cccccccccc");
    for (int i = 0; i < 6 ; i++)
    ctC.beRepaired(2);
    
    return (0);
}