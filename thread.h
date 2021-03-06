#ifndef _THREAD_H_
#define _THREAD_H_

#include <Windows.h>

class Thread
{
public:
	Thread();
	virtual ~Thread();

	virtual void    Run() = 0;
	void            Start();
	void            Stop();
	bool            IsStop();

protected:
	static DWORD WINAPI ThreadProc(LPVOID p);

private:
	bool    m_stopFlag;
	HANDLE m_hThread;
};

#endif