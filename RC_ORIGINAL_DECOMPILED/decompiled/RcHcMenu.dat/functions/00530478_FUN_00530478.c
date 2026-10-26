/*
 * FUN_00530478 at 00530478
 * undefined1 __register FUN_00530478(int param_1, VARIANT * param_2)
 * Address ranges: 00530478-00530511
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00530478(int param_1,VARIANT *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_18;
  int local_14;
  
  iVar3 = FUN_00532e58(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2cc) + 8);
    uVar4 = iVar3 - 1;
    if (SBORROW4(iVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_18 = uVar4 + 1;
      local_14 = 0;
      do {
        puVar5 = (undefined4 *)FUN_00412384(*(undefined4 **)(param_1 + 0x2cc),local_14);
        piVar1 = (int *)*puVar5;
        piVar6 = (int *)FUN_00532e58(param_1);
        cVar2 = FUN_00494528(piVar1,piVar6);
        if (cVar2 != '\0') {
          iVar3 = FUN_00412384(*(undefined4 **)(param_1 + 0x2cc),local_14);
          FUN_00404e28(param_2,(VARIANTARG *)(iVar3 + 8));
          return 1;
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return 0;
}

