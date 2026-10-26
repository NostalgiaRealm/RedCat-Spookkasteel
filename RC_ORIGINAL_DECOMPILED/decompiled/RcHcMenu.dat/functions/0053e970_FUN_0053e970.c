/*
 * FUN_0053e970 at 0053e970
 * undefined __register FUN_0053e970(int param_1)
 * Address ranges: 0053e970-0053e9f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e970(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_EDX;
  uint uVar3;
  byte local_2c [28];
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x210) != 0) {
    local_8 = param_1;
    iVar1 = FUN_0048ec24(*(int *)(param_1 + 0x3bc));
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_10 = uVar2 + 1;
      local_c = 0;
      do {
        FUN_0048f02c(*(int **)(local_8 + 0x3bc),local_c,(undefined4 *)local_2c);
        iVar1 = FUN_00492440(*(int **)(local_8 + 0x210),local_2c);
        uVar2 = *(uint *)(iVar1 + 4);
        uVar3 = local_c;
        if (100 < local_c) {
          uVar2 = thunk_FUN_00402874(uVar2);
          uVar3 = extraout_EDX;
        }
        *(uint *)(local_8 + 0x224 + uVar3 * 4) = uVar2;
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}

