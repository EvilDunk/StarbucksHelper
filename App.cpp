#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/simplebook.h>

wxIMPLEMENT_APP(App);

// On start
bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
	//customize and show mainFrame
	mainFrame->SetClientSize(600, 400);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}