/*
 * FUN_0053970c at 0053970c
 * undefined __register FUN_0053970c(int * param_1)
 * Address ranges: 0053970c-00539776
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053970c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_00538e94(param_1);
  uVar2 = FUN_0051e5f0(iVar1);
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_10 = uVar3 + 1;
    local_c = 0;
    do {
      piVar4 = (int *)FUN_00538e94(param_1);
      iVar1 = FUN_005375c0(piVar4,local_c);
      if (*(int *)(iVar1 + 0x68) != 0) {
        piVar4 = (int *)FUN_00538e94(param_1);
        iVar1 = FUN_005375c0(piVar4,local_c);
        FUN_00539778(param_1,iVar1);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

