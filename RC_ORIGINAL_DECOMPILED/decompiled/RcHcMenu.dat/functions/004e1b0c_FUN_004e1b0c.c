/*
 * FUN_004e1b0c at 004e1b0c
 * undefined __register FUN_004e1b0c(int * param_1, uint * param_2)
 * Address ranges: 004e1b0c-004e1c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1b0c(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  uint local_14;
  
  iVar5 = *(int *)(param_1[0xb5] + 0x3c);
  FUN_00432744(param_1[0xb5],param_2);
  FUN_00429308((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  (**(code **)(*(int *)param_1[0xb5] + 0x8c))((int *)param_1[0xb5],0);
  piVar3 = (int *)(param_1[0xb5] + 0x30);
  iVar4 = *(int *)(param_1[0xb4] + 0x30) - *piVar3;
  if (SBORROW4(*(int *)(param_1[0xb4] + 0x30),*piVar3)) {
    thunk_FUN_00402874(param_1[0xb5]);
    iVar4 = extraout_EDX_00;
  }
  FUN_00431f78((int *)param_1[0xb5],iVar4);
  (**(code **)(*(int *)param_1[0xb5] + 0x8c))((int *)param_1[0xb5],1);
  uVar1 = *(int *)(param_1[0xb5] + 0x3c) - iVar5;
  if (SBORROW4(*(int *)(param_1[0xb5] + 0x3c),iVar5)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (uVar1 != 0) {
    uVar2 = FUN_004321bc(param_1);
    iVar5 = uVar2 + uVar1;
    if (SCARRY4(uVar2,uVar1)) {
      thunk_FUN_00402874(uVar2);
      iVar5 = extraout_EDX_01;
    }
    FUN_0044aa68(param_1,iVar5);
    iVar5 = FUN_0043579c((int)param_1);
    local_14 = iVar5 - 1;
    if (SBORROW4(iVar5,1)) {
      local_14 = thunk_FUN_00402874(local_14);
    }
    if (-1 < (int)local_14) {
      do {
        iVar5 = FUN_00435760((int)param_1,local_14);
        if (((iVar5 != param_1[0xb5]) &&
            (iVar5 = FUN_00435760((int)param_1,local_14), iVar5 != param_1[0xb4])) &&
           (iVar5 = FUN_00435760((int)param_1,local_14), *(char *)(iVar5 + 0x47) != '\0')) {
          iVar5 = FUN_00435760((int)param_1,local_14);
          uVar2 = *(int *)(iVar5 + 0x34) + uVar1;
          if (SCARRY4(*(int *)(iVar5 + 0x34),uVar1)) {
            uVar2 = thunk_FUN_00402874(uVar2);
          }
          piVar3 = (int *)FUN_00435760((int)param_1,local_14);
          FUN_00431f54(piVar3,uVar2);
        }
        local_14 = local_14 - 1;
      } while (local_14 != 0xffffffff);
    }
  }
  return;
}

