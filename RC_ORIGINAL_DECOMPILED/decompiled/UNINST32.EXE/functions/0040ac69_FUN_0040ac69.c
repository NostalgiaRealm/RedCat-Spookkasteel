/*
 * FUN_0040ac69 at 0040ac69
 * undefined __cdecl FUN_0040ac69(LPCSTR param_1)
 * Address ranges: 0040ac69-0040acbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040ac69(LPCSTR param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  _SERVICE_STATUS local_20;
  
  hSCManager = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,1);
  if (hSCManager != (SC_HANDLE)0x0) {
    hService = OpenServiceA(hSCManager,param_1,0x10020);
    if (hService != (SC_HANDLE)0x0) {
      ControlService(hService,1,&local_20);
      DeleteService(hService);
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return;
}

