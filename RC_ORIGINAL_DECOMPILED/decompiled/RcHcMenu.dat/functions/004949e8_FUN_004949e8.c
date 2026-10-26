/*
 * FUN_004949e8 at 004949e8
 * int __register FUN_004949e8(int * param_1)
 * Address ranges: 004949e8-00494a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004949e8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_00494858(param_1);
  iVar1 = FUN_00491e30(iVar1,extraout_EDX,extraout_ECX);
  iVar1 = FUN_0048ec24(iVar1);
  uVar2 = iVar1 + 0x8000;
  if (0xffff < uVar2) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  return uVar2 - 0x8000;
}

