#pragma once

// general error handler
void OnError(LPCSTR lpszFunction);
extern void ErrorMsg(char frmt[], ...);
extern int MessageOut(HWND hWnd, long strMsg, long strTitle, UINT mbstatus);
extern int MessageOut(HWND hWnd, long strMsg, long strTitle, UINT mbstatus, long val);
extern int MessageOut(HWND hWnd, long strMsg, long strTitle, UINT mbstatus, long val1, long val2);
