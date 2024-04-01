// Don't modify, generated file from C:/aseprite/data/widgets/tag_properties.xml

#ifndef GENERATED_TAG_PROPERTIES_H_INCLUDED
#define GENERATED_TAG_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/entry.h"
#include "ui/grid.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class TagProperties : public ui::Window {
  public:
    TagProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("tag_properties.xml", "tag_properties", this);
      app::finder(this)
        >> "properties_grid" >> m_propertiesGrid
        >> "name" >> m_name
        >> "user_data" >> m_userData
        >> "from" >> m_from
        >> "to" >> m_to
        >> "anidir" >> m_anidir
        >> "limit_repeat" >> m_limitRepeat
        >> "repeat_placeholder" >> m_repeatPlaceholder
        >> "ok" >> m_ok
      ;
    }

    ui::Grid* propertiesGrid() const { return m_propertiesGrid; }
    ui::Entry* name() const { return m_name; }
    ui::Button* userData() const { return m_userData; }
    app::ExprEntry* from() const { return m_from; }
    app::ExprEntry* to() const { return m_to; }
    ui::ComboBox* anidir() const { return m_anidir; }
    ui::CheckBox* limitRepeat() const { return m_limitRepeat; }
    ui::VBox* repeatPlaceholder() const { return m_repeatPlaceholder; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Grid* m_propertiesGrid;
    ui::Entry* m_name;
    ui::Button* m_userData;
    app::ExprEntry* m_from;
    app::ExprEntry* m_to;
    ui::ComboBox* m_anidir;
    ui::CheckBox* m_limitRepeat;
    ui::VBox* m_repeatPlaceholder;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
