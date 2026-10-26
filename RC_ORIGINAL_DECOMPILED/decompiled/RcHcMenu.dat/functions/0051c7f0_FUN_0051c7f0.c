/*
 * FUN_0051c7f0 at 0051c7f0
 * uint __register FUN_0051c7f0(int param_1)
 * Address ranges: 0051c7f0-0051c84d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0051c7f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  uint local_10;
  
  uVar1 = FUN_0051e5f0(*(int *)(param_1 + 0x3c));
  uVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar3 = FUN_0051e404(*(int **)(param_1 + 0x3c),local_10);
      if (iVar3 == param_1) {
        return local_10;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0xffffffff;
}

