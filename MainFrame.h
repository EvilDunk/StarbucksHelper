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
			void EspressoClicked(wxCommandEvent& evt);
			void EspressoConPannaClicked(wxCommandEvent& evt);
		void CaffeAmericanoClicked(wxCommandEvent& evt);
		void FlatWhitesClicked(wxCommandEvent& evt);
			void FlatWhiteClicked(wxCommandEvent& evt);
			void HAFlatWhiteClicked(wxCommandEvent& evt);
		void LattesClicked(wxCommandEvent& evt);
			void CaffeLatteClicked(wxCommandEvent& evt);
			void BVLatteClicked(wxCommandEvent& evt);
			void CDLatteClicked(wxCommandEvent& evt);
			void PSLatteClicked(wxCommandEvent& evt);
			void CPLatteClicked(wxCommandEvent& evt);
			void CBLatteClicked(wxCommandEvent& evt);
			void SCALatteClicked(wxCommandEvent& evt);
		void MacchiatosClicked(wxCommandEvent& evt);
			void EspressoMacchiatoClicked(wxCommandEvent& evt);
			void CaramelMacchiatoClicked(wxCommandEvent& evt);
			void ACOMacchiatoClicked(wxCommandEvent& evt);
		void MochasClicked(wxCommandEvent& evt);
			void CaffeMochaClicked(wxCommandEvent& evt);
			void WCMochaClicked(wxCommandEvent& evt);
			void PeppermintMochaClicked(wxCommandEvent& evt);
			void PWCMochaClicked(wxCommandEvent& evt);
			void TWCMochaClicked(wxCommandEvent& evt);
		void OHDrinksClicked(wxCommandEvent& evt);
			void HotChocolateClicked(wxCommandEvent& evt);
			void WhiteHotChocolateClicked(wxCommandEvent& evt);
			void SteamersClicked(wxCommandEvent& evt);
			void TeasTeaLattesClicked(wxCommandEvent& evt);
				void HCMTeaClicked(wxCommandEvent& evt);
				void ChaiTeaLatteClicked(wxCommandEvent& evt);
				void LFTLatteClicked(wxCommandEvent& evt);
				void REBTLatteClicked(wxCommandEvent& evt);
				void MatchaTeaLatteClicked(wxCommandEvent& evt);
	void ColdPageClicked(wxCommandEvent& evt);
	void HomeClicked(wxCommandEvent& evt);
		
};