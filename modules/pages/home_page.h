#ifndef __TUSI_PAGES_HOME_PAGE_H__
#define __TUSI_PAGES_HOME_PAGE_H__

#include "termox/termox.hpp"

namespace tusi {

class HomePageMenu : public ox::Menu_stack {
 public:
  HomePageMenu();
};

class HomePage : public ox::layout::Vertical<> {
 public:
  HomePage();

 private:
  ox::Titlebar& title_;
  HomePageMenu& menu_;
};
}  // namespace tusi
#endif  // PAGES_HOME_PAGE_H_
