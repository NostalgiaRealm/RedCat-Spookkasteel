/*
 * FUN_004b149c at 004b149c
 * undefined __register FUN_004b149c(uint param_1)
 * Address ranges: 004b149c-004b1524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b149c(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  if (0 < *(int *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      uVar2 = *(int *)(param_1 + 0x10) - 1;
      if (SBORROW4(*(int *)(param_1 + 0x10),1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_10 = uVar2 + 1;
        local_c = 0;
        do {
          puVar3 = (undefined4 *)FUN_004b146c(param_1,local_c);
          FUN_00403094((int *)*puVar3);
          local_c = local_c + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
    lVar1 = (longlong)*(int *)(param_1 + 8) * 4;
    if ((int)lVar1 != lVar1) {
      thunk_FUN_00402874(param_1);
    }
    FUN_00402800(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

