// Don't modify, generated file from C:/aseprite/data/widgets/tileset_selector.xml

#ifndef GENERATED_TILESET_SELECTOR_H_INCLUDED
#define GENERATED_TILESET_SELECTOR_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/entry.h"
#include "ui/label.h"

namespace app {
namespace gen {

  class TilesetSelector : public ui::VBox {
  public:
    TilesetSelector() {
      app::load_widget("tileset_selector.xml", "tileset_selector", this);
      app::finder(this)
        >> "tilesets" >> m_tilesets
        >> "name" >> m_name
        >> "grid_width" >> m_gridWidth
        >> "grid_height" >> m_gridHeight
        >> "base_index_label" >> m_baseIndexLabel
        >> "base_index" >> m_baseIndex
        >> "base_index_filler" >> m_baseIndexFiller
        >> "flips_label" >> m_flipsLabel
        >> "flips" >> m_flips
        >> "xflip" >> m_xflip
        >> "yflip" >> m_yflip
        >> "dflip" >> m_dflip
        >> "flips_filler" >> m_flipsFiller
        >> "advanced" >> m_advanced
      ;
    }

    ui::ComboBox* tilesets() const { return m_tilesets; }
    ui::Entry* name() const { return m_name; }
    app::ExprEntry* gridWidth() const { return m_gridWidth; }
    app::ExprEntry* gridHeight() const { return m_gridHeight; }
    ui::Label* baseIndexLabel() const { return m_baseIndexLabel; }
    app::ExprEntry* baseIndex() const { return m_baseIndex; }
    ui::Box* baseIndexFiller() const { return m_baseIndexFiller; }
    ui::Label* flipsLabel() const { return m_flipsLabel; }
    app::ButtonSet* flips() const { return m_flips; }
    app::ButtonSet::Item* xflip() const { return m_xflip; }
    app::ButtonSet::Item* yflip() const { return m_yflip; }
    app::ButtonSet::Item* dflip() const { return m_dflip; }
    ui::Box* flipsFiller() const { return m_flipsFiller; }
    ui::CheckBox* advanced() const { return m_advanced; }

  private:
    ui::ComboBox* m_tilesets;
    ui::Entry* m_name;
    app::ExprEntry* m_gridWidth;
    app::ExprEntry* m_gridHeight;
    ui::Label* m_baseIndexLabel;
    app::ExprEntry* m_baseIndex;
    ui::Box* m_baseIndexFiller;
    ui::Label* m_flipsLabel;
    app::ButtonSet* m_flips;
    app::ButtonSet::Item* m_xflip;
    app::ButtonSet::Item* m_yflip;
    app::ButtonSet::Item* m_dflip;
    ui::Box* m_flipsFiller;
    ui::CheckBox* m_advanced;
  };

} // namespace gen
} // namespace app

#endif
