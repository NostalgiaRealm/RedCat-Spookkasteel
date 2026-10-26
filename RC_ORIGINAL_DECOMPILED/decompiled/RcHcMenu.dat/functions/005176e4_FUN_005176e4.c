/*
 * FUN_005176e4 at 005176e4
 * undefined __register FUN_005176e4(int param_1, int param_2)
 * Address ranges: 005176e4-00517726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005176e4(int param_1,int param_2)

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

