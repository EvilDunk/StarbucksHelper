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
	wxBitmapButton* hotHomeButton = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
	notebook->AddPage(hotdrinkspanel, "Hot Drinks");
		// Cappachino: 2
		wxBitmapButton* cappachino = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/cappachino.bmp", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
			wxPanel* cappachinopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* cappachinoHomeButton = new wxBitmapButton(cappachinopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(cappachinopanel, "");
		
		// Caffe Misto: 3
		wxBitmapButton* caffeMisto = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/cappachino.bmp", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
			wxPanel* mistopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* mistoHomeButton = new wxBitmapButton(mistopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(mistopanel, "");


		// Espressos: 4
		wxBitmapButton* espressos = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/espressoPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
			wxPanel* espressospanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* espressosHomeButton = new wxBitmapButton(espressospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(espressospanel, "");
			// Espresso: 5
			wxBitmapButton* espresso = new wxBitmapButton(espressospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				wxPanel* espressopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* espressoHomeButton = new wxBitmapButton(espressopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(espressopanel, "");
			// Espresso Con Panna: 6
			wxBitmapButton* espressoConPanna = new wxBitmapButton(espressospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				wxPanel* espressoConPannapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* espressoConPannaHomeButton = new wxBitmapButton(espressopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(espressoConPannapanel, "");

		// Caffe Americano: 7
		wxBitmapButton* caffeAmericano = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/caffeAmericano.bmp", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
			wxPanel* americanopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* americanoHomeButton = new wxBitmapButton(americanopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(americanopanel, "");

		// Flat Whites: 8
		wxBitmapButton* flatWhites = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/flatWhitePage.bmp", wxBITMAP_TYPE_BMP), wxPoint(54, 205), wxSize(89, 94));
			wxPanel* flatWhitespanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* flatWhitesHomeButton = new wxBitmapButton(flatWhitespanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(flatWhitespanel, "");
			// Flat White: 9
			wxBitmapButton* flatWhite = new wxBitmapButton(flatWhitespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(74, 49));
				wxPanel* flatWhitepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* flatWhiteHomeButton = new wxBitmapButton(flatWhitepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(flatWhitepanel, "");
			// Honey Almondmilk (HA) Flat White: 10
			wxBitmapButton* HAFlatWhite = new wxBitmapButton(flatWhitespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(74, 49));
				wxPanel* HAFlatWhitepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* HAFlatWhiteHomeButton = new wxBitmapButton(HAFlatWhitepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(HAFlatWhitepanel, "");

		
		// Lattes: 11
		wxBitmapButton* lattes = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/lattePage.bmp", wxBITMAP_TYPE_BMP), wxPoint(194, 205), wxSize(89, 94));
			wxPanel* lattespanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* lattesHomeButton = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(lattespanel, "");
			// Caffe Latte: 12
			wxBitmapButton* caffeLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
				wxPanel* caffeLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* caffeLatteHomeButton = new wxBitmapButton(caffeLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(caffeLattepanel, "");
			// Blonde Vanilla (BV) Latte: 13
			wxBitmapButton* BVLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
				wxPanel* BVLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* BVLatteHomeButton = new wxBitmapButton(BVLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(BVLattepanel, "");
			// Cinnamon Dolce (CD) Latte: 14
			wxBitmapButton* CDLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
				wxPanel* CDLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* CDLatteHomeButton = new wxBitmapButton(CDLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(CDLattepanel, "");
			// Pumpkin Spice (PS) Latte *SEASONAL*: 15
			wxBitmapButton* PSLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
				wxPanel* PSLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* PSLatteHomeButton = new wxBitmapButton(PSLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(PSLattepanel, "");
			// Caramel Brulee (CB) Latte *SEASONAL*: 16
			wxBitmapButton* CBLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 205), wxSize(89, 94));
				wxPanel* CBLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* CBLatteHomeButton = new wxBitmapButton(CBLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(CBLattepanel, "");
			// Chestnut Praline (CP) Latte *SEASONAL*: 17
			wxBitmapButton* CPLatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 205), wxSize(89, 94));
				wxPanel* CPLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* CPLatteHomeButton = new wxBitmapButton(CPLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(CPLattepanel, "");
			// Sugar Cookie Almondmilk (SCA) Latte *SEASONAL*: 18
			wxBitmapButton* SCALatte = new wxBitmapButton(lattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 205), wxSize(89, 94));
				wxPanel* SCALattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* SCALatteHomeButton = new wxBitmapButton(SCALattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(SCALattepanel, "");

		// Macchiatos: 19
		wxBitmapButton* macchiatos = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/macchiatoPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(334, 205), wxSize(89, 94));
			wxPanel* macchiatospanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* macchiatosHomeButton = new wxBitmapButton(macchiatospanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(macchiatospanel, "");
			// Apple Crisp Oatmilk (ACO) Macchiato: 20
			wxBitmapButton* ACOMacchiato = new wxBitmapButton(macchiatospanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
				wxPanel* ACOMacchiatopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* ACOMacchiatoHomeButton = new wxBitmapButton(ACOMacchiatopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(ACOMacchiatopanel, "");
			// Caramel Macchiato: 21
			wxBitmapButton* caramelMacchiato = new wxBitmapButton(macchiatospanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
				wxPanel* caramelMacchiatopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* caramelMacchiatoHomeButton = new wxBitmapButton(caramelMacchiatopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(caramelMacchiatopanel, "");
			// Espresso Macchiato: 22
			wxBitmapButton* espressoMacchiato = new wxBitmapButton(macchiatospanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
				wxPanel* espressoMacchiatopanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* espressoMacchiatoHomeButton = new wxBitmapButton(espressoMacchiatopanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(espressoMacchiatopanel, "");


		// Mochas: 23
		wxBitmapButton* mochas = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/mochaPage.bmp", wxBITMAP_TYPE_BMP), wxPoint(474, 205), wxSize(89, 94));
			wxPanel* mochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* mochaHomeButton = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(mochapanel, "");
			// Caffe Mocha: 24
			wxBitmapButton* caffeMocha = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
				wxPanel* caffeMochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* caffeMochaHomeButton = new wxBitmapButton(caffeMochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(caffeMochapanel, "");
			// White Chocolate (WC) Mocha: 25
			wxBitmapButton* WCMocha = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
				wxPanel* WCMochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* WCMochaHomeButton = new wxBitmapButton(WCMochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(WCMochapanel, "");
			//Peppermint Mocha *SEASONAL*: 26
			wxBitmapButton* peppermintMocha = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
				wxPanel* peppermintMochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* peppermintMochaHomeButton = new wxBitmapButton(peppermintMochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(peppermintMochapanel, "");
			// Peppermint White Chocolate (PWC) Mocha *SEASONAL*: 27
			wxBitmapButton* PWCMocha = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
				wxPanel* PWCMochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* PWCMochaHomeButton = new wxBitmapButton(PWCMochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(PWCMochapanel, "");
			// Toasted White Chocolate (TWC) Mocha *SEASONAL*: 28
			wxBitmapButton* TWCMocha = new wxBitmapButton(mochapanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 205), wxSize(89, 94));
				wxPanel* TWCMochapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* TWCMochaHomeButton = new wxBitmapButton(TWCMochapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(TWCMochapanel, "");
		
		// Other Hot Drinks: 29
		wxBitmapButton* OHDrinks = new wxBitmapButton(hotdrinkspanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(256, 301), wxSize(89, 94));
			wxPanel* OHDrinkspanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
			wxBitmapButton* OHDrinksHomeButton = new wxBitmapButton(OHDrinkspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
			notebook->AddPage(OHDrinkspanel, "");
			// Hot Chocolate: 30
			wxBitmapButton* hotChocolate = new wxBitmapButton(OHDrinkspanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
				wxPanel* hotChocolatepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* hotChocolateHomeButton = new wxBitmapButton(hotChocolatepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(hotChocolatepanel, "");
			// White Hot Chocolate: 31
			wxBitmapButton* whiteHotChocolate = new wxBitmapButton(OHDrinkspanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
				wxPanel* whiteHotChocolatepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* whiteHotChocolateHomeButton = new wxBitmapButton(whiteHotChocolatepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(whiteHotChocolatepanel, "");
			// Steamers: 32
			wxBitmapButton* steamers = new wxBitmapButton(OHDrinkspanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
				wxPanel* steamerspanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* steamersHomeButton = new wxBitmapButton(steamerspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(steamerspanel, "");
			// Teas&Tea Lattes: 33
			wxBitmapButton* teasTeaLattes = new wxBitmapButton(OHDrinkspanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
				wxPanel* teasTeaLattespanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
				wxBitmapButton* teasTeaLattesHomeButton = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
				notebook->AddPage(teasTeaLattespanel, "");
				// Honey Citrus Mint (HCM) Tea: 34
				wxBitmapButton* HCMTea = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 74), wxSize(89, 94));
					wxPanel* HCMTeapanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
					wxBitmapButton* HCMTeaHomeButton = new wxBitmapButton(HCMTeapanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
					notebook->AddPage(HCMTeapanel , "");
				// Chai Tea Latte: 35
				wxBitmapButton* chaiTeaLatte = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(194, 74), wxSize(89, 94));
					wxPanel* chaiTeaLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
					wxBitmapButton* chaiTeaLatteHomeButton = new wxBitmapButton(chaiTeaLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
					notebook->AddPage(chaiTeaLattepanel, "");
				// London Fog Tea (LFT) Latte: 36
				wxBitmapButton* LFTLatte = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(334, 74), wxSize(89, 94));
					wxPanel* LFTLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
					wxBitmapButton* LFTLatteHomeButton = new wxBitmapButton(LFTLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
					notebook->AddPage(LFTLattepanel, "");
				// Royal English Breakfast Tea (REBT) Latte: 37
				wxBitmapButton* REBTLatte = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(474, 74), wxSize(89, 94));
					wxPanel* REBTLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
					wxBitmapButton* REBTLatteHomeButton = new wxBitmapButton(REBTLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
					notebook->AddPage(REBTLattepanel, "");
				// Matcha Tea Latte: 38 
				wxBitmapButton* matchaTeaLatte = new wxBitmapButton(teasTeaLattespanel, wxID_ANY, wxBitmap("bmp/", wxBITMAP_TYPE_BMP), wxPoint(54, 205), wxSize(89, 94));
					wxPanel* matchaTeaLattepanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
					wxBitmapButton* matchaTeaLatteHomeButton = new wxBitmapButton(matchaTeaLattepanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
					notebook->AddPage(matchaTeaLattepanel, "");

	// Cold Drinks Landing Page: 39
	wxPanel* colddrinkspanel = new wxPanel(notebook, wxID_ANY, wxPoint(0, 0), wxSize(600, 400));
	wxBitmapButton* coldHomeButton = new wxBitmapButton(colddrinkspanel, wxID_ANY, wxBitmap("bmp/backButtonIcon.bmp", wxBITMAP_TYPE_BMP), wxPoint(25, 325), wxSize(74, 49));
	notebook->AddPage(colddrinkspanel, "Cold Drinks");
		
		

	// Area for binding buttons to events below!
	//
	hotDrinks->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		cappachino->Bind(wxEVT_BUTTON, &MainFrame::CappachinoClicked, this);
		caffeMisto->Bind(wxEVT_BUTTON, &MainFrame::MistosClicked, this);
		espressos->Bind(wxEVT_BUTTON, &MainFrame::EspressosClicked, this);
			espresso->Bind(wxEVT_BUTTON, &MainFrame::EspressoClicked, this);
			espressoConPanna->Bind(wxEVT_BUTTON, &MainFrame::EspressoConPannaClicked, this);
		caffeAmericano->Bind(wxEVT_BUTTON, &MainFrame::CaffeAmericanoClicked, this);
		flatWhites->Bind(wxEVT_BUTTON, &MainFrame::FlatWhitesClicked, this);
			flatWhite->Bind(wxEVT_BUTTON, &MainFrame::FlatWhiteClicked, this);
			HAFlatWhite->Bind(wxEVT_BUTTON, &MainFrame::HAFlatWhiteClicked, this);
		lattes->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			caffeLatte->Bind(wxEVT_BUTTON, &MainFrame::CaffeLatteClicked, this);;
			BVLatte->Bind(wxEVT_BUTTON, &MainFrame::BVLatteClicked, this);
			CDLatte->Bind(wxEVT_BUTTON, &MainFrame::CDLatteClicked, this);
			PSLatte->Bind(wxEVT_BUTTON, &MainFrame::PSLatteClicked, this);
			CPLatte->Bind(wxEVT_BUTTON, &MainFrame::CPLatteClicked, this);
			CBLatte->Bind(wxEVT_BUTTON, &MainFrame::CBLatteClicked, this);
			SCALatte->Bind(wxEVT_BUTTON, &MainFrame::SCALatteClicked, this);
		macchiatos->Bind(wxEVT_BUTTON, &MainFrame::MacchiatosClicked, this);
			espressoMacchiato->Bind(wxEVT_BUTTON, &MainFrame::EspressoMacchiatoClicked, this);
			caramelMacchiato->Bind(wxEVT_BUTTON, &MainFrame::CaramelMacchiatoClicked, this);
			ACOMacchiato->Bind(wxEVT_BUTTON, &MainFrame::ACOMacchiatoClicked, this);
		mochas->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
			caffeMocha->Bind(wxEVT_BUTTON, &MainFrame::CaffeMochaClicked, this);
			WCMocha->Bind(wxEVT_BUTTON, &MainFrame::WCMochaClicked, this);
			peppermintMocha->Bind(wxEVT_BUTTON, &MainFrame::PeppermintMochaClicked, this);
			PWCMocha->Bind(wxEVT_BUTTON, &MainFrame::PWCMochaClicked, this);
			TWCMocha->Bind(wxEVT_BUTTON, &MainFrame::TWCMochaClicked, this);
		OHDrinks->Bind(wxEVT_BUTTON, &MainFrame::OHDrinksClicked, this);
			hotChocolate->Bind(wxEVT_BUTTON, &MainFrame::HotChocolateClicked, this);
			whiteHotChocolate->Bind(wxEVT_BUTTON, &MainFrame::WhiteHotChocolateClicked, this);
			steamers->Bind(wxEVT_BUTTON, &MainFrame::SteamersClicked, this);
			teasTeaLattes->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);
				HCMTea->Bind(wxEVT_BUTTON, &MainFrame::HCMTeaClicked, this);
				chaiTeaLatte->Bind(wxEVT_BUTTON, &MainFrame::ChaiTeaLatteClicked, this);
				LFTLatte->Bind(wxEVT_BUTTON, &MainFrame::LFTLatteClicked, this);
				REBTLatte->Bind(wxEVT_BUTTON, &MainFrame::REBTLatteClicked, this);
				matchaTeaLatte->Bind(wxEVT_BUTTON, &MainFrame::MatchaTeaLatteClicked, this);

	coldDrinks->Bind(wxEVT_BUTTON, &MainFrame::ColdPageClicked, this);

	hotHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HomeClicked, this);
		cappachinoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		mistoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		espressosHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			espressoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::EspressosClicked, this);
			espressoConPannaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::EspressosClicked, this);
		americanoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
		flatWhitesHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			flatWhiteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::FlatWhitesClicked, this);
			HAFlatWhiteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::FlatWhitesClicked, this);

		lattesHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			caffeLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			BVLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			CDLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			PSLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			CPLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			CBLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
			SCALatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::LattesClicked, this);
		macchiatosHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			ACOMacchiatoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MacchiatosClicked, this);
			caramelMacchiatoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MacchiatosClicked, this);
			espressoMacchiatoHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MacchiatosClicked, this);
		mochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			caffeMochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
			WCMochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
			peppermintMochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
			PWCMochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
			TWCMochaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::MochasClicked, this);
		OHDrinksHomeButton->Bind(wxEVT_BUTTON, &MainFrame::HotPageClicked, this);
			hotChocolateHomeButton->Bind(wxEVT_BUTTON, &MainFrame::OHDrinksClicked, this);
			whiteHotChocolateHomeButton->Bind(wxEVT_BUTTON, &MainFrame::OHDrinksClicked, this);
			steamersHomeButton->Bind(wxEVT_BUTTON, &MainFrame::OHDrinksClicked, this);
			teasTeaLattesHomeButton->Bind(wxEVT_BUTTON, &MainFrame::OHDrinksClicked, this);
				HCMTeaHomeButton->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);
				chaiTeaLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);
				LFTLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);
				REBTLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);
				matchaTeaLatteHomeButton->Bind(wxEVT_BUTTON, &MainFrame::TeasTeaLattesClicked, this);

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
		void MainFrame::EspressoClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(5);
		}
		void MainFrame::EspressoConPannaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(6);
		}
	void MainFrame::CaffeAmericanoClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(7);
	}
	void MainFrame::FlatWhitesClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(8);
	}
		void MainFrame::FlatWhiteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(9);
		}
		void MainFrame::HAFlatWhiteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(10);
		}
	void MainFrame::LattesClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(11);
	}
		void MainFrame::CaffeLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(12);
		}
		void MainFrame::BVLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(13);
		}
		void MainFrame::CDLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(14);
		}
		void MainFrame::PSLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(15);
		}
		void MainFrame::CPLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(16);
		}
		void MainFrame::CBLatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(17);
		}
		void MainFrame::SCALatteClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(18);
		}
	void MainFrame::MacchiatosClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(19);
	}
		void MainFrame::EspressoMacchiatoClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(20);
		}
		void MainFrame::CaramelMacchiatoClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(21);
		}
		void MainFrame::ACOMacchiatoClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(22);
		}
	void MainFrame::MochasClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(23);
	}
		void MainFrame::CaffeMochaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(24);
		}
		void MainFrame::WCMochaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(25);
		}
		void MainFrame::PeppermintMochaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(26);
		}
		void MainFrame::PWCMochaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(27);
		}
		void MainFrame::TWCMochaClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(28);
		}
	void MainFrame::OHDrinksClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(29);
	}
		void MainFrame::HotChocolateClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(30);
		}
		void MainFrame::WhiteHotChocolateClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(31);
		}
		void MainFrame::SteamersClicked(wxCommandEvent& evt) {
			this->bookInstance->ChangeSelection(32);
		}
		void MainFrame::TeasTeaLattesClicked(wxCommandEvent& evt) {
		this->bookInstance->ChangeSelection(33);
		}
			void MainFrame::HCMTeaClicked(wxCommandEvent& evt) {
				this->bookInstance->ChangeSelection(34);
			}
			void MainFrame::ChaiTeaLatteClicked(wxCommandEvent& evt) {
				this->bookInstance->ChangeSelection(35);
			}
			void MainFrame::LFTLatteClicked(wxCommandEvent& evt) {
				this->bookInstance->ChangeSelection(36);
			}
			void MainFrame::REBTLatteClicked(wxCommandEvent& evt) {
				this->bookInstance->ChangeSelection(37);
			}
			void MainFrame::MatchaTeaLatteClicked(wxCommandEvent& evt) {
				this->bookInstance->ChangeSelection(38);
			}

void MainFrame::ColdPageClicked(wxCommandEvent& evt) {
	this->bookInstance->ChangeSelection(39);
}
void MainFrame::HomeClicked(wxCommandEvent& evt) {
	this->bookInstance->ChangeSelection(0);
}
