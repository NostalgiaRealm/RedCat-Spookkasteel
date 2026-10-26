/*
 * FUN_004f79b8 at 004f79b8
 * undefined __register FUN_004f79b8(int * param_1, undefined4 param_2)
 * Address ranges: 004f79b8-004f7b35;004f7b3d-004f7b52;004f7b5a-004f7b60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f79b8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_10;
  
  puStack_28 = (undefined1 *)0x4f79cc;
  FUN_00436dd8(param_1,param_2);
  puStack_28 = (undefined1 *)0x4f79d4;
  bVar2 = FUN_00438c84((int)param_1);
  if ((!bVar2) || ((*(byte *)(param_1 + 8) & 2) != 0)) {
    return;
  }
  puStack_28 = (undefined1 *)0x4f79f5;
  piVar3 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
  puStack_2c = &LAB_004f7b53;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4f7a0e;
  puStack_28 = &stack0xfffffffc;
  local_10 = FUN_00432178(param_1);
  puStack_34 = (undefined1 *)0x4f7a1f;
  iVar4 = FUN_0041300c(param_1[0x7c]);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      puStack_34 = (undefined1 *)0x4f7a39;
      iVar5 = FUN_004f6c58(param_1[0x7c],iVar7);
      if (*(char *)(iVar5 + 0x1f) == '\0') {
        local_10 = local_10 - *(int *)(iVar5 + 0x10);
      }
      else {
        puStack_34 = (undefined1 *)0x4f7a4b;
        FUN_004121d8(piVar3,iVar5);
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0 < piVar3[2]) {
    puStack_34 = (undefined1 *)0x4f7a72;
    (**(code **)(*(int *)param_1[0x7c] + 0x14))();
    puStack_38 = &LAB_004f7b36;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    do {
      iVar4 = piVar3[2];
      iVar5 = local_10 % iVar4;
      iVar7 = local_10 / iVar4;
      iVar8 = iVar4 + -1;
      if (-1 < iVar8) {
        do {
          iVar6 = FUN_00412384(piVar3,iVar8);
          if (iVar8 == 0) {
            iVar7 = iVar7 + iVar5;
          }
          FUN_004f6bb0(iVar6,iVar7);
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
      iVar7 = local_10 / iVar4;
      iVar8 = iVar4 + -1;
      if (-1 < iVar8) {
        do {
          iVar6 = FUN_00412384(piVar3,iVar8);
          if (iVar8 == 0) {
            iVar7 = iVar7 + iVar5;
          }
          if (iVar7 != *(int *)(iVar6 + 0x10)) {
            FUN_00412224(piVar3,iVar8);
            local_10 = local_10 - *(int *)(iVar6 + 0x10);
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
      puVar1 = puStack_34;
    } while ((piVar3[2] != 0) && (piVar3[2] != iVar4));
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = (undefined1 *)0x4f7b3d;
    iVar4 = *(int *)param_1[0x7c];
    puStack_38 = (undefined1 *)0x4f7b35;
    (**(code **)(iVar4 + 0x18))((int *)param_1[0x7c],iVar4,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x4f7b5a;
  puStack_2c = (undefined1 *)0x4f7b52;
  FUN_00403094(piVar3);
  return;
}

