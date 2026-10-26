/*
 * FUN_10012622 at 10012622
 * undefined4 __cdecl FUN_10012622(LPCSTR param_1)
 * Address ranges: 10012622-1001264b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10012622(LPCSTR param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_1000e342(uVar2);
    return 0xffffffff;
  }
  return 0;
}

