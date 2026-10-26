/*
 * FUN_004d0dd0 at 004d0dd0
 * undefined __register FUN_004d0dd0(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004d0dd0-004d0f39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 20 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 20 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d0dd0(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  char *pcStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_128;
  int local_124;
  byte local_120 [256];
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_124 = 0;
  local_128 = 0;
  local_20 = 0;
  puStack_134 = &LAB_004d0f67;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == (int *)0x0) {
    puStack_13c = (undefined1 *)0x4d0e18;
    FUN_00402fe0(*param_1,local_120);
    puStack_13c = (undefined1 *)0x4d0e26;
    FUN_00403fd4(&local_20,local_120);
    puStack_13c = (undefined1 *)0x4d0e33;
    FUN_00404038(&local_20,(undefined4 *)".FindAppObjByProps: Object is nil.");
    puStack_13c = (undefined1 *)0x4d0e45;
    FUN_00403d94(local_20);
    puVar1 = puStack_130;
  }
  puStack_130 = puVar1;
  puStack_13c = (undefined1 *)0x4d0e4d;
  cVar2 = (**(code **)(*local_8 + 0x44))();
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (cVar2 == '\0') {
    puStack_13c = (undefined1 *)0x4d0e61;
    FUN_00402fe0(*local_8,local_120);
    puStack_13c = (undefined1 *)0x4d0e72;
    FUN_00403fd4(&local_128,local_120);
    puStack_13c = (undefined1 *)local_128;
    pcStack_140 = ".FindAppObjByProps: ";
    pcStack_144 = " Connection must be open";
    FUN_004040f0(&local_124,3);
    FUN_00403d94(local_124);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  pcStack_140 = &LAB_004d0f3a;
  pcStack_144 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_144;
  puStack_13c = &stack0xfffffffc;
  local_18 = FUN_004cf39c(local_8,uVar5,uVar4);
  local_1c = (int *)FUN_004cf3c8(local_8,'\0');
  iVar3 = FUN_00494858(local_10);
  FUN_004b49b8(local_18,iVar3);
  FUN_004b4adc((int)local_18,local_c);
  FUN_004b4f0c(local_18,0);
  FUN_004d69fc(local_1c,(int)local_18);
  FUN_004d5dc0(local_1c);
  local_11 = (**(code **)(*local_1c + 0x3c))();
  *in_FS_OFFSET = pcStack_144;
  puStack_13c = &LAB_004d0f41;
  pcStack_140 = (char *)0x4d0f31;
  FUN_00403094(local_18);
  pcStack_140 = (char *)0x4d0f39;
  FUN_00403094(local_1c);
  return;
}

