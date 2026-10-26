/*
 * FUN_0044fdb0 at 0044fdb0
 * undefined __register FUN_0044fdb0(undefined4 param_1, undefined4 param_2, DWORD param_3)
 * Address ranges: 0044fdb0-0044fe22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044fdb0(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_005737d4 + 0x95) == '\0') {
    DStack_4 = param_3;
    if (DAT_005737f0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_005737f0 = SetWindowsHookExA(3,FUN_0044fd6c,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_005737ec == (HANDLE)0x0) {
      DAT_005737ec = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_005737f4 == (HANDLE)0x0) {
      DAT_005737f4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,
                                  (LPTHREAD_START_ROUTINE)&LAB_0044fd10,(LPVOID)0x0,0,&DStack_4);
    }
  }
  return;
}

