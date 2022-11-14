/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:52:29 by rliu              #+#    #+#             */
/*   Updated: 2022/11/14 18:46:54 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP


class Convert{
        public:
                Convert(void);
                Convert(std::string data);
                Convert(Convert const &tocopy);
                ~Convert(void);

                operator char(void);
                operator int(void);
                operator float(void);
                operator double(void);
            
                listDataType(std::string data);

                class noDisplayException: public std::exception{
                        public:
                                virtual char const *what() const throw();
                };
                class impossibleException: public std::excetion{
                        public:
                                virtual char const *what() const thorw();
                }
            
                Convert &operator=(Convert const &toassigne);
        private:
                std::string data;
};

#endif