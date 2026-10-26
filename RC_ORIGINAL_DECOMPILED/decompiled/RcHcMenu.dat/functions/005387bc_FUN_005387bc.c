/*
 * FUN_005387bc at 005387bc
 * undefined1 __register FUN_005387bc(int * param_1)
 * Address ranges: 005387bc-00538819
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_005387bc(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_14;
  uint local_10;
  
  iVar1 = FUN_00538e94(param_1);
  uVar2 = FUN_0051e5f0(iVar1);
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_10 = 0;
    do {
      piVar4 = (int *)FUN_00538e94(param_1);
      iVar1 = FUN_005375c0(piVar4,local_10);
      if (*(char *)(iVar1 + 0x60) != '\0') {
        return 1;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

