/*
 * FUN_004d4488 at 004d4488
 * undefined __register FUN_004d4488(int * param_1, int * param_2, char param_3, undefined4 param_4)
 * Address ranges: 004d4488-004d4606;004d461f-004d4639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4488(int *param_1,int *param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  char *pcStack_144;
  char *pcStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int *local_18;
  char local_11;
  char local_10;
  char local_f;
  undefined1 local_e;
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_134 = &LAB_004d465c;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  iStack_13c = 0x4d44bb;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00494858(param_2);
  iStack_13c = 0x4d44c0;
  bVar2 = FUN_004918fc(iVar3);
  if (!bVar2) {
    iStack_13c = 0x4d44d4;
    FUN_00402fe0(*local_8,local_120);
    iStack_13c = 0x4d44e2;
    FUN_00403fd4(&local_20,local_120);
    iStack_13c = local_20;
    pcStack_140 = ".DeleteRecursively: ";
    pcStack_144 = "The object does not have a corresponding table in the database";
    puStack_148 = (undefined1 *)0x4d44fc;
    FUN_004040f0(&local_1c,3);
    puStack_148 = (undefined1 *)0x4d450e;
    FUN_00403d94(local_1c);
  }
  local_f = '\0';
  local_e = 0;
  local_10 = local_d;
  local_11 = 0;
  local_18 = (int *)0x0;
  if ((char)local_8[3] != '\0') {
    puStack_148 = (undefined1 *)0x4d4536;
    puStack_148 = (undefined1 *)FUN_00402fdc(local_c);
    puStack_14c = (undefined1 *)0x4d453f;
    iVar3 = FUN_004d0424((int)local_8);
    puVar1 = puStack_148;
    puStack_148 = (undefined1 *)0x4d4545;
    FUN_004b10d0(iVar3,(int)puVar1);
  }
  puStack_148 = (undefined1 *)0x4d454e;
  FUN_004596d8(-0xb);
  puStack_14c = &LAB_004d463a;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  puStack_158 = &LAB_004d4607;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puStack_154 = &stack0xfffffffc;
  puStack_148 = &stack0xfffffffc;
  local_18 = FUN_004ccc40((int *)&PTR_FUN_004cc998,'\x01',10);
  FUN_004d0310(local_8);
  local_11 = '\x01';
  pcVar5 = &local_f;
  uVar4 = 0;
  local_e = FUN_004d414c(local_8,local_c,&local_10,0,param_4,local_18,pcVar5);
  if (local_f == '\0') {
    if (local_11 == '\0') {
      FUN_00403d94("Assertion failure");
    }
    FUN_004d0480(local_8);
  }
  else {
    if (local_11 == '\0') {
      FUN_00403d94("Assertion failure");
    }
    FUN_004d059c(local_8);
  }
  local_11 = 0;
  *in_FS_OFFSET = uVar4;
  *in_FS_OFFSET = pcVar5;
  puStack_158 = &LAB_004d4641;
  uStack_15c = 0x4d4634;
  FUN_00403094(local_18);
  uStack_15c = 0x4d4639;
  FUN_00459714();
  return;
}

