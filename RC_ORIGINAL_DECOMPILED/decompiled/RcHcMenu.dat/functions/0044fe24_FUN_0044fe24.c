/*
 * FUN_0044fe24 at 0044fe24
 * undefined __register FUN_0044fe24(void)
 * Address ranges: 0044fe24-0044fe7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044fe24(void)

{
  DWORD DVar1;
  
  if (DAT_005737f0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_005737f0);
  }
  DAT_005737f0 = (HHOOK)0x0;
  if (DAT_005737f4 != (HANDLE)0x0) {
    SetEvent(DAT_005737ec);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_005737e8) {
      WaitForSingleObject(DAT_005737f4,0xffffffff);
    }
    CloseHandle(DAT_005737f4);
    DAT_005737f4 = (HANDLE)0x0;
  }
  return;
}

