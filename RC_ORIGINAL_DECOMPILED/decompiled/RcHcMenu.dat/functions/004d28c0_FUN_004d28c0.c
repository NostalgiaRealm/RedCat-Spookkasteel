/*
 * FUN_004d28c0 at 004d28c0
 * undefined __register FUN_004d28c0(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004d28c0-004d2af8;004d2b00-004d2b2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d28c0(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  char *pcStack_170;
  char *pcStack_16c;
  undefined1 *puStack_168;
  char *pcStack_164;
  char *pcStack_160;
  undefined1 *puStack_15c;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  byte local_138 [256];
  int local_38;
  int local_34;
  byte local_30 [30];
  char local_12;
  bool local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_144 = 0;
  local_148 = 0;
  local_13c = 0;
  local_140 = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_154 = &LAB_004d2b2b;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    puStack_15c = (undefined1 *)0x4d2917;
    FUN_00402fe0(*param_1,local_138);
    puStack_15c = (undefined1 *)0x4d2925;
    FUN_00403fd4(&local_38,local_138);
    puStack_15c = (undefined1 *)local_38;
    pcStack_160 = ".LoadAppObj: ";
    pcStack_164 = " Parameter cannot be nil";
    puStack_168 = (undefined1 *)0x4d293f;
    FUN_004040f0(&local_34,3);
    puStack_168 = (undefined1 *)0x4d2951;
    FUN_00403d94(local_34);
    puVar1 = puStack_150;
  }
  puStack_150 = puVar1;
  puStack_168 = (undefined1 *)0x4d2959;
  piVar4 = (int *)FUN_004949bc(local_c);
  puStack_168 = (undefined1 *)0x4d295e;
  cVar2 = (**(code **)(*piVar4 + 0x4c))();
  if (cVar2 == '\0') {
    puStack_168 = (undefined1 *)0x4d2972;
    FUN_00402fe0(*local_8,local_138);
    puStack_168 = (undefined1 *)0x4d2983;
    FUN_00403fd4(&local_140,local_138);
    puStack_168 = (undefined1 *)local_140;
    pcStack_16c = ".LoadAppObj: ";
    pcStack_170 = "PrimaryKey is not initialized.";
    FUN_004040f0(&local_13c,3);
    FUN_00403d94(local_13c);
  }
  puStack_168 = (undefined1 *)0x4d29c0;
  iVar5 = FUN_00494858(local_c);
  puStack_168 = (undefined1 *)0x4d29c5;
  bVar3 = FUN_004918fc(iVar5);
  uVar7 = extraout_ECX;
  if (!bVar3) {
    puStack_168 = (undefined1 *)0x4d29d1;
    iVar5 = FUN_00494858(local_c);
    puStack_168 = (undefined1 *)0x4d29d6;
    bVar3 = FUN_0049191c(iVar5);
    uVar7 = extraout_ECX_00;
    if (!bVar3) {
      puStack_168 = (undefined1 *)0x4d29ea;
      FUN_00402fe0(*local_8,local_138);
      puStack_168 = (undefined1 *)0x4d29fb;
      FUN_00403fd4(&local_148,local_138);
      puStack_168 = (undefined1 *)local_148;
      pcStack_16c = ".LoadAppObj: ";
      pcStack_170 = "The object does not have a corresponding table in the database";
      FUN_004040f0(&local_144,3);
      FUN_00403d94(local_144);
      uVar7 = extraout_ECX_01;
    }
  }
  local_11 = false;
  local_12 = local_10 == (int *)0x0;
  if (((bool)local_12) && ((char)local_8[3] != '\0')) {
    puStack_168 = (undefined1 *)0x4d2a57;
    uVar6 = FUN_004d0424((int)local_8);
    puStack_168 = (undefined1 *)0x4d2a5f;
    local_11 = FUN_004b1190(uVar6,local_c);
    uVar7 = extraout_ECX_02;
  }
  if (local_11 == false) {
    if (local_12 != '\0') {
      puStack_168 = (undefined1 *)0x4d2a7e;
      local_10 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',uVar7);
      puStack_168 = (undefined1 *)0x4d2a8c;
      bVar3 = FUN_004940cc(local_c,local_30);
      if (bVar3) {
        do {
          puStack_168 = (undefined1 *)0x4d2a98;
          piVar4 = (int *)FUN_00494858(local_c);
          puStack_168 = (undefined1 *)0x4d2aa0;
          uVar7 = FUN_004917c4(piVar4,local_30);
          if ((char)uVar7 != '\0') {
            puStack_168 = (undefined1 *)0x4d2aaf;
            (**(code **)(*local_10 + 0xc))(local_10,local_30);
          }
          puStack_168 = (undefined1 *)0x4d2aba;
          cVar2 = FUN_004940f4(local_c,local_30);
        } while (cVar2 != '\0');
      }
    }
    pcStack_16c = &LAB_004d2af9;
    pcStack_170 = (char *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pcStack_170;
    puStack_168 = &stack0xfffffffc;
    local_11 = (bool)(**(code **)(*local_8 + 0x2c))(local_8,local_c,local_10);
    *in_FS_OFFSET = pcStack_170;
    puStack_168 = (undefined1 *)0x4d2b00;
    if (local_12 != '\0') {
      pcStack_16c = (char *)0x4d2af8;
      FUN_00403094(local_10);
    }
    return;
  }
  *in_FS_OFFSET = pcStack_164;
  puStack_15c = &LAB_004d2b32;
  pcStack_160 = (char *)0x4d2b1d;
  FUN_00403dd4(&local_148,4);
  pcStack_160 = (char *)0x4d2b2a;
  FUN_00403dd4(&local_38,2);
  return;
}

