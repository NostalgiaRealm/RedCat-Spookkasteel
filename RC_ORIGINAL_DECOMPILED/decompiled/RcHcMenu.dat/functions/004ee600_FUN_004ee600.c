/*
 * FUN_004ee600 at 004ee600
 * undefined __register FUN_004ee600(int param_1)
 * Address ranges: 004ee600-004ee655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ee600(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_10;
  int local_c;
  
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 0x14));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      piVar3 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x14))
                                (*(undefined4 **)(param_1 + 0x14),local_c);
      iVar1 = FUN_00403224(piVar3,(int)&LAB_004ed570);
      FUN_004ef08c(iVar1);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

