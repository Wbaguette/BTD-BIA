// Don't modify, generated file from C:/aseprite/data/widgets/open_sequence.xml

#ifndef GENERATED_OPEN_SEQUENCE_H_INCLUDED
#define GENERATED_OPEN_SEQUENCE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/listbox.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class OpenSequence : public ui::Window {
  public:
    OpenSequence() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("open_sequence.xml", "open_sequence", this);
      app::finder(this)
        >> "view" >> m_view
        >> "files" >> m_files
        >> "duration" >> m_duration
        >> "repeat" >> m_repeat
        >> "dont_show" >> m_dontShow
        >> "agree" >> m_agree
        >> "skip" >> m_skip
      ;
    }

    ui::View* view() const { return m_view; }
    ui::ListBox* files() const { return m_files; }
    app::ExprEntry* duration() const { return m_duration; }
    ui::CheckBox* repeat() const { return m_repeat; }
    ui::CheckBox* dontShow() const { return m_dontShow; }
    ui::Button* agree() const { return m_agree; }
    ui::Button* skip() const { return m_skip; }

  private:
    ui::View* m_view;
    ui::ListBox* m_files;
    app::ExprEntry* m_duration;
    ui::CheckBox* m_repeat;
    ui::CheckBox* m_dontShow;
    ui::Button* m_agree;
    ui::Button* m_skip;
  };

} // namespace gen
} // namespace app

#endif
