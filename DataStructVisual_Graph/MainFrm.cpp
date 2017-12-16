
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "DataStructVisual_Graph.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_GRAPH_OPEN, &CMainFrame::OnGraphOpen)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_OPEN, &CMainFrame::OnUpdateGraphOpen)
	ON_COMMAND(ID_GRAPH_SAVE, &CMainFrame::OnGraphSave)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_SAVE, &CMainFrame::OnUpdateGraphSave)
	ON_COMMAND(ID_GRAPH_CLEAR, &CMainFrame::OnGraphClear)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_CLEAR, &CMainFrame::OnUpdateGraphClear)
	ON_COMMAND(ID_GRAPH_VERTEX_ADD, &CMainFrame::OnGraphVertexAdd)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_VERTEX_ADD, &CMainFrame::OnUpdateGraphVertexAdd)
	ON_COMMAND(ID_GRAPH_VERTEX_DELETE, &CMainFrame::OnGraphVertexDelete)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_VERTEX_DELETE, &CMainFrame::OnUpdateGraphVertexDelete)
	ON_COMMAND(ID_GRAPH_VERTEX_INFO, &CMainFrame::OnGraphVertexInfo)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_VERTEX_INFO, &CMainFrame::OnUpdateGraphVertexInfo)
	ON_COMMAND(ID_GRAPH_EDGE_ADD, &CMainFrame::OnGraphEdgeAdd)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_EDGE_ADD, &CMainFrame::OnUpdateGraphEdgeAdd)
	ON_COMMAND(ID_GRAPH_EDGE_DELETE, &CMainFrame::OnGraphEdgeDelete)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_EDGE_DELETE, &CMainFrame::OnUpdateGraphEdgeDelete)
	ON_COMMAND(ID_GRAPH_EDGE_SETWEIGHT, &CMainFrame::OnGraphEdgeSetweight)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_EDGE_SETWEIGHT, &CMainFrame::OnUpdateGraphEdgeSetweight)
	ON_COMMAND(ID_GRAPH_EDGE_INFO, &CMainFrame::OnGraphEdgeInfo)
	ON_UPDATE_COMMAND_UI(ID_GRAPH_EDGE_INFO, &CMainFrame::OnUpdateGraphEdgeInfo)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ״̬��ָʾ��
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO: �ڴ���ӳ�Ա��ʼ������
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("δ�ܴ���������\n");
		return -1;      // δ�ܴ���
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("δ�ܴ���״̬��\n");
		return -1;      // δ�ܴ���
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: �������Ҫ��ͣ������������ɾ��������
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������



void CMainFrame::OnGraphOpen()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphOpen(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphSave()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphSave(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphClear()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphClear(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphVertexAdd()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphVertexAdd(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphVertexDelete()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphVertexDelete(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphVertexInfo()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphVertexInfo(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphEdgeAdd()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphEdgeAdd(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphEdgeDelete()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphEdgeDelete(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphEdgeSetweight()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphEdgeSetweight(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}


void CMainFrame::OnGraphEdgeInfo()
{
	// TODO: �ڴ���������������
}


void CMainFrame::OnUpdateGraphEdgeInfo(CCmdUI *pCmdUI)
{
	// TODO: �ڴ������������û����洦��������
}
