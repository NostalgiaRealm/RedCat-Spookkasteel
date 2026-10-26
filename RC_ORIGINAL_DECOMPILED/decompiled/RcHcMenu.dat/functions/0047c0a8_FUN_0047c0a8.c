/*
 * FUN_0047c0a8 at 0047c0a8
 * undefined4 __register FUN_0047c0a8(void)
 * Address ranges: 0047c0a8-0047c110
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047c0a8(void)

{
  HANDLE hMutex;
  LONG LVar1;
  
  if (DAT_005713b8 == 0) {
    InterlockedIncrement((LONG *)&DAT_005713bc);
    hMutex = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,s_LIBLDRMUX_00571413);
    if (DAT_005713b8 == 0) {
      FUN_0047c070();
    }
    LVar1 = InterlockedDecrement((LONG *)&DAT_005713bc);
    if (LVar1 == 0) {
      ReleaseMutex(hMutex);
      CloseHandle(hMutex);
    }
    else {
      ReleaseMutex(hMutex);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573920);
  return 1;
}

