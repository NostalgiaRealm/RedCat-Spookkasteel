/*
 * FUN_0040c888 at 0040c888
 * undefined4 __cdecl FUN_0040c888(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 0040c888-0040c8b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040c888(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040ca98(uVar2);
    return 0xffffffff;
  }
  return 0;
}

