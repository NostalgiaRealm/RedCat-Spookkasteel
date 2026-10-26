/*
 * FUN_00409e3a at 00409e3a
 * undefined __cdecl FUN_00409e3a(LPCSTR param_1)
 * Address ranges: 00409e3a-00409ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00409e3a(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  CHAR local_104 [256];
  
  FUN_0040a6db(param_1,0);
  FUN_0040a440(param_1);
  iVar1 = lstrlenA(param_1);
  if ((4 < iVar1) && (DAT_004136b0 != 0)) {
    iVar2 = lstrcmpiA(param_1 + iVar1 + -4,&DAT_0041266c);
    if (iVar2 == 0) {
      lstrcpyA(local_104,param_1);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_00412664);
      FUN_0040a440(local_104);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_0041265c);
      FUN_0040a440(local_104);
    }
  }
  return;
}

