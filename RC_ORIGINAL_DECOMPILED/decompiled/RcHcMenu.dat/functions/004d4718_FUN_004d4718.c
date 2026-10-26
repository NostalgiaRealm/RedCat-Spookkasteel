/*
 * FUN_004d4718 at 004d4718
 * undefined __register FUN_004d4718(int * param_1, int * param_2, char param_3)
 * Address ranges: 004d4718-004d48a6;004d492f-004d497b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4718(int *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  char *pcStack_150;
  char *pcStack_14c;
  undefined1 *puStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_12c;
  undefined *local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_140 = &LAB_004d497c;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    puStack_148 = (undefined1 *)0x4d4775;
    FUN_00403d94(" Parameter cannot be nil");
    puVar1 = puStack_13c;
  }
  puStack_13c = puVar1;
  local_14 = 0;
  puStack_148 = (undefined1 *)0x4d4782;
  piVar4 = (int *)FUN_004949bc(local_c);
  puStack_148 = (undefined1 *)0x4d4787;
  cVar2 = (**(code **)(*piVar4 + 0x4c))();
  if (cVar2 == '\0') {
    puStack_148 = (undefined1 *)0x4d479b;
    FUN_00402fe0(*local_8,local_11c);
    puStack_148 = (undefined1 *)0x4d47a9;
    FUN_00403fd4(&local_1c,local_11c);
    puStack_148 = (undefined1 *)local_1c;
    pcStack_14c = ".DeleteAppObj: ";
    pcStack_150 = "PrimaryKey is not initialized.";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  puStack_148 = (undefined1 *)0x4d47dd;
  iVar5 = FUN_00494858(local_c);
  puStack_148 = (undefined1 *)0x4d47e2;
  bVar3 = FUN_004918fc(iVar5);
  if (!bVar3) {
    puStack_148 = (undefined1 *)0x4d47f6;
    FUN_00402fe0(*local_8,local_11c);
    puStack_148 = (undefined1 *)0x4d4807;
    FUN_00403fd4(&local_124,local_11c);
    puStack_148 = (undefined1 *)local_124;
    pcStack_14c = ".DeleteAppObj: ";
    pcStack_150 = "The object does not have a corresponding table in the database";
    FUN_004040f0(&local_120,3);
    FUN_00403d94(local_120);
  }
  if (local_d != '\0') {
    puStack_148 = (undefined1 *)0x4d4850;
    FUN_004cd7c0(local_c,(int *)&local_128);
    puStack_148 = (undefined1 *)0x4d485d;
    uVar6 = FUN_004579dc(local_128,'\0');
    if ((char)uVar6 != '\x06') {
      local_14 = 0;
      goto LAB_004d4951;
    }
  }
  pcStack_14c = &LAB_004d48a7;
  pcStack_150 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_150;
  puStack_148 = &stack0xfffffffc;
  local_14 = (**(code **)(*local_8 + 0x24))(local_8,local_c);
  if ((char)local_8[3] != '\0') {
    iVar5 = FUN_004d0424((int)local_8);
    FUN_004b1200(iVar5,local_c);
  }
  *in_FS_OFFSET = pcStack_150;
  if (0 < local_14) {
    puStack_148 = (undefined1 *)0x4d493d;
    iVar5 = FUN_00402fdc(local_c);
    puStack_148 = (undefined1 *)0x4d494a;
    FUN_004ced38((int *)local_8[1],iVar5);
  }
LAB_004d4951:
  *in_FS_OFFSET = uStack_144;
  puStack_13c = &LAB_004d4983;
  puStack_140 = (undefined1 *)0x4d496e;
  FUN_00403dd4(&local_12c,4);
  puStack_140 = (undefined1 *)0x4d497b;
  FUN_00403dd4(&local_1c,2);
  return;
}

