// Don't modify, generated file from C:/aseprite/data/widgets/sprite_properties.xml

#ifndef GENERATED_SPRITE_PROPERTIES_H_INCLUDED
#define GENERATED_SPRITE_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/entry.h"
#include "ui/grid.h"
#include "ui/label.h"
#include "ui/listbox.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class SpriteProperties : public ui::Window {
  public:
    SpriteProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("sprite_properties.xml", "sprite_properties", this);
      app::finder(this)
        >> "properties_grid" >> m_propertiesGrid
        >> "name" >> m_name
        >> "user_data" >> m_userData
        >> "type" >> m_type
        >> "size" >> m_size
        >> "frames" >> m_frames
        >> "transparent_color_placeholder" >> m_transparentColorPlaceholder
        >> "pixel_ratio" >> m_pixelRatio
        >> "color_profile" >> m_colorProfile
        >> "assign_color_profile" >> m_assignColorProfile
        >> "convert_color_profile" >> m_convertColorProfile
        >> "tilesets_placeholder" >> m_tilesetsPlaceholder
        >> "tilesets_view" >> m_tilesetsView
        >> "tilesets" >> m_tilesets
        >> "ok" >> m_ok
        >> "cancel" >> m_cancel
      ;
    }

    ui::Grid* propertiesGrid() const { return m_propertiesGrid; }
    ui::Entry* name() const { return m_name; }
    ui::Button* userData() const { return m_userData; }
    ui::Label* type() const { return m_type; }
    ui::Label* size() const { return m_size; }
    ui::Label* frames() const { return m_frames; }
    ui::HBox* transparentColorPlaceholder() const { return m_transparentColorPlaceholder; }
    ui::ComboBox* pixelRatio() const { return m_pixelRatio; }
    ui::ComboBox* colorProfile() const { return m_colorProfile; }
    ui::Button* assignColorProfile() const { return m_assignColorProfile; }
    ui::Button* convertColorProfile() const { return m_convertColorProfile; }
    ui::VBox* tilesetsPlaceholder() const { return m_tilesetsPlaceholder; }
    ui::View* tilesetsView() const { return m_tilesetsView; }
    ui::ListBox* tilesets() const { return m_tilesets; }
    ui::Button* ok() const { return m_ok; }
    ui::Button* cancel() const { return m_cancel; }

  private:
    ui::Grid* m_propertiesGrid;
    ui::Entry* m_name;
    ui::Button* m_userData;
    ui::Label* m_type;
    ui::Label* m_size;
    ui::Label* m_frames;
    ui::HBox* m_transparentColorPlaceholder;
    ui::ComboBox* m_pixelRatio;
    ui::ComboBox* m_colorProfile;
    ui::Button* m_assignColorProfile;
    ui::Button* m_convertColorProfile;
    ui::VBox* m_tilesetsPlaceholder;
    ui::View* m_tilesetsView;
    ui::ListBox* m_tilesets;
    ui::Button* m_ok;
    ui::Button* m_cancel;
  };

} // namespace gen
} // namespace app

#endif
