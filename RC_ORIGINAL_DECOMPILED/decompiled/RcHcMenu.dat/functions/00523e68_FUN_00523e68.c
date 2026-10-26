/*
 * FUN_00523e68 at 00523e68
 * int __register FUN_00523e68(int * param_1)
 * Address ranges: 00523e68-00523eac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00523e68(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar1 = FUN_005237e8(param_1);
  uVar2 = param_1[0x81] - param_1[0x84];
  if (SBORROW4(param_1[0x81],param_1[0x84])) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar1 = extraout_EDX;
  }
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    iVar1 = extraout_EDX_00;
  }
  iVar1 = FUN_004e3058(uVar3,iVar1);
  return iVar1;
}

