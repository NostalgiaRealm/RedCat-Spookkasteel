/*
 * FUN_004f8c70 at 004f8c70
 * undefined __register FUN_004f8c70(int * param_1)
 * Address ranges: 004f8c70-004f8d2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8c70(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  int extraout_EDX_00;
  bool bVar4;
  int local_14;
  int local_10;
  uint local_c;
  
  local_10 = FUN_00432178(param_1);
  iVar1 = FUN_004f896c((int)param_1);
  uVar2 = iVar1 - 2;
  if (SBORROW4(iVar1,2)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_c = 0;
    do {
      uVar2 = FUN_004f8944((int)param_1,local_c);
      bVar4 = SBORROW4(local_10,uVar2);
      local_10 = local_10 - uVar2;
      if (bVar4) {
        thunk_FUN_00402874(uVar2);
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (0 < local_10) {
    iVar1 = FUN_004f896c((int)param_1);
    if (0 < iVar1) {
      uVar3 = FUN_004f896c((int)param_1);
      uVar2 = uVar3 - 1;
      if (SBORROW4(uVar3,1)) {
        thunk_FUN_00402874(uVar3);
        uVar2 = extraout_EDX;
      }
      FUN_004f8334((int *)param_1[0x82],uVar2,local_10);
      uVar2 = FUN_004f896c((int)param_1);
      iVar1 = uVar2 - 1;
      if (SBORROW4(uVar2,1)) {
        thunk_FUN_00402874(uVar2);
        iVar1 = extraout_EDX_00;
      }
      iVar1 = FUN_004f6c58(*(int *)(param_1[0x80] + 0x1f0),iVar1);
      FUN_004f6bb0(iVar1,local_10);
    }
  }
  return;
}

