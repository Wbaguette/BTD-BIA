// Don't modify, generated file from C:/aseprite/data/widgets/css_options.xml

#ifndef GENERATED_CSS_OPTIONS_H_INCLUDED
#define GENERATED_CSS_OPTIONS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class CssOptions : public ui::Window {
  public:
    CssOptions() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("css_options.xml", "css_options", this);
      app::finder(this)
        >> "pixel_scale" >> m_pixelScale
        >> "with_vars" >> m_withVars
        >> "generate_html" >> m_generateHtml
        >> "dont_show" >> m_dontShow
        >> "ok" >> m_ok
      ;
    }

    app::ExprEntry* pixelScale() const { return m_pixelScale; }
    ui::CheckBox* withVars() const { return m_withVars; }
    ui::CheckBox* generateHtml() const { return m_generateHtml; }
    ui::CheckBox* dontShow() const { return m_dontShow; }
    ui::Button* ok() const { return m_ok; }

  private:
    app::ExprEntry* m_pixelScale;
    ui::CheckBox* m_withVars;
    ui::CheckBox* m_generateHtml;
    ui::CheckBox* m_dontShow;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
