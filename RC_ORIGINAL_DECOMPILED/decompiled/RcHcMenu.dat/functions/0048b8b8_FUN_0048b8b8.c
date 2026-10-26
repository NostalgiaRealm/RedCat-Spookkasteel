/*
 * FUN_0048b8b8 at 0048b8b8
 * undefined __register FUN_0048b8b8(int * param_1, int * param_2)
 * Address ranges: 0048b8b8-0048baec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048b8b8(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int local_140;
  byte local_13c [256];
  undefined4 *local_3c;
  byte *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  uint local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_140 = 0;
  pcVar8 = (char *)0x0;
  local_3c = (undefined4 *)0x0;
  local_34 = 0;
  local_38 = (byte *)0x0;
  local_14 = (undefined4 *)0x0;
  piVar5 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffffeac;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    local_10 = (int *)FUN_00403224(local_c,(int)&PTR_FUN_0048b6c0);
    local_18 = (**(code **)(*local_10 + 0x70))();
    if ((float10)local_18 < *(float10 *)((int)local_8 + 0x3a)) {
      local_30 = (**(code **)(*local_10 + 0x70))();
      local_2c = 0;
      iVar2 = FUN_0048c068((int)local_10);
      FUN_00409804(*(undefined **)(iVar2 + 0x24),&local_34);
      local_28 = local_34;
      local_24 = 0xb;
      local_20 = FUN_0048b81c();
      local_1c = 0;
      puVar6 = &local_30;
      FUN_00406a48(&PTR_DAT_0048b748,(int *)&local_38);
      FUN_0040a894(local_38,puVar6,2,(int *)pcVar8);
      pcVar8 = "DoValidate";
      puVar6 = local_14;
      puVar7 = local_14;
      piVar3 = (int *)FUN_00495ee0((int)local_c);
      piVar5 = local_c;
      FUN_00402fe0(*local_8,local_13c);
      FUN_00403fd4((int *)&local_3c,local_13c);
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_3c,(int)piVar5,piVar3,puVar6,
                           (int)puVar7,(undefined4 *)pcVar8);
      FUN_0040382c(uVar4);
    }
    local_18 = (**(code **)(*local_10 + 0x70))();
    if (*(float10 *)(local_8 + 0xc) < (float10)local_18) {
      local_30 = (**(code **)(*local_10 + 0x70))();
      local_2c = 0;
      iVar2 = FUN_0048c068((int)local_10);
      FUN_00409804(*(undefined **)(iVar2 + 0x24),&local_140);
      local_28 = local_140;
      local_24 = 0xb;
      local_20 = FUN_0048b848();
      local_1c = 0;
      puVar6 = &local_30;
      FUN_00406a48((undefined4 *)&LAB_0048b750,(int *)&stack0xfffffebc);
      FUN_0040a894((byte *)pcVar8,puVar6,2,(int *)pcVar8);
      pcVar8 = "DoValidate";
      puVar6 = local_14;
      puVar7 = local_14;
      piVar3 = (int *)FUN_00495ee0((int)local_c);
      piVar5 = local_c;
      FUN_00402fe0(*local_8,local_13c);
      FUN_00403fd4((int *)&stack0xfffffeb8,local_13c);
      uVar4 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',puVar7,(int)piVar5,piVar3,puVar6,
                           (int)puVar7,(undefined4 *)pcVar8);
      FUN_0040382c(uVar4);
    }
  }
  *in_FS_OFFSET = (int)piVar5;
  FUN_00403dd4((int *)&stack0xfffffeb8,3);
  FUN_00403dd4((int *)&local_3c,3);
  FUN_00403db0((int *)&local_14);
  return;
}

