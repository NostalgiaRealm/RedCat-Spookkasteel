/*
 * FUN_00522954 at 00522954
 * undefined __register FUN_00522954(int * param_1, short * param_2, undefined4 param_3)
 * Address ranges: 00522954-00522a61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00522954(int *param_1,short *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte local_d;
  short *local_c;
  int *local_8;
  
  local_d = (byte)param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004376dc((int)param_1,param_2,param_3);
  if ((*local_c == 0x5d) || ((*local_c == 0x79 && ((local_d & 1) != 0)))) {
    iVar2 = FUN_00520c38((int)local_8);
    if (iVar2 != 0) {
      iVar2 = FUN_00523748(local_8[0x9d]);
      if (iVar2 != -1) {
        FUN_00523ae0((int *)local_8[0x9d],(int *)(local_8[0x9d] + 0x214));
        local_18 = local_8[0xc];
        iVar3 = FUN_00523748(local_8[0x9d]);
        piVar5 = (int *)(local_8[0x9d] + 0x210);
        iVar2 = *piVar5;
        if (SBORROW4(iVar3,*piVar5)) {
          thunk_FUN_00402874(local_8[0x9d]);
        }
        uVar4 = FUN_005235f8((int *)local_8[0x9d]);
        lVar1 = (longlong)(iVar3 - iVar2) * (longlong)(int)uVar4;
        iVar2 = (int)lVar1;
        if (iVar2 != lVar1) {
          thunk_FUN_00402874(uVar4);
        }
        uVar4 = FUN_00520c1c((int)local_8);
        local_14 = iVar2 + *(int *)(uVar4 + 0x3c);
        if (SCARRY4(iVar2,*(int *)(uVar4 + 0x3c))) {
          thunk_FUN_00402874(uVar4);
        }
        FUN_0043228c(local_8,&local_18,&local_20);
        local_18 = local_20;
        local_14 = local_1c;
        piVar5 = (int *)FUN_00520c38((int)local_8);
        (**(code **)(*piVar5 + 0x40))(piVar5,local_18,local_14);
      }
    }
  }
  return;
}

