// WosaXFSTestDoc.cpp : implementation of the CWosaXFSTestDoc class
//

#include "stdafx.h"
#include "WosaXFSTest.h"

#include "WosaXFSTestDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWosaXFSTestDoc

IMPLEMENT_DYNCREATE(CWosaXFSTestDoc, CDocument)

BEGIN_MESSAGE_MAP(CWosaXFSTestDoc, CDocument)
	//{{AFX_MSG_MAP(CWosaXFSTestDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWosaXFSTestDoc construction/destruction

CWosaXFSTestDoc::CWosaXFSTestDoc()
{
	// TODO: add one-time construction code here

}

CWosaXFSTestDoc::~CWosaXFSTestDoc()
{
}

BOOL CWosaXFSTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CWosaXFSTestDoc serialization

void CWosaXFSTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CWosaXFSTestDoc diagnostics

#ifdef _DEBUG
void CWosaXFSTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWosaXFSTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWosaXFSTestDoc commands
