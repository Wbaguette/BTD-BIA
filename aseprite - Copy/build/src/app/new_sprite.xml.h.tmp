// Don't modify, generated file from C:/aseprite/data/widgets/new_sprite.xml

#ifndef GENERATED_NEW_SPRITE_H_INCLUDED
#define GENERATED_NEW_SPRITE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class NewSprite : public ui::Window {
  public:
    NewSprite() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("new_sprite.xml", "new_sprite", this);
      app::finder(this)
        >> "width" >> m_width
        >> "height" >> m_height
        >> "color_mode" >> m_colorMode
        >> "bg_color" >> m_bgColor
        >> "advanced_check" >> m_advancedCheck
        >> "advanced" >> m_advanced
        >> "pixel_ratio" >> m_pixelRatio
        >> "ok_button" >> m_okButton
      ;
    }

    app::ExprEntry* width() const { return m_width; }
    app::ExprEntry* height() const { return m_height; }
    app::ButtonSet* colorMode() const { return m_colorMode; }
    app::ButtonSet* bgColor() const { return m_bgColor; }
    ui::CheckBox* advancedCheck() const { return m_advancedCheck; }
    ui::VBox* advanced() const { return m_advanced; }
    ui::ComboBox* pixelRatio() const { return m_pixelRatio; }
    ui::Button* okButton() const { return m_okButton; }

  private:
    app::ExprEntry* m_width;
    app::ExprEntry* m_height;
    app::ButtonSet* m_colorMode;
    app::ButtonSet* m_bgColor;
    ui::CheckBox* m_advancedCheck;
    ui::VBox* m_advanced;
    ui::ComboBox* m_pixelRatio;
    ui::Button* m_okButton;
  };

} // namespace gen
} // namespace app

#endif
