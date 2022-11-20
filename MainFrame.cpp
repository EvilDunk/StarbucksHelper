#include "MainFrame.h"
#include <wx/wx.h>

enum IDs {
	BUTTONHOT_ID = 2,
	BUTTONCOLD_ID = 3,
	BUTTONSCAN_ID = 4
};

wxBEGIN_EVENT_TABLE();

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* hotDrinks = new wxButton(panel, BUTTONHOT_ID, "", wxPoint(100, 75), wxSize(100, 150));
	wxStaticText* hotDrinksText = new wxStaticText(panel, wxID_ANY, "Hot Drinks", wxPoint(122, 250));
	wxButton* coldDrinks = new wxButton(panel, BUTTONCOLD_ID, "", wxPoint(250, 75), wxSize(100, 150));
	wxStaticText* coldDrinksText = new wxStaticText(panel, wxID_ANY, "Cold Drinks", wxPoint(272, 250));
	wxButton* scanDrinks = new wxButton(panel, BUTTONSCAN_ID, "", wxPoint(400, 75), wxSize(100, 150));
	wxStaticText* scanDrinksText = new wxStaticText(panel, wxID_ANY, "Scan Ticket", wxPoint(420, 250));

}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("button clicked");
}