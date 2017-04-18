#include "NewFrame.h"

//(*InternalHeaders(NewFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewFrame)
const long NewFrame::ID_BUTTON1 = wxNewId();
const long NewFrame::ID_TEXTCTRL1 = wxNewId();
const long NewFrame::ID_STATICTEXT1 = wxNewId();
const long NewFrame::ID_BUTTON2 = wxNewId();
const long NewFrame::ID_STATICTEXT2 = wxNewId();
const long NewFrame::ID_STATICTEXT3 = wxNewId();
const long NewFrame::ID_STATICTEXT4 = wxNewId();
const long NewFrame::ID_TEXTCTRL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewFrame,wxFrame)
	//(*EventTable(NewFrame)
	//*)
END_EVENT_TABLE()

NewFrame::NewFrame(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(NewFrame)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(318,341));
	Move(wxPoint(-1,-1));
	tblbayar = new wxButton(this, ID_BUTTON1, _("Bayar"), wxPoint(80,192), wxSize(62,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	fwaktu = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(136,104), wxSize(64,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("WAKTU MAIN"), wxPoint(64,104), wxSize(72,24), 0, _T("ID_STATICTEXT1"));
	tblbatal = new wxButton(this, ID_BUTTON2, _("Batal"), wxPoint(200,192), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("BOOKING LAPANGAN"), wxPoint(24,8), wxSize(143,32), wxALIGN_CENTRE|wxDOUBLE_BORDER, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(20,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Algerian"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Jam"), wxPoint(208,104), wxSize(19,16), 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Grand Total"), wxPoint(72,144), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	ftotal = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(136,144), wxSize(104,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewFrame::OnButton1Click);
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&NewFrame::OnTextCtrl1Text);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&NewFrame::OnClose);
	//*)
}

NewFrame::~NewFrame()
{
	//(*Destroy(NewFrame)
	//*)
}


void NewFrame::OnButton1Click(wxCommandEvent& event)
{
}
