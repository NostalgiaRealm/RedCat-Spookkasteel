/*
 * FUN_00530414 at 00530414
 * undefined1 __register FUN_00530414(int param_1)
 * Address ranges: 00530414-00530477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00530414(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x2cc) + 8);
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar3 = FUN_00412384(*(undefined4 **)(param_1 + 0x2cc),local_10);
      bVar1 = FUN_00405c2c((short *)(iVar3 + 8));
      if (bVar1) {
        return 1;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

