/*
 * FUN_00502eec at 00502eec
 * undefined __register FUN_00502eec(int * param_1, ushort param_2)
 * Address ranges: 00502eec-00502f1e;00502f3f-0050300b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502eec(int *param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint local_10;
  
  local_10 = param_1[0x81];
  uVar1 = param_2 - 0x21;
  switch(uVar1) {
  case 0:
    uVar1 = FUN_00502c08(param_1);
    bVar3 = SBORROW4(local_10,uVar1);
    local_10 = local_10 - uVar1;
    if (bVar3) {
      thunk_FUN_00402874(uVar1);
    }
    break;
  case 1:
    uVar1 = FUN_00502c08(param_1);
    bVar3 = SCARRY4(local_10,uVar1);
    local_10 = local_10 + uVar1;
    if (bVar3) {
      thunk_FUN_00402874(uVar1);
    }
    break;
  case 2:
    iVar2 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
    local_10 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
    break;
  case 3:
    local_10 = 0;
    break;
  case 5:
    bVar3 = SBORROW4(local_10,1);
    local_10 = local_10 - 1;
    if (bVar3) {
      thunk_FUN_00402874(uVar1);
    }
    break;
  case 7:
    bVar3 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar3) {
      thunk_FUN_00402874(uVar1);
    }
  }
  if ((int)local_10 < 0) {
    local_10 = 0;
  }
  iVar2 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
  uVar1 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if ((int)uVar1 < (int)local_10) {
    iVar2 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
    local_10 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
  }
  FUN_00502cb0(param_1,local_10);
  if ((char)param_1[0x85] != '\0') {
    FUN_00502d58(param_1,local_10);
  }
  return;
}

