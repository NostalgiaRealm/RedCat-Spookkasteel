/*
 * FUN_0047fbc8 at 0047fbc8
 * undefined __register FUN_0047fbc8(int param_1, LPCSTR param_2, LPSTR param_3, DWORD param_4)
 * Address ranges: 0047fbc8-0047fc1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047fbc8(int param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4)

{
  if (0 < (int)param_4) {
    if (param_1 == 0) {
      OemToCharBuffA(param_2,param_3,param_4);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573970);
      thunk_FUN_0047900c(param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573970);
    }
  }
  return;
}

