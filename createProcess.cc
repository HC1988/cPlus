	STARTUPINFO si;
	memset(&si,0,sizeof(STARTUPINFO));
	si.cb=sizeof(STARTUPINFO);
	si.dwFlags=STARTF_USESHOWWINDOW;
	si.wShowWindow=SW_SHOW;
	PROCESS_INFORMATION pi;
	CString openFilepath("processB.exe");
	LPWSTR newOpenFilePath=(LPWSTR)(LPCTSTR)openFilepath;
	CreateProcess(NULL,newOpenFilePath,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi);
