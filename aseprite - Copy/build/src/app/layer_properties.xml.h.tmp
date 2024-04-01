// Don't modify, generated file from C:/aseprite/data/widgets/layer_properties.xml

#ifndef GENERATED_LAYER_PROPERTIES_H_INCLUDED
#define GENERATED_LAYER_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/alpha_slider.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/entry.h"
#include "ui/grid.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class LayerProperties : public ui::Window {
  public:
    LayerProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("layer_properties.xml", "layer_properties", this);
      app::finder(this)
        >> "properties_grid" >> m_propertiesGrid
        >> "name" >> m_name
        >> "user_data" >> m_userData
        >> "mode" >> m_mode
        >> "tileset" >> m_tileset
        >> "opacity" >> m_opacity
      ;
    }

    ui::Grid* propertiesGrid() const { return m_propertiesGrid; }
    ui::Entry* name() const { return m_name; }
    ui::Button* userData() const { return m_userData; }
    ui::ComboBox* mode() const { return m_mode; }
    ui::Button* tileset() const { return m_tileset; }
    app::AlphaSlider* opacity() const { return m_opacity; }

  private:
    ui::Grid* m_propertiesGrid;
    ui::Entry* m_name;
    ui::Button* m_userData;
    ui::ComboBox* m_mode;
    ui::Button* m_tileset;
    app::AlphaSlider* m_opacity;
  };

} // namespace gen
} // namespace app

#endif
