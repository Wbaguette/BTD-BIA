// Don't modify, generated file from C:/aseprite/data/widgets/aseprite_update.xml

#ifndef GENERATED_ASEPRITE_UPDATE_H_INCLUDED
#define GENERATED_ASEPRITE_UPDATE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/listbox.h"
#include "ui/slider.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class AsepriteUpdate : public ui::Window {
  public:
    AsepriteUpdate() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("aseprite_update.xml", "aseprite_update", this);
      app::finder(this)
        >> "progress" >> m_progress
        >> "logitems" >> m_logitems
        >> "ok_button" >> m_okButton
      ;
    }

    ui::Slider* progress() const { return m_progress; }
    ui::ListBox* logitems() const { return m_logitems; }
    ui::Button* okButton() const { return m_okButton; }

  private:
    ui::Slider* m_progress;
    ui::ListBox* m_logitems;
    ui::Button* m_okButton;
  };

} // namespace gen
} // namespace app

#endif
