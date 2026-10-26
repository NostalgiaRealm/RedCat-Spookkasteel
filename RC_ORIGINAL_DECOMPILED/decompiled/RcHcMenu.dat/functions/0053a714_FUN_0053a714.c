/*
 * FUN_0053a714 at 0053a714
 * undefined __register FUN_0053a714(int * param_1)
 * Address ranges: 0053a714-0053a78e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a714(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar2 = (int *)FUN_00538fbc(param_1);
  FUN_005379b0(piVar2);
  piVar2 = (int *)FUN_00538860(param_1);
  FUN_00538300(piVar2);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    iVar3 = FUN_00538e94(param_1);
    iVar3 = FUN_0051e160(iVar3);
    uVar4 = iVar3 - 1;
    if (SBORROW4(iVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_10 = uVar4 + 1;
      local_c = 0;
      do {
        iVar3 = FUN_00538e94(param_1);
        iVar3 = FUN_00537478(iVar3,local_c);
        FUN_0053951c(param_1,iVar3);
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}

