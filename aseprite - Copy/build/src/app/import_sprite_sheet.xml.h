// Don't modify, generated file from C:/aseprite/data/widgets/import_sprite_sheet.xml

#ifndef GENERATED_IMPORT_SPRITE_SHEET_H_INCLUDED
#define GENERATED_IMPORT_SPRITE_SHEET_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class ImportSpriteSheet : public ui::Window {
  public:
    ImportSpriteSheet() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("import_sprite_sheet.xml", "import_sprite_sheet", this);
      app::finder(this)
        >> "select_file" >> m_selectFile
        >> "sheet_type" >> m_sheetType
        >> "x" >> m_x
        >> "y" >> m_y
        >> "width" >> m_width
        >> "height" >> m_height
        >> "padding_enabled" >> m_paddingEnabled
        >> "horizontal_padding_label" >> m_horizontalPaddingLabel
        >> "horizontal_padding" >> m_horizontalPadding
        >> "vertical_padding_label" >> m_verticalPaddingLabel
        >> "vertical_padding" >> m_verticalPadding
        >> "partial_tiles" >> m_partialTiles
        >> "import" >> m_import
        >> "cancel" >> m_cancel
      ;
    }

    ui::Button* selectFile() const { return m_selectFile; }
    ui::ComboBox* sheetType() const { return m_sheetType; }
    app::ExprEntry* x() const { return m_x; }
    app::ExprEntry* y() const { return m_y; }
    app::ExprEntry* width() const { return m_width; }
    app::ExprEntry* height() const { return m_height; }
    ui::CheckBox* paddingEnabled() const { return m_paddingEnabled; }
    ui::Label* horizontalPaddingLabel() const { return m_horizontalPaddingLabel; }
    app::ExprEntry* horizontalPadding() const { return m_horizontalPadding; }
    ui::Label* verticalPaddingLabel() const { return m_verticalPaddingLabel; }
    app::ExprEntry* verticalPadding() const { return m_verticalPadding; }
    ui::CheckBox* partialTiles() const { return m_partialTiles; }
    ui::Button* import() const { return m_import; }
    ui::Button* cancel() const { return m_cancel; }

  private:
    ui::Button* m_selectFile;
    ui::ComboBox* m_sheetType;
    app::ExprEntry* m_x;
    app::ExprEntry* m_y;
    app::ExprEntry* m_width;
    app::ExprEntry* m_height;
    ui::CheckBox* m_paddingEnabled;
    ui::Label* m_horizontalPaddingLabel;
    app::ExprEntry* m_horizontalPadding;
    ui::Label* m_verticalPaddingLabel;
    app::ExprEntry* m_verticalPadding;
    ui::CheckBox* m_partialTiles;
    ui::Button* m_import;
    ui::Button* m_cancel;
  };

} // namespace gen
} // namespace app

#endif
