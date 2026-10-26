/*
 * FUN_004a3288 at 004a3288
 * undefined __register FUN_004a3288(int param_1, int param_2)
 * Address ranges: 004a3288-004a32ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3288(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(uint *)(param_1 + 0x38);
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(iVar1 + 0xc) = uVar2;
  uVar2 = *(uint *)(param_1 + 0x3c);
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  *(uint *)(iVar1 + 0x10) = uVar2;
  return;
}

