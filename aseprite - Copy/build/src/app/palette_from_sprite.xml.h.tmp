// Don't modify, generated file from C:/aseprite/data/widgets/palette_from_sprite.xml

#ifndef GENERATED_PALETTE_FROM_SPRITE_H_INCLUDED
#define GENERATED_PALETTE_FROM_SPRITE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class PaletteFromSprite : public ui::Window {
  public:
    PaletteFromSprite() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("palette_from_sprite.xml", "palette_from_sprite", this);
      app::finder(this)
        >> "new_palette" >> m_newPalette
        >> "ncolors" >> m_ncolors
        >> "current_palette" >> m_currentPalette
        >> "current_range" >> m_currentRange
        >> "alpha_channel" >> m_alphaChannel
        >> "advanced_check" >> m_advancedCheck
        >> "advanced" >> m_advanced
        >> "rgbmap_algorithm_placeholder" >> m_rgbmapAlgorithmPlaceholder
        >> "ok" >> m_ok
      ;
    }

    ui::RadioButton* newPalette() const { return m_newPalette; }
    app::ExprEntry* ncolors() const { return m_ncolors; }
    ui::RadioButton* currentPalette() const { return m_currentPalette; }
    ui::RadioButton* currentRange() const { return m_currentRange; }
    ui::CheckBox* alphaChannel() const { return m_alphaChannel; }
    ui::CheckBox* advancedCheck() const { return m_advancedCheck; }
    ui::HBox* advanced() const { return m_advanced; }
    ui::HBox* rgbmapAlgorithmPlaceholder() const { return m_rgbmapAlgorithmPlaceholder; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::RadioButton* m_newPalette;
    app::ExprEntry* m_ncolors;
    ui::RadioButton* m_currentPalette;
    ui::RadioButton* m_currentRange;
    ui::CheckBox* m_alphaChannel;
    ui::CheckBox* m_advancedCheck;
    ui::HBox* m_advanced;
    ui::HBox* m_rgbmapAlgorithmPlaceholder;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
