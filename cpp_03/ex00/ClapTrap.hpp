/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:00:05 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:23:59 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrapCopie);
        ~ClapTrap(void);
        
        ClapTrap &operator= (const ClapTrap &clapAssigne);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(std::string name);
        
    private:
        std::string         _name;
        long long int       _hitPoints;
        long long int       _energyPoints;
        long long int       _attackDamage;
};

#endif