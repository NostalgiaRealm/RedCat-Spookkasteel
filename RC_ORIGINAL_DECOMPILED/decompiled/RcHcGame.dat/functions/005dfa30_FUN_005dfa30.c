/*
 * FUN_005dfa30 at 005dfa30
 * undefined FUN_005dfa30(void)
 * Address ranges: 005dfa30-005dfa67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_005dfa30(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    return false;
  }
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  DVar2 = GetFileSize(*(HANDLE *)(param_1 + 4),(LPDWORD)0x0);
  return DVar1 == DVar2;
}

