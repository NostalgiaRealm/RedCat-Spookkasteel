/*
 * FUN_004c375c at 004c375c
 * undefined __register FUN_004c375c(int * param_1, int * param_2)
 * Address ranges: 004c375c-004c38d6;004c394e-004c396c;004c39e4-004c39f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 9 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 9 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c375c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_14c;
  VARIANTARG local_148;
  VARIANTARG local_138;
  byte local_128 [196];
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  char *pcStack_38;
  undefined1 *puStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = (undefined4 *)&DAT_0000002a;
  do {
    local_14 = (undefined4 *)((int)local_14 + -1);
  } while (local_14 != (undefined4 *)0x0);
  LOCK();
  UNLOCK();
  local_10 = 0;
  local_28 = &LAB_004c3a55;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (char *)0x4c3798;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar3 + 4) == 0) {
    pcStack_30 = "Unprepared ";
    puStack_34 = (undefined1 *)0x4c37b3;
    FUN_00402fe0(*local_8,local_128);
    puStack_34 = (undefined1 *)0x4c37c1;
    FUN_00403fd4((int *)&local_28,local_128);
    puStack_34 = local_28;
    pcStack_38 = ".DropIndexFor.";
    puStack_3c = (undefined1 *)0x4c37d6;
    FUN_004040f0((int *)&local_24,3);
    puStack_3c = (undefined1 *)0x4c37e8;
    FUN_00403d94(local_24);
  }
  puStack_3c = (undefined1 *)0x4c37f6;
  FUN_00403e48((int *)&local_14,*(int *)(local_10 + 0x3c));
  puStack_40 = &LAB_004c39fa;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_4c = &LAB_004c396d;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x4c3825;
  puStack_48 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  iVar3 = FUN_00403224(local_c,(int)&DAT_004bca60);
  puStack_54 = (undefined1 *)0x4c382d;
  puStack_54 = (undefined1 *)FUN_004b8640(*(int *)(iVar3 + 4));
  puStack_58 = (undefined1 *)0x4c383c;
  FUN_004054ac(&local_138,local_14);
  puVar1 = puStack_54;
  puStack_54 = (undefined1 *)0x4c3848;
  piVar4 = (int *)FUN_004b83e0((int)puVar1,&local_138);
  puStack_54 = (undefined1 *)0x4c3853;
  iVar3 = FUN_004b8020((int)piVar4);
  puStack_54 = (undefined1 *)0x4c3858;
  sVar2 = FUN_004b74a4(iVar3);
  uVar5 = (int)sVar2 - 1;
  if (SBORROW4((int)sVar2,1)) {
    puStack_54 = (undefined1 *)0x4c3865;
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    do {
      puStack_58 = &LAB_004c38d7;
      uStack_5c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_5c;
      iStack_60 = 0x4c388c;
      puStack_54 = &stack0xfffffffc;
      iStack_60 = FUN_004b8020((int)piVar4);
      uStack_64 = 0x4c389b;
      FUN_004053dc(&local_148,uVar5);
      iVar3 = iStack_60;
      iStack_60 = 0x4c38a7;
      piVar6 = (int *)FUN_004bbb74(iVar3,&local_148);
      iStack_60 = 0x4c38b8;
      FUN_004bb4a8((int)piVar6,&local_14c);
      iStack_60 = local_14c;
      uStack_64 = 0x4c38c7;
      iVar3 = FUN_004b8020((int)piVar4);
      iStack_60 = 0x4c38cd;
      FUN_004b7660(iVar3);
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = (undefined1 *)0x4c3956;
      FUN_00403094(piVar6);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0xffffffff);
  }
  *in_FS_OFFSET = uStack_50;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004c3a01;
  puStack_40 = (undefined1 *)0x4c39f9;
  FUN_00403094(piVar4);
  return;
}

