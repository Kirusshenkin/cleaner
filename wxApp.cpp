#include "wxApp.h"
#include "cleaner.h"  // Подключаем наш модуль очистки

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame("Temporary Files Cleaner");
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title) {
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");

    Bind(wxEVT_MENU, &MyFrame::OnQuit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnClean, this, ID_Clean);
}

void MyFrame::OnQuit(wxCommandEvent& event) {
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox("Temporary Files Cleaner using wxWidgets",
                "About", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnClean(wxCommandEvent& event) {
    cleanTemporaryFiles();  // Используем нашу функцию очистки

    wxMessageBox("Cleaning completed successfully!",
                "Clean", wxOK | wxICON_INFORMATION);
}
