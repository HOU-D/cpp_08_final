#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>

template <class T, class Container = std::deque<T> > 

class MutantStack : public std::stack<T, Container>
{
    public:
    
        ~MutantStack(){}
        MutantStack(){}
        MutantStack& operator = (const MutantStack &other)
        {
            if (this == &other)
                return (*this);
            std::stack<T, Container>::operator = (other); 
            return (*this);
        }
        MutantStack(const MutantStack &other) : std::stack<T, Container>(other)
        {
            *this = other;
        }
        
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        iterator    begin()
        {
            return (this->c.begin());
        }
        iterator    end()
        {
            return (this->c.end());
        }
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

        const_iterator begin() const
        {
            return this->c.begin();
        }

        const_iterator end() const
        {
            return this->c.end();
        }

        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() 
        { 
            return this->c.rbegin(); 
        }
        reverse_iterator rend()
        { 
            return this->c.rend();
        }
        
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator rbegin() const 
        { 
            return this->c.rbegin();
        }
        const_reverse_iterator rend() const 
        { 
            return this->c.rend();
        }
        
};

#endif