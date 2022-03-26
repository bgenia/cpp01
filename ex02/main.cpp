/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenia <bgenia@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:46:04 by bgenia            #+#    #+#             */
/*   Updated: 2022/03/26 19:48:27 by bgenia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout
        << &string << std::endl
        << stringPTR << std::endl
        << &stringREF << std::endl;

    std::cout
        << string << std::endl
        << *stringPTR << std::endl
        << stringREF << std::endl;
}
