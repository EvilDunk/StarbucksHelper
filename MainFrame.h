#pragma once
#include <wx/wx.h>
#include <wx/simplebook.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
	wxSimplebook* bookInstance;
private:
	void HotPageClicked(wxCommandEvent& evt);
		void CappachinoClicked(wxCommandEvent& evt);
		void MistosClicked(wxCommandEvent& evt);
		void EspressosClicked(wxCommandEvent& evt);
		void CaffeAmericanoClicked(wxCommandEvent& evt);
		void FlatWhitesClicked(wxCommandEvent& evt);
		void LattesClicked(wxCommandEvent& evt);
		void MacchiatosClicked(wxCommandEvent& evt);
		void MochasClicked(wxCommandEvent& evt);
	void ColdPageClicked(wxCommandEvent& evt);
	void HomeClicked(wxCommandEvent& evt);
		
};