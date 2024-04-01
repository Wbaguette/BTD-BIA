// Don't modify, generated file from C:/aseprite/data/widgets/debugger.xml

#ifndef GENERATED_DEBUGGER_H_INCLUDED
#define GENERATED_DEBUGGER_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "ui/box.h"
#include "ui/listbox.h"
#include "ui/splitter.h"
#include "ui/textbox.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class Debugger : public ui::Window {
  public:
    Debugger() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("debugger.xml", "debugger", this);
      app::finder(this)
        >> "control" >> m_control
        >> "breakpoint" >> m_breakpoint
        >> "main_area" >> m_mainArea
        >> "source_placeholder" >> m_sourcePlaceholder
        >> "stack_part" >> m_stackPart
        >> "stack_placeholder" >> m_stackPlaceholder
        >> "output_part" >> m_outputPart
        >> "output_buttons" >> m_outputButtons
        >> "console_view" >> m_consoleView
        >> "console" >> m_console
        >> "locals_view" >> m_localsView
        >> "locals" >> m_locals
        >> "eval_placeholder" >> m_evalPlaceholder
      ;
    }

    app::ButtonSet* control() const { return m_control; }
    app::ButtonSet* breakpoint() const { return m_breakpoint; }
    ui::Splitter* mainArea() const { return m_mainArea; }
    ui::View* sourcePlaceholder() const { return m_sourcePlaceholder; }
    ui::VBox* stackPart() const { return m_stackPart; }
    ui::View* stackPlaceholder() const { return m_stackPlaceholder; }
    ui::VBox* outputPart() const { return m_outputPart; }
    app::ButtonSet* outputButtons() const { return m_outputButtons; }
    ui::View* consoleView() const { return m_consoleView; }
    ui::TextBox* console() const { return m_console; }
    ui::View* localsView() const { return m_localsView; }
    ui::ListBox* locals() const { return m_locals; }
    ui::VBox* evalPlaceholder() const { return m_evalPlaceholder; }

  private:
    app::ButtonSet* m_control;
    app::ButtonSet* m_breakpoint;
    ui::Splitter* m_mainArea;
    ui::View* m_sourcePlaceholder;
    ui::VBox* m_stackPart;
    ui::View* m_stackPlaceholder;
    ui::VBox* m_outputPart;
    app::ButtonSet* m_outputButtons;
    ui::View* m_consoleView;
    ui::TextBox* m_console;
    ui::View* m_localsView;
    ui::ListBox* m_locals;
    ui::VBox* m_evalPlaceholder;
  };

} // namespace gen
} // namespace app

#endif
