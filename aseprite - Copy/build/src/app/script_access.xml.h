// Don't modify, generated file from C:/aseprite/data/widgets/script_access.xml

#ifndef GENERATED_SCRIPT_ACCESS_H_INCLUDED
#define GENERATED_SCRIPT_ACCESS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/label.h"
#include "ui/link_label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class ScriptAccess : public ui::Window {
  public:
    ScriptAccess() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("script_access.xml", "script_access", this);
      app::finder(this)
        >> "script" >> m_script
        >> "file_label" >> m_fileLabel
        >> "file" >> m_file
        >> "dont_show" >> m_dontShow
        >> "full" >> m_full
        >> "allow" >> m_allow
        >> "stop" >> m_stop
      ;
    }

    ui::LinkLabel* script() const { return m_script; }
    ui::Label* fileLabel() const { return m_fileLabel; }
    ui::LinkLabel* file() const { return m_file; }
    ui::CheckBox* dontShow() const { return m_dontShow; }
    ui::CheckBox* full() const { return m_full; }
    ui::Button* allow() const { return m_allow; }
    ui::Button* stop() const { return m_stop; }

  private:
    ui::LinkLabel* m_script;
    ui::Label* m_fileLabel;
    ui::LinkLabel* m_file;
    ui::CheckBox* m_dontShow;
    ui::CheckBox* m_full;
    ui::Button* m_allow;
    ui::Button* m_stop;
  };

} // namespace gen
} // namespace app

#endif
