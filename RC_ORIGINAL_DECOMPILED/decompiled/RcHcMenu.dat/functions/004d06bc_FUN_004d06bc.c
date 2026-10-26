/*
 * FUN_004d06bc at 004d06bc
 * undefined __register FUN_004d06bc(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004d06bc-004d08a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 18 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 18 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004d06bc(int *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  VARIANT *pVVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_184;
  char *pcStack_180;
  undefined1 *puStack_17c;
  undefined4 uStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  VARIANT *local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  int local_138;
  int local_134;
  byte local_130 [256];
  int local_30;
  VARIANT local_2c;
  int *local_18;
  int *local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  local_134 = 0;
  local_138 = 0;
  local_30 = 0;
  pVVar5 = &local_2c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar5 = (VARIANT *)((int)&pVVar5->n1 + 4);
  }
  puStack_170 = (undefined1 *)0x4d06f5;
  local_c = param_3;
  local_8 = param_1;
  FUN_00405bd4(&local_2c);
  puStack_174 = &LAB_004d08d9;
  uStack_178 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_178;
  puStack_170 = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    puStack_17c = (undefined1 *)0x4d0719;
    puStack_170 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_130);
    puStack_17c = (undefined1 *)0x4d0727;
    FUN_00403fd4(&local_30,local_130);
    puStack_17c = (undefined1 *)0x4d0734;
    FUN_00404038(&local_30,(undefined4 *)".FindAppObjByPK: Object is nil.");
    puStack_17c = (undefined1 *)0x4d0746;
    FUN_00403d94(local_30);
  }
  puStack_17c = (undefined1 *)0x4d074e;
  cVar1 = (**(code **)(*local_8 + 0x44))();
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (cVar1 == '\0') {
    puStack_17c = (undefined1 *)0x4d0762;
    FUN_00402fe0(*local_8,local_130);
    puStack_17c = (undefined1 *)0x4d0773;
    FUN_00403fd4(&local_138,local_130);
    puStack_17c = (undefined1 *)local_138;
    pcStack_180 = ".FindAppObjByPK: ";
    pcStack_184 = " Connection must be open";
    FUN_004040f0(&local_134,3);
    FUN_00403d94(local_134);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  pcStack_180 = &LAB_004d08a4;
  pcStack_184 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_184;
  puStack_17c = &stack0xfffffffc;
  local_14 = FUN_004cf39c(local_8,uVar4,uVar3);
  local_18 = (int *)FUN_004cf3c8(local_8,'\0');
  iVar2 = FUN_00494858(local_c);
  FUN_004b49b8(local_14,iVar2);
  local_160 = *(undefined4 *)PTR_DAT_00572470;
  local_15c = 7;
  local_158 = FUN_004949bc(local_c);
  local_154 = 7;
  local_150 = *(undefined4 *)PTR_DAT_0057260c;
  local_14c = 7;
  local_148 = &local_2c;
  local_144 = 0xd;
  local_140 = *(undefined4 *)PTR_DAT_005725b8;
  local_13c = 7;
  FUN_004b4e04((int)local_14,&local_160,4);
  FUN_004b4f0c(local_14,0);
  FUN_004d69fc(local_18,(int)local_14);
  FUN_004d5dc0(local_18);
  local_d = (**(code **)(*local_18 + 0x3c))();
  *in_FS_OFFSET = pcStack_184;
  puStack_17c = &LAB_004d08ab;
  pcStack_180 = (char *)0x4d089b;
  FUN_00403094(local_14);
  pcStack_180 = (char *)0x4d08a3;
  FUN_00403094(local_18);
  return;
}

