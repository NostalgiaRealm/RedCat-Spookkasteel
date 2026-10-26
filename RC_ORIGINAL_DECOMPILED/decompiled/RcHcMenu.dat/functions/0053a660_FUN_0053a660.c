/*
 * FUN_0053a660 at 0053a660
 * undefined __register FUN_0053a660(int * param_1)
 * Address ranges: 0053a660-0053a6d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 38 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 38 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_0053a660(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00521ab8(param_1);
  iVar1 = FUN_00538e94(param_1);
  iVar1 = FUN_0051e160(iVar1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      iVar1 = FUN_00538e94(param_1);
      iVar1 = FUN_00537478(iVar1,local_c);
      if (*(int *)(iVar1 + 0x68) != 0) {
        iVar1 = FUN_00538e94(param_1);
        iVar1 = FUN_00537478(iVar1,local_c);
        FUN_0053951c(param_1,iVar1);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

