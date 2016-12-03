#ifndef _IPATHADAPTOR_HPP
#define _IPATHADAPTOR_HPP

#include "Flow.hpp"
#include "Network.hpp"

#include <vector>

class IPathAdaptor{
  public:
    IPathAdaptor();

    virtual std::vector<int> getFlow(Network*, int, int) = 0;

    virtual ~IPathAdaptor() {};
};

#endif //_IPATHADAPTOR_HPP
