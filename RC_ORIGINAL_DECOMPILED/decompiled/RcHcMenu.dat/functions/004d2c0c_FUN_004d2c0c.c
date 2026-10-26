/*
 * FUN_004d2c0c at 004d2c0c
 * undefined __register FUN_004d2c0c(int * param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004d2c0c-004d2e24;004d2e49-004d2e84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d2c0c(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  VARIANT local_150;
  undefined1 *local_140;
  undefined4 *local_13c;
  int local_138;
  int local_134;
  byte local_130 [208];
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  char *pcStack_50;
  undefined1 *puStack_4c;
  undefined *puStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  uint uVar6;
  
  local_24 = &stack0xfffffffc;
  iVar5 = 0x29;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  iVar5 = 0;
  UNLOCK();
  do {
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  local_28 = &LAB_004d2f1d;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_30 = 0x4d2c51;
  iVar5 = FUN_00494858(param_4);
  local_30 = 0x4d2c56;
  bVar2 = FUN_004918fc(iVar5);
  if (!bVar2) {
    local_30 = 0x4d2c6a;
    FUN_00402fe0(*param_1,local_130);
    local_30 = 0x4d2c78;
    FUN_00403fd4(&local_30,local_130);
    pcStack_34 = ".DeleteAppObjsByProps: ";
    pcStack_38 = "The object does not have a corresponding table in the database";
    puStack_3c = (undefined1 *)0x4d2c92;
    FUN_004040f0(&local_2c,3);
    puStack_3c = (undefined1 *)0x4d2ca4;
    FUN_00403d94(local_2c);
  }
  puStack_40 = &LAB_004d2e96;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  puStack_4c = &LAB_004d2e85;
  pcStack_50 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_50;
  puStack_54 = (undefined1 *)0x4d2cd2;
  puStack_48 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  piVar3 = (int *)FUN_004cf200(param_1);
  puStack_54 = (undefined1 *)0x4d2cdd;
  iVar5 = FUN_00494858(param_4);
  puStack_54 = (undefined1 *)0x4d2cf0;
  FUN_0040407c(&local_134,(undefined4 *)"DELETE FROM ",*(undefined4 **)(iVar5 + 0x3c));
  puStack_54 = (undefined1 *)0x4d2cfe;
  (**(code **)(*piVar3 + 0x60))(piVar3,local_134);
  bVar2 = true;
  local_28 = (undefined1 *)0x1;
  uVar6 = 0;
  do {
    if (bVar2) {
      puStack_54 = (undefined1 *)0x4d2d2b;
      (**(code **)(*piVar3 + 0x60))(piVar3," WHERE ");
    }
    else {
      puStack_54 = (undefined1 *)0x4d2d3a;
      (**(code **)(*piVar3 + 0x60))(piVar3," AND ");
    }
    bVar2 = false;
    if (((int)uVar6 < 0) || (uVar4 = uVar6, 0 < (int)uVar6)) {
      puStack_54 = (undefined1 *)0x4d2d4f;
      uVar4 = thunk_FUN_00402874(uVar6);
    }
    puStack_54 = (undefined1 *)0x4d2d5a;
    iVar5 = FUN_00496d84(*(int *)(&stack0xffffffe0 + uVar4 * 4));
    puStack_54 = (undefined1 *)0x4d2d6d;
    FUN_0040407c(&local_138,*(undefined4 **)(iVar5 + 0x1c),(undefined4 *)&DAT_004d300c);
    puStack_54 = (undefined1 *)0x4d2d7b;
    (**(code **)(*piVar3 + 0x60))(piVar3,local_138);
    puStack_48 = &DAT_004d3018;
    puStack_4c = (undefined1 *)0x4d2d8e;
    FUN_00409bd8(uVar6,(int *)&local_140);
    puStack_4c = local_140;
    pcStack_50 = "Param";
    puStack_54 = (undefined1 *)0x4d2da9;
    FUN_004040f0((int *)&local_13c,3);
    puStack_54 = (undefined1 *)0x4d2dbb;
    local_24 = (undefined1 *)FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',local_13c);
    if (((int)uVar6 < 0) || (uVar4 = uVar6, 0 < (int)uVar6)) {
      puStack_54 = (undefined1 *)0x4d2dcf;
      uVar4 = thunk_FUN_00402874(uVar6);
    }
    puStack_54 = (undefined1 *)0x4d2de0;
    FUN_00496550(*(int **)(&stack0xffffffe0 + uVar4 * 4),&local_150);
    puStack_54 = (undefined1 *)0x4d2dee;
    FUN_004d4ebc((int)local_24,(undefined4 *)&local_150);
    puStack_54 = (undefined1 *)0x4d2df9;
    FUN_004d7000(piVar3,(int)local_24);
    uVar6 = uVar6 + 1;
    local_28 = (undefined1 *)((int)local_28 + -1);
  } while (local_28 != (undefined1 *)0x0);
  puStack_58 = &LAB_004d2e25;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  uStack_60 = 0x4d2e1b;
  puStack_54 = &stack0xfffffffc;
  FUN_004d5b68(piVar3);
  puVar1 = puStack_54;
  *in_FS_OFFSET = iStack_5c;
  puStack_54 = (undefined1 *)0x4d2e51;
  iVar5 = (**(code **)(*piVar3 + 0x14))(piVar3,*piVar3,puVar1);
  if (0 < iVar5) {
    puStack_54 = (undefined1 *)0x4d2e62;
    iVar5 = FUN_00402fdc(param_4);
    puStack_54 = (undefined1 *)0x4d2e6f;
    FUN_004ced38((int *)param_1[1],iVar5);
  }
  *in_FS_OFFSET = (int)pcStack_50;
  puStack_48 = &LAB_004d2e8c;
  puStack_4c = (undefined1 *)0x4d2e84;
  FUN_00403094(piVar3);
  return;
}

