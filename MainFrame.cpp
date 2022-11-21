#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/notebook.h>
#include <wx/bitmap.h>


// Main Frame to show.
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	// Panel allows for oject embedding (child classes)
	wxPanel* mainPanel = new wxPanel(this, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));

	// Create SimpleBook object
	wxSimplebook* notebook = new wxSimplebook(mainPanel, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
	this->bookInstance = notebook;

	


	// Create first 'page' of SimpleBook: 0
	wxPanel* homepage = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
	wxBitmapButton* hotDrinks = new wxBitmapButton(homepage, wxID_ANY, wxBitmap("bmp/hotDrinkIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(96, 71), wxSize(104, 154));
	wxStaticText* hotDrinksText = new wxStaticText(homepage, wxID_ANY, "Hot Drinks", wxPoint(122, 250));
	wxBitmapButton* coldDrinks = new wxBitmapButton(homepage, wxID_ANY, wxBitmap("bmp/coldDrinkIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(246, 71), wxSize(104, 154));
	wxStaticText* coldDrinksText = new wxStaticText(homepage, wxID_ANY, "Cold Drinks", wxPoint(272, 250));
	wxBitmapButton* scanDrinks = new wxBitmapButton(homepage, wxID_ANY, wxBitmap("bmp/scanDrinkIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(395, 71), wxSize(104, 154));
	wxStaticText* scanDrinksText = new wxStaticText(homepage, wxID_ANY, "Scan Ticket", wxPoint(420, 250));
	// Push page to SimpleBook
	notebook->AddPage(homepage, "Homepage");

	// Repeat steps for individual pages
	// 

	//Hot Drinks Landing Page: 1
	wxPanel* hotdrinkspanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
	wxBitmapButton* cappachino = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/cappachino.bmp", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
	wxBitmapButton* caffeMisto = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/caffeMisto.bmp", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
	wxBitmapButton* espressos = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/espressoPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
	wxBitmapButton* caffeAmericano = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/caffeAmericano.bmp", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
	wxBitmapButton* flatWhites = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/flatWhitePage.bmp", wxBITMAP_TYPE_BMP), wxPoint(54, 205), wxSize(89, 94));
	wxBitmapButton* lattes = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/lattePage.bmp", wxBITMAP_TYPE_BMP), wxPoint(194, 205), wxSize(89, 94));
	wxBitmapButton* macchiatos = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/macchiatoPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(334, 205), wxSize(89, 94));
	wxBitmapButton* mochas = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/mochaPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(474, 205), wxSize(89, 94));
	wxBitmapButton* hotHomeButton = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
	notebook->AddPage(hotdrinkspanel, "Hot Drinks");
		// Cappachino: 2
		wxPanel* cappachinopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* cappachinoHomeButton = new wxBitmapButton(cappachinopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(cappachinopanel, "");
		
		// Caffe Misto: 3
		wxPanel* mistopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* mistoHomeButton = new wxBitmapButton(mistopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(mistopanel, "");

		// Espressos: 4
		wxPanel* espressospanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* espressosHomeButton = new wxBitmapButton(espressospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(espressospanel, "");
			// Espresso: 5
			wxPanel* espressopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* espressoHomeButton = new wxBitmapButton(espressopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(espressopanel, "");
			// Espresso Con Panna: 6
			wxPanel* espressoConPannapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* espressoConPannaHomeButton = new wxBitmapButton(espressospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(espressoConPannapanel, "");

		// Caffe Americano: 7
		wxPanel* americanopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* americanoHomeButton = new wxBitmapButton(americanopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(americanopanel, "");

		// Flat Whites: 8
		wxPanel* flatWhitespanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* flatWhitesHomeButton = new wxBitmapButton(flatWhitespanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(flatWhitespanel, "");
			// Flat White: 9
			wxPanel* flatWhitepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* flatWhiteHomeButton = new wxBitmapButton(flatWhitepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(flatWhitepanel, "");
			// HAFlat White: 10
			wxPanel* HAFlatWhitepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* HAFlatWhiteHomeButton = new wxBitmapButton(HAFlatWhitepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(HAFlatWhitepanel, "");

		
		// Lattes: 11
		wxPanel* lattespanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* lattesHomeButton = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(lattespanel, "");

		// Macchiatos: 12
		wxPanel* macchiatospanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* macchiatosHomeButton = new wxBitmapButton(macchiatospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(macchiatospanel, "");

		// Mochas: 13
		wxPanel* mochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
		wxBitmapButton* mochaHomeButton = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
		notebook->AddPage(mochapanel, "");
		

	// Cold Drinks Landing Page: 14
	wxPanel* colddrinkspanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
	wxBitmapButton* coldHomeButton = new wxBitmapButton(colddrinkspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
	notebook->AddPage(colddrinkspanel, "Cold Drinks");
		
		

	// Area for binding buttons to events below!
	//
	hotDrinks->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		cappachino->Bind(wxEVT_BUTTON, &MainFrame::CappachinoClicked, this);
		caffeMisto->Bind(wxEVT_BUTTON, &MainFrame::MistosClicked, this);
		espressos->Bind(wxEVT_BUTTON, &MainFrame::EspressosClicked, this);
		caffeAmericano->Bind(wxEVT_BUTTON, &MainFrame::CaffeAmericanoClicked, this);
		flatWhites->Bind(wxEVT_BUTTON, &MainFrame::FlatWhitesClicked, this);
		lattes->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
		macchiatos->Bind(wxEVT_BUTTON, &MainFrame::MacchiatosClicked, this);
		mochas->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);

	coldDrinks->Bind(wxEVT_BUTTON, &MainFrame::ColdPageClicked, this);

	hotHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HomeClicked, this);
		cappachinoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		mistoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		espressosHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		americanoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		flatWhitesHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		lattesHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		macchiatosHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		mochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);

	coldHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HomeClicked, this);

};


void MainFrame::HotPageClicked(wxCommandEvent& evt) { 
	this->bookInstance->SetSelection(1); 
}
	void MainFrame::CappachinoClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(2);
	}
	void MainFrame::MistosClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(3);
	}
	void MainFrame::EspressosClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(4);
	}
	void MainFrame::CaffeAmericanoClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(5);
	}
	void MainFrame::FlatWhitesClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(6);
	}
	void MainFrame::LattesClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(7);
	}
	void MainFrame::MacchiatosClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(8);
	}
	void MainFrame::MochasClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(9);
	}

void MainFrame::ColdPageClicked(wxCommandEvent& evt) {
	this->bookInstance->ChangeSelection(12);
}
void MainFrame::HomeClicked(wxCommandEvent& evt) {
	this->bookInstance->ChangeSelection(0);
}
