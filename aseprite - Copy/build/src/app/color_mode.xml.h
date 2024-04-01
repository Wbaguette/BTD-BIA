// Don't modify, generated file from C:/aseprite/data/widgets/color_mode.xml

#ifndef GENERATED_COLOR_MODE_H_INCLUDED
#define GENERATED_COLOR_MODE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/listbox.h"
#include "ui/slider.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class ColorMode : public ui::Window {
  public:
    ColorMode() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("color_mode.xml", "color_mode", this);
      app::finder(this)
        >> "color_mode_view" >> m_colorModeView
        >> "color_mode" >> m_colorMode
        >> "dithering_placeholder" >> m_ditheringPlaceholder
        >> "amount" >> m_amount
        >> "factor" >> m_factor
        >> "to_gray_combobox" >> m_toGrayCombobox
        >> "flatten" >> m_flatten
        >> "advanced_check" >> m_advancedCheck
        >> "advanced" >> m_advanced
        >> "rgbmap_algorithm_placeholder" >> m_rgbmapAlgorithmPlaceholder
        >> "progress" >> m_progress
        >> "ok" >> m_ok
      ;
    }

    ui::View* colorModeView() const { return m_colorModeView; }
    ui::ListBox* colorMode() const { return m_colorMode; }
    ui::HBox* ditheringPlaceholder() const { return m_ditheringPlaceholder; }
    ui::HBox* amount() const { return m_amount; }
    ui::Slider* factor() const { return m_factor; }
    ui::ComboBox* toGrayCombobox() const { return m_toGrayCombobox; }
    ui::CheckBox* flatten() const { return m_flatten; }
    ui::CheckBox* advancedCheck() const { return m_advancedCheck; }
    ui::HBox* advanced() const { return m_advanced; }
    ui::HBox* rgbmapAlgorithmPlaceholder() const { return m_rgbmapAlgorithmPlaceholder; }
    ui::Slider* progress() const { return m_progress; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::View* m_colorModeView;
    ui::ListBox* m_colorMode;
    ui::HBox* m_ditheringPlaceholder;
    ui::HBox* m_amount;
    ui::Slider* m_factor;
    ui::ComboBox* m_toGrayCombobox;
    ui::CheckBox* m_flatten;
    ui::CheckBox* m_advancedCheck;
    ui::HBox* m_advanced;
    ui::HBox* m_rgbmapAlgorithmPlaceholder;
    ui::Slider* m_progress;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
