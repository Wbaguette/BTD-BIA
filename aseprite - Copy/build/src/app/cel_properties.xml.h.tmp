// Don't modify, generated file from C:/aseprite/data/widgets/cel_properties.xml

#ifndef GENERATED_CEL_PROPERTIES_H_INCLUDED
#define GENERATED_CEL_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/alpha_slider.h"
#include "app/ui/button_set.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/grid.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class CelProperties : public ui::Window {
  public:
    CelProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("cel_properties.xml", "cel_properties", this);
      app::finder(this)
        >> "properties_grid" >> m_propertiesGrid
        >> "opacity" >> m_opacity
        >> "user_data" >> m_userData
        >> "zindex" >> m_zindex
        >> "zindex_spin" >> m_zindexSpin
      ;
    }

    ui::Grid* propertiesGrid() const { return m_propertiesGrid; }
    app::AlphaSlider* opacity() const { return m_opacity; }
    ui::Button* userData() const { return m_userData; }
    app::ExprEntry* zindex() const { return m_zindex; }
    app::ButtonSet* zindexSpin() const { return m_zindexSpin; }

  private:
    ui::Grid* m_propertiesGrid;
    app::AlphaSlider* m_opacity;
    ui::Button* m_userData;
    app::ExprEntry* m_zindex;
    app::ButtonSet* m_zindexSpin;
  };

} // namespace gen
} // namespace app

#endif
