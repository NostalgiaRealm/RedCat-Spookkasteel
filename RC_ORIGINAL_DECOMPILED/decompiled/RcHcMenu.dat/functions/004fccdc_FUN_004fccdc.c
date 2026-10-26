/*
 * FUN_004fccdc at 004fccdc
 * undefined __register FUN_004fccdc(int * param_1, byte param_2)
 * Address ranges: 004fccdc-004fd02c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fccdc(int *param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_18;
  undefined4 *local_14;
  char *local_10;
  undefined3 uStack_c;
  byte local_9;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (char *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  uStack_c = 0;
  uVar2 = uStack_c;
  uStack_c = 0;
  puStack_24 = &LAB_004fd02d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (((char)param_1[0x9d] != '\0') && ((param_2 == 0x41 || (param_2 == 0x61)))) {
    *(undefined1 *)(param_1 + 0x9d) = 0;
  }
  local_8 = param_1;
  local_9 = param_2;
  if ((char)param_1[0x9d] != '\0') goto LAB_004fd012;
  if ((param_2 == *(byte *)(param_1 + 0x95)) || (puVar1 = &stack0xfffffffc, param_2 == 0x2e)) {
    FUN_00403f58((int *)&local_10,CONCAT31((int3)((uint)param_1 >> 8),(char)param_1[0x95]));
    iVar3 = FUN_0040431c(local_10,(char *)local_8[0x94]);
    if (iVar3 == 0) {
      FUN_00403f58((int *)&local_14,CONCAT31((int3)((uint)local_8 >> 8),(char)local_8[0x95]));
      FUN_00404038(local_8 + 0x94,local_14);
      param_1 = extraout_EDX;
      puVar1 = puStack_20;
    }
    else {
      MessageBeep(0x30);
      param_1 = extraout_EDX_00;
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  uVar5 = (uint)local_9;
  if (uVar5 == 0x3d || local_9 < 0x3d) {
    if (uVar5 == 0x3d) {
      FUN_004fd280((int)local_8,'\0');
      FUN_004fd3f4((int)local_8,*(byte *)((int)local_8 + 0x273));
    }
    else if (local_9 < 0x2a) {
      if (uVar5 == 8) goto LAB_004fcf94;
      if ((uVar5 == 0x20) || (uVar5 == 0x25)) {
        FUN_004fd280((int)local_8,'\0');
        FUN_004fd34c((int)local_8,local_9);
      }
    }
    else if (((uVar5 - 0x2a < 2) || (uVar5 == 0x2d)) || (uVar5 == 0x2f)) {
LAB_004fced6:
      FUN_004fd280((int)local_8,'\x01');
      FUN_004fd3f4((int)local_8,*(byte *)((int)local_8 + 0x273));
      *(byte *)((int)local_8 + 0x273) = local_9;
    }
    else if (uVar5 - 0x30 < 10) {
      if (*(char *)((int)local_8 + 0x272) == '\0') {
        iVar3 = FUN_00404030(local_8[0x94]);
        if ((iVar3 < 0xf) && ((local_8[0x94] != 0 || (local_9 != 0x30)))) {
          FUN_00403f58((int *)&local_18,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),local_9));
          FUN_00404038(local_8 + 0x94,local_18);
        }
        if (*(char *)((int)local_8 + 0x273) == '\0') {
          *(undefined1 *)(local_8 + 0x9c) = 0;
        }
      }
      else {
        FUN_00403f58(local_8 + 0x94,CONCAT31((int3)((uint)param_1 >> 8),local_9));
        *(undefined1 *)((int)local_8 + 0x272) = 0;
      }
    }
  }
  else if (uVar5 == 0x61 || local_9 < 0x61) {
    if ((uVar5 == 0x61) || (uVar5 == 0x41)) {
      FUN_00403db0(local_8 + 0x94);
      *(undefined1 *)((int)local_8 + 0x273) = 0;
      *(undefined1 *)(local_8 + 0x9c) = 0;
      *(undefined1 *)((int)local_8 + 0x271) = 0;
    }
    else {
      if (uVar5 == 0x42) goto LAB_004fcf94;
      if (uVar5 == 0x43) goto LAB_004fcf22;
    }
  }
  else if (uVar5 == 0x62) {
LAB_004fcf94:
    iVar3 = FUN_00404030(local_8[0x94]);
    if (0 < iVar3) {
      piVar6 = local_8 + 0x94;
      uVar4 = FUN_00404030(local_8[0x94]);
      uVar5 = uVar4 - 1;
      if (SBORROW4(uVar4,1)) {
        thunk_FUN_00402874(uVar4);
        uVar5 = extraout_ECX;
      }
      FUN_00404238(local_8[0x94],1,uVar5,piVar6);
    }
  }
  else if (uVar5 == 99) {
LAB_004fcf22:
    if (local_8[0x94] == 0) {
      if (*(char *)((int)local_8 + 0x271) == '\0') {
        *(undefined1 *)(local_8 + 0x9c) = 0;
      }
      else {
        *(undefined1 *)((int)local_8 + 0x271) = 0;
      }
    }
    else {
      FUN_00403db0(local_8 + 0x94);
    }
  }
  else if (uVar5 == 0x78) goto LAB_004fced6;
  if ((char)local_8[0x9d] == '\0') {
    FUN_004fd03c(local_8);
  }
  uVar2 = uStack_c;
  if (*(short *)((int)local_8 + 0x25a) != 0) {
    (*(code *)local_8[0x96])(local_8[0x97],local_8,local_9);
    uVar2 = uStack_c;
  }
LAB_004fd012:
  uStack_c = uVar2;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004fd034;
  puStack_24 = (undefined1 *)0x4fd02c;
  FUN_00403dd4((int *)&local_18,3);
  return;
}

