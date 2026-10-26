/*
 * FUN_0040a740 at 0040a740
 * bool __cdecl FUN_0040a740(LPSTR param_1)
 * Address ranges: 0040a740-0040a77c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_0040a740(LPSTR param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
  if (BVar1 != 0) {
    lstrcpyA(param_1,param_1 + 0x134);
    *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
  }
  return BVar1 == 0;
}

