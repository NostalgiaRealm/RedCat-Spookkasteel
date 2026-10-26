/*
 * FUN_0056405c at 0056405c
 * undefined __register FUN_0056405c(undefined4 * param_1)
 * Address ranges: 0056405c-00564132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056405c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_58;
  undefined1 *puStackY_54;
  undefined1 *puStackY_50;
  int iVar2;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_38 [8];
  int local_30;
  undefined4 *local_28;
  undefined1 local_24;
  tagPOINT local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 *local_8;
  
  puStack_3c = (undefined1 *)0x56406d;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_40 = &LAB_00564150;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_28 = local_8;
  local_24 = 0xb;
  iVar2 = 0;
  puStackY_50 = (undefined1 *)0x564090;
  puStack_3c = &stack0xfffffffc;
  uVar1 = FUN_004a418c();
  puStackY_50 = (undefined1 *)0x5640a0;
  FUN_004a474c(uVar1,0x564168,2,iVar2);
  puStackY_50 = (undefined1 *)0x5640ae;
  local_c = (int *)FUN_00449cd0((int *)&PTR_FUN_00563ec4,'\x01',0);
  puStackY_54 = &LAB_00564133;
  uStackY_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_58;
  puStackY_50 = &stack0xfffffffc;
  FUN_00403e04(local_c + 0xb5,local_8);
  (**(code **)(*local_c + 0x40))(local_c,local_38);
  local_18 = local_30;
  (**(code **)(*local_c + 0x40))(local_c,local_38);
  local_14 = local_30;
  FUN_0043caf4(local_10,&local_20);
  FUN_0043cba0(local_10,&local_18);
  (**(code **)(*local_c + 0xd8))();
  FUN_0043cba0(local_10,&local_20.x);
  *in_FS_OFFSET = uStackY_58;
  puStackY_50 = &LAB_0056413a;
  puStackY_54 = (undefined1 *)0x564132;
  FUN_00403094(local_c);
  return;
}

