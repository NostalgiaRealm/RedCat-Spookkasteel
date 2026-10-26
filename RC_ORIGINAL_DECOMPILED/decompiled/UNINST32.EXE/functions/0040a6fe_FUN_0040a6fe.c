/*
 * FUN_0040a6fe at 0040a6fe
 * bool __cdecl FUN_0040a6fe(LPCSTR param_1, undefined4 param_2, LPSTR param_3)
 * Address ranges: 0040a6fe-0040a73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_0040a6fe(LPCSTR param_1,undefined4 param_2,LPSTR param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
  *(HANDLE *)(param_3 + 0x104) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    lstrcpyA(param_3,param_3 + 0x134);
    *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
  }
  return pvVar1 == (HANDLE)0xffffffff;
}

