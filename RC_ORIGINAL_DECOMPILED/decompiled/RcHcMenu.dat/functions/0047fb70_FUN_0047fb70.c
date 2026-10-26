/*
 * FUN_0047fb70 at 0047fb70
 * undefined __register FUN_0047fb70(int param_1, LPCSTR param_2, LPSTR param_3, DWORD param_4)
 * Address ranges: 0047fb70-0047fbc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047fb70(int param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4)

{
  if (0 < (int)param_4) {
    if (param_1 == 0) {
      CharToOemBuffA(param_2,param_3,param_4);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573988);
      thunk_FUN_00479006(param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573988);
    }
  }
  return;
}

