/*
 * FUN_004c1044 at 004c1044
 * undefined __register FUN_004c1044(int * param_1, int * param_2, int param_3)
 * Address ranges: 004c1044-004c1317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c1044(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_184;
  undefined4 uStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  char local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_14c = 0;
  local_150 = 0;
  local_148 = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_15c = &LAB_004c134a;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  iStack_164 = 0x4c1087;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = (int *)FUN_004949bc(param_2);
  iStack_164 = 0x4c108c;
  cVar1 = (**(code **)(*piVar2 + 0x4c))();
  if (cVar1 != '\0') {
    iStack_164 = 0x4c1098;
    piVar2 = (int *)FUN_004949bc(local_c);
    iStack_164 = 0x4c109d;
    cVar1 = (**(code **)(*piVar2 + 0x50))();
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
    if (cVar1 == '\0') goto LAB_004c10eb;
  }
  iStack_164 = 0x4c10b1;
  FUN_00402fe0(*local_8,local_124);
  iStack_164 = 0x4c10bf;
  FUN_00403fd4(&local_24,local_124);
  iStack_164 = local_24;
  pcStack_168 = ".LoadAppObjViaQuery: ";
  pcStack_16c = ": No primary key defined; load impossible.";
  puStack_170 = (undefined1 *)0x4c10d9;
  FUN_004040f0(&local_20,3);
  puStack_170 = (undefined1 *)0x4c10eb;
  FUN_00403d94(local_20);
  uVar4 = extraout_ECX_00;
  uVar5 = extraout_EDX_00;
LAB_004c10eb:
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_174 = &LAB_004c1318;
  uStack_178 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_178;
  puStack_170 = &stack0xfffffffc;
  local_18 = FUN_004cf39c(local_8,uVar5,uVar4);
  local_1c = (int *)(**(code **)(*local_8 + 8))();
  iVar3 = FUN_00494858(local_c);
  FUN_004b49b8(local_18,iVar3);
  FUN_004b4b84((int)local_18,local_10);
  local_12c = *(undefined4 *)PTR_DAT_00572470;
  local_128 = 7;
  FUN_004b4e04((int)local_18,&local_12c,0);
  piVar2 = (int *)FUN_004949bc(local_c);
  uVar4 = FUN_0040320c(piVar2,(int)&PTR_FUN_0048b6c0);
  if ((char)uVar4 == '\0') {
    piVar2 = (int *)FUN_004949bc(local_c);
    uVar4 = FUN_0040320c(piVar2,(int)&PTR_FUN_004897ec);
    if ((char)uVar4 == '\0') {
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4(&local_150,local_124);
      pcStack_184 = " Internal inconsistency";
      FUN_004040f0(&local_14c,3);
      FUN_00403d94(local_14c);
    }
    else {
      local_144 = FUN_004949bc(local_c);
      local_140 = 7;
      local_13c = *(undefined4 *)PTR_DAT_0057260c;
      local_138 = 7;
      piVar2 = (int *)FUN_004949bc(local_c);
      (**(code **)(*piVar2 + 0x6c))(piVar2,&local_148);
      local_134 = local_148;
      local_130 = 0xb;
      FUN_004b4e04((int)local_18,&local_144,2);
    }
  }
  else {
    local_144 = FUN_004949bc(local_c);
    local_140 = 7;
    local_13c = *(undefined4 *)PTR_DAT_0057260c;
    local_138 = 7;
    piVar2 = (int *)FUN_004949bc(local_c);
    local_134 = (**(code **)(*piVar2 + 0x70))();
    local_130 = 0;
    FUN_004b4e04((int)local_18,&local_144,2);
  }
  local_12c = *(undefined4 *)PTR_DAT_005725b8;
  local_128 = 7;
  FUN_004b4e04((int)local_18,&local_12c,0);
  FUN_004b4f0c(local_18,0);
  FUN_004d69fc(local_1c,(int)local_18);
  FUN_004d5dc0(local_1c);
  local_11 = (**(code **)(*local_1c + 0x3c))();
  if (local_11 != '\0') {
    FUN_004d6cb4(local_1c,local_c);
  }
  *in_FS_OFFSET = pcStack_184;
  FUN_00403094(local_18);
  FUN_00403094(local_1c);
  return;
}

