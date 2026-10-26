/*
 * FUN_00471ac8 at 00471ac8
 * undefined __register FUN_00471ac8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00471ac8-00471d0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471ac8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte *local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (byte *)0x0;
  local_24 = 0;
  local_1c = 0;
  local_20 = (byte *)0x0;
  puStack_40 = &LAB_00471d0f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  iVar3 = FUN_004687b0(param_1);
  if (-1 < iVar3 + -1) {
    iVar7 = 0;
    local_10 = iVar3;
    do {
      piVar4 = (int *)FUN_00468730(local_8,iVar7);
      if (*(char *)(param_4 + -1) == '\0') {
        (**(code **)(*piVar4 + 0x30))(piVar4,0);
        piVar4[0x11] = 0;
      }
      else {
        if ((byte)(*(char *)((int)piVar4 + 0x36) - 1U) < 2) {
          cVar2 = (char)piVar4[0xd];
          if (((10 < (byte)(cVar2 - 1U)) && (cVar2 != '\x19')) && (cVar2 != ' ')) {
            iVar3 = *(int *)(param_4 + -8);
            FUN_004692f8((int)piVar4,&local_1c);
            local_18 = local_1c;
            local_14 = 0xb;
            FUN_00406a48((undefined4 *)PTR_PTR_005721a8,(int *)&local_20);
            FUN_00466e30(local_20,&local_18,0,iVar3);
          }
          piVar4[0x11] = -1;
          piVar4[0x10] = *(int *)(*(int *)(param_4 + -8) + 0x5c);
          iVar3 = (**(code **)(*piVar4 + 0x68))();
          piVar1 = (int *)(*(int *)(param_4 + -8) + 0x5c);
          *piVar1 = *piVar1 + iVar3 + 1;
        }
        else if (*(char *)((int)piVar4 + 0x36) == '\x04') {
          piVar4[0x11] = -1;
        }
        else {
          local_c = 0;
          FUN_00469390((int)piVar4,&local_24);
          piVar1 = *(int **)(*(int *)(param_4 + -8) + 0x30);
          iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,local_24);
          if (iVar3 == -1) {
            iVar6 = *(int *)(param_4 + -8);
            FUN_004692f8((int)piVar4,&local_28);
            local_18 = local_28;
            local_14 = 0xb;
            FUN_00406a48((undefined4 *)PTR_PTR_005724e0,(int *)&local_2c);
            FUN_00466e30(local_2c,&local_18,0,iVar6);
          }
          else {
            local_c = FUN_00468274(*(int **)(*(int *)(param_4 + -8) + 0x30),iVar3);
          }
          if (*(char *)((int)piVar4 + 0x36) == '\x03') {
            iVar3 = FUN_004677e8(local_c);
            piVar4[0x11] = iVar3;
          }
          else {
            piVar4[0x11] = iVar3 + *(int *)(*(int *)(param_4 + -8) + 0x88);
          }
          uVar5 = FUN_00468730(local_8,iVar7);
          (**(code **)(**(int **)(param_4 + -8) + 0x88))(*(int **)(param_4 + -8),uVar5,local_c);
          if (*(char *)(local_c + 0x20) != '\0') {
            *(undefined1 *)(*(int *)(param_4 + -8) + 0x94) = 1;
          }
          cVar2 = (**(code **)(*piVar4 + 0xc4))();
          if (cVar2 != '\0') {
            iVar3 = FUN_00467870(local_c);
            piVar4[0xf] = iVar3;
            piVar4[0x10] = *(int *)(*(int *)(param_4 + -8) + 0x68);
            piVar1 = (int *)(*(int *)(param_4 + -8) + 0x68);
            *piVar1 = *piVar1 + 1;
          }
        }
        (**(code **)(*piVar4 + 0x30))(piVar4,1);
      }
      iVar3 = FUN_00468730(local_8,iVar7);
      if ((byte)(*(char *)(iVar3 + 0x34) - 0x1aU) < 2) {
        iVar3 = param_4;
        piVar4 = (int *)FUN_00468730(local_8,iVar7);
        iVar6 = (**(code **)(*piVar4 + 0xd0))();
        FUN_00471ac8(iVar6,extraout_EDX,extraout_ECX,iVar3);
      }
      iVar7 = iVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00471d16;
  puStack_40 = (undefined1 *)0x471d0e;
  FUN_00403dd4((int *)&local_2c,5);
  return;
}

