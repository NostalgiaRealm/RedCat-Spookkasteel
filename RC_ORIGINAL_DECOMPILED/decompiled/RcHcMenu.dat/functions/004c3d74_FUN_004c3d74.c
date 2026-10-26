/*
 * FUN_004c3d74 at 004c3d74
 * undefined __register FUN_004c3d74(int * param_1, int * param_2)
 * Address ranges: 004c3d74-004c3f0f;004c3f6c-004c3f81;004c3f96-004c3fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 11 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 11 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c3d74(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  int local_154 [2];
  undefined4 local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  int *local_13c;
  VARIANTARG local_138;
  byte local_128 [208];
  undefined4 uStack_58;
  int *piStack_54;
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
  LPCSTR local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = (LPCSTR)0x29;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != (LPCSTR)0x0);
  LOCK();
  UNLOCK();
  local_10 = 0;
  local_28 = &LAB_004c3fe4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (char *)0x4c3db0;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar3 + 4) == 0) {
    pcStack_30 = "Unprepared ";
    puStack_34 = (undefined1 *)0x4c3dcb;
    FUN_00402fe0(*local_8,local_128);
    puStack_34 = (undefined1 *)0x4c3dd9;
    FUN_00403fd4((int *)&local_28,local_128);
    puStack_34 = local_28;
    pcStack_38 = ".DropReferenceFor.";
    puStack_3c = (undefined1 *)0x4c3dee;
    FUN_004040f0((int *)&local_24,3);
    puStack_3c = (undefined1 *)0x4c3e00;
    FUN_00403d94(local_24);
  }
  puStack_3c = (undefined1 *)0x4c3e0e;
  FUN_00403e48((int *)&local_14,*(int *)(local_10 + 0x3c));
  puStack_3c = (undefined1 *)0x4c3e1c;
  iVar3 = FUN_00403224(local_c,(int)&DAT_004bca60);
  puStack_3c = (undefined1 *)0x4c3e24;
  iVar3 = FUN_004b8880(*(int *)(iVar3 + 4));
  puStack_3c = (undefined1 *)0x4c3e2f;
  sVar2 = FUN_004b74a4(iVar3);
  uVar4 = (int)sVar2 - 1;
  if (SBORROW4((int)sVar2,1)) {
    puStack_3c = (undefined1 *)0x4c3e3c;
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if ((int)uVar4 < 0) {
    *in_FS_OFFSET = pcStack_38;
    pcStack_30 = &LAB_004c3feb;
    puStack_34 = (undefined1 *)0x4c3fb3;
    FUN_00403dd4(local_154,2);
    puStack_34 = (undefined1 *)0x4c3fc3;
    FUN_0040448c(&local_14c,5);
    puStack_34 = (undefined1 *)0x4c3fce;
    FUN_00405bcc(&local_138);
    puStack_34 = (undefined1 *)0x4c3fdb;
    FUN_00403dd4((int *)&local_28,2);
    puStack_34 = (undefined1 *)0x4c3fe3;
    FUN_00403db0((int *)&local_14);
    return;
  }
  puStack_40 = &LAB_004c3f82;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x4c3e69;
  puStack_3c = &stack0xfffffffc;
  FUN_004053dc(&local_138,uVar4);
  puStack_48 = (undefined1 *)0x4c3e77;
  piVar5 = (int *)FUN_004bc3c8(iVar3,&local_138);
  uVar6 = 1;
  puStack_4c = &LAB_004c3f10;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  piStack_54 = (int *)0x4c3e96;
  puStack_48 = &stack0xfffffffc;
  FUN_004bbfb8((int)piVar5,&local_13c);
  piStack_54 = local_13c;
  uStack_58 = 0x4c3eab;
  FUN_004045b8((BSTR)&local_140,local_14);
  piVar1 = piStack_54;
  piStack_54 = (int *)0x4c3eb7;
  FUN_00404634(piVar1,local_140);
  if (!(bool)uVar6) {
    piStack_54 = (int *)0x4c3ec7;
    FUN_004bc074((int)piVar5,&local_144);
    piStack_54 = local_144;
    uStack_58 = 0x4c3edc;
    FUN_004045b8((BSTR)&local_148,local_14);
    piVar1 = piStack_54;
    piStack_54 = (int *)0x4c3ee8;
    FUN_00404634(piVar1,local_148);
    if (!(bool)uVar6) goto LAB_004c3f06;
  }
  piStack_54 = (int *)0x4c3ef8;
  FUN_004bbf00((int)piVar5,&local_14c);
  piStack_54 = (int *)0x4c3f06;
  FUN_004b7660(iVar3);
LAB_004c3f06:
  *in_FS_OFFSET = uStack_50;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &DAT_004c3f89;
  puStack_40 = (undefined1 *)0x4c3f81;
  FUN_00403094(piVar5);
  return;
}

