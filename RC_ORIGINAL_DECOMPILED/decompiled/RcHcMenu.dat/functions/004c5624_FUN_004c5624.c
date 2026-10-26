/*
 * FUN_004c5624 at 004c5624
 * undefined __register FUN_004c5624(int * param_1, int * param_2)
 * Address ranges: 004c5624-004c57b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c520c slot 2 for TDaviColors. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c520c slot 2 for
   TDaviColors. Original bytes unchanged; names and types still inferred. */

void FUN_004c5624(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_114 = 0;
  local_10 = 0;
  puStack_11c = &LAB_004c57b1;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".Assign: aSource not assigned.");
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  uVar2 = FUN_0040320c(local_c,(int)&PTR_FUN_004c520c);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_114,local_110);
    FUN_00404038(&local_114,(undefined4 *)".Assign: aSource not a TDaviColors.");
    FUN_00403d94(local_114);
  }
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[2] = *(int *)(iVar3 + 8);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[3] = *(int *)(iVar3 + 0xc);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[4] = *(int *)(iVar3 + 0x10);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[5] = *(int *)(iVar3 + 0x14);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[6] = *(int *)(iVar3 + 0x18);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[7] = *(int *)(iVar3 + 0x1c);
  iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004c520c);
  local_8[8] = *(int *)(iVar3 + 0x20);
  FUN_004c54c4((int)local_8);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004c57b8;
  puStack_11c = (undefined1 *)0x4c57a8;
  FUN_00403db0(&local_114);
  puStack_11c = (undefined1 *)0x4c57b0;
  FUN_00403db0(&local_10);
  return;
}

