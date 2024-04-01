// Don't modify, generated file from C:/aseprite/data/widgets/incompat_file.xml

#ifndef GENERATED_INCOMPAT_FILE_H_INCLUDED
#define GENERATED_INCOMPAT_FILE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/textbox.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class IncompatFile : public ui::Window {
  public:
    IncompatFile() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("incompat_file.xml", "incompat_file", this);
      app::finder(this)
        >> "errors_placeholder" >> m_errorsPlaceholder
        >> "errors_view" >> m_errorsView
        >> "errors" >> m_errors
        >> "ok" >> m_ok
      ;
    }

    ui::VBox* errorsPlaceholder() const { return m_errorsPlaceholder; }
    ui::View* errorsView() const { return m_errorsView; }
    ui::TextBox* errors() const { return m_errors; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::VBox* m_errorsPlaceholder;
    ui::View* m_errorsView;
    ui::TextBox* m_errors;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
