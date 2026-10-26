/*
 * FUN_00494974 at 00494974
 * undefined __register FUN_00494974(int * param_1, byte * param_2)
 * Address ranges: 00494974-004949bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494974(int *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00494954(param_1);
  uVar2 = iVar1 + 0x8000;
  if (0xffff < uVar2) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  FUN_0048d0d4((short)uVar2 + -0x8000,param_2);
  uVar3 = FUN_00402fdc(param_1);
  FUN_0048e0c0((int)param_2,uVar3);
  return;
}

