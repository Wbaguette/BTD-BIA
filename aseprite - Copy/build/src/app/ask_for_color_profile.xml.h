// Don't modify, generated file from C:/aseprite/data/widgets/ask_for_color_profile.xml

#ifndef GENERATED_ASK_FOR_COLOR_PROFILE_H_INCLUDED
#define GENERATED_ASK_FOR_COLOR_PROFILE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class AskForColorProfile : public ui::Window {
  public:
    AskForColorProfile() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("ask_for_color_profile.xml", "ask_for_color_profile", this);
      app::finder(this)
        >> "sprite_with_profile" >> m_spriteWithProfile
        >> "sprite_without_profile" >> m_spriteWithoutProfile
        >> "embedded" >> m_embedded
        >> "convert" >> m_convert
        >> "assign" >> m_assign
        >> "disable" >> m_disable
      ;
    }

    ui::Label* spriteWithProfile() const { return m_spriteWithProfile; }
    ui::Label* spriteWithoutProfile() const { return m_spriteWithoutProfile; }
    ui::Button* embedded() const { return m_embedded; }
    ui::Button* convert() const { return m_convert; }
    ui::Button* assign() const { return m_assign; }
    ui::Button* disable() const { return m_disable; }

  private:
    ui::Label* m_spriteWithProfile;
    ui::Label* m_spriteWithoutProfile;
    ui::Button* m_embedded;
    ui::Button* m_convert;
    ui::Button* m_assign;
    ui::Button* m_disable;
  };

} // namespace gen
} // namespace app

#endif
