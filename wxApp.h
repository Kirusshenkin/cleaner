#ifndef WXAPP_H
#define WXAPP_H

#include <wx/wx.h>

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

enum {
    ID_Clean = 1  // Уникальный идентификатор для пункта меню "Clean"
};

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title);

private:
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnClean(wxCommandEvent& event);
};

#endif
