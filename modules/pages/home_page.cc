#include "home_page.h"

#include "connection_page.h"
#include "termox/painter/brush.hpp"
#include "termox/painter/palette/apple_ii.hpp"

using namespace ox;
namespace tusi {
HomePageMenu::HomePageMenu() {
  auto constexpr menu_brush = ox::Brush(fg(ox::apple_ii::Olive));
  this->make_page<ConnectionPage>("Connetc to server" | menu_brush);
}

HomePage::HomePage()
    : title_(this->make_child<Titlebar>(
          "-- Tusi: Terminal-UI based ssh client --" | Trait::Bold |
          fg(ox::Color::Green))),
      menu_(this->make_child<HomePageMenu>()) {
  *this | pipe::direct_focus() | pipe::forward_focus(menu_);
}

}  // namespace tusi
