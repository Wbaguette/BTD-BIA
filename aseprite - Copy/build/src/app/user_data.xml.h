// Don't modify, generated file from C:/aseprite/data/widgets/user_data.xml

#ifndef GENERATED_USER_DATA_H_INCLUDED
#define GENERATED_USER_DATA_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/color_button.h"
#include "ui/box.h"
#include "ui/entry.h"
#include "ui/label.h"

namespace app {
namespace gen {

  class UserData : public ui::HBox {
  public:
    UserData() {
      app::load_widget("user_data.xml", "user_data", this);
      app::finder(this)
        >> "color_label" >> m_colorLabel
        >> "entry_label" >> m_entryLabel
        >> "color" >> m_color
        >> "entry" >> m_entry
      ;
    }

    ui::Label* colorLabel() const { return m_colorLabel; }
    ui::Label* entryLabel() const { return m_entryLabel; }
    app::ColorButton* color() const { return m_color; }
    ui::Entry* entry() const { return m_entry; }

  private:
    ui::Label* m_colorLabel;
    ui::Label* m_entryLabel;
    app::ColorButton* m_color;
    ui::Entry* m_entry;
  };

} // namespace gen
} // namespace app

#endif
