#ifndef __TUSI_PAGES_CONNECTION_PAGE_H__
#define __TUSI_PAGES_CONNECTION_PAGE_H__

#include "termox/termox.hpp"
#include "termox/widget/layouts/vertical.hpp"
#include "termox/widget/pair.hpp"
#include "termox/widget/widgets/button.hpp"
#include "termox/widget/widgets/checkbox.hpp"

namespace tusi {

class TitledButton : public ox::HThin_button {
   public:

   public:
};

/// Holds a TraitCheckbox for each Trait, emits Signals.
class TitledButtons : public ox::Passive<ox::layout::Vertical<TitledButton>> {
   public:

   public:
    explicit TitledButtons(Parameters = {});
};


class ConnectionPage : public ox::layout::Vertical<TitledButtons>{
 public:
 private:
};

}  // namespace tusi
#endif  // PAGES_CONNECTION_PAGE_H_
