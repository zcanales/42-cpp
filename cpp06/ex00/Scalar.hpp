/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:22:54 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/24 14:22:56 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>

class Scalar{
    private:
        std::string _input;
        std::string _type;
        int         _len;
        int         _idxNumber;
        int         _idxDecimal;
        int         _idxFloat;
        int         _idxNegative;
        int         _idxPositive;
    public:
        Scalar();
        Scalar(std::string input);
        ~Scalar();
        Scalar &operator=(Scalar const & raw);
        /*GETTERS*/
        std::string getType(void) const;
        /*GET TYPE*/
        void        init(void);
        void        typeSearch();
        void        checkImposibleConvertion();
        void        findChar(std::string s, int *idx, std::string input);
        void        sortType();
        void        findSpecialCommands();
        void        findLimit();
        /*INTERPRET*/
        void        convertType();
        void        convertFromChar();
        void       convertFromInt();
        void        convertFromFloat();
        void       convertFromDouble();
        void       convertFromSpecial();
};
std::ostream & operator<<(std::ostream &o, Scalar const &rhs);

#endif