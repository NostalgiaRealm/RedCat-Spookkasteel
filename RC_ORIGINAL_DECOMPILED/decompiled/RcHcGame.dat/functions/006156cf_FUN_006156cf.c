/*
 * FUN_006156cf at 006156cf
 * undefined FUN_006156cf(void)
 * Address ranges: 006156cf-00615714
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_006156cf(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00614d0f(0xc,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00614d0f(8,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00615715(param_1);
    }
    uVar2 = FUN_00615837(uVar2);
  }
  return uVar2;
}

