/*
 * FUN_00549504 at 00549504
 * undefined __register FUN_00549504(int * param_1)
 * Address ranges: 00549504-0054977a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549504(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_12c;
  int local_128 [5];
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_128[0] = 0;
  local_12c = 0;
  local_128[2] = 0;
  local_128[1] = 0;
  local_128[4] = 0;
  local_128[3] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_138 = &LAB_0054977b;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_148 = "AppObjList not open (active)";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  if ((char)local_8[0x10] == '\x02') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_128 + 3,local_114);
    FUN_004040f0(local_128 + 4,3);
    FUN_00403d94(local_128[4]);
  }
  if (local_8[0x11] != 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_128 + 1,local_114);
    FUN_004040f0(local_128 + 2,3);
    FUN_00403d94(local_128[2]);
  }
  if (((char)local_8[0x10] != '\0') && (((char)local_8[0x10] != '\x01' || (local_8[0xc] == 0)))) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_12c,local_114);
    FUN_004040f0(local_128,3);
    FUN_00403d94(local_128[0]);
  }
  piVar3 = (int *)FUN_00549ec8((int)local_8);
  FUN_00403270(piVar3,extraout_EDX,extraout_ECX);
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_0045fa7c(piVar3);
  if ((char)local_8[0x10] == '\0') {
LAB_0054971a:
    local_9 = 1;
  }
  else {
    if ((char)local_8[0x10] == '\x01') {
      piVar3 = (int *)FUN_00549b80((int)local_8);
      cVar2 = FUN_00494528((int *)local_8[0xc],piVar3);
      if (cVar2 == '\0') goto LAB_0054971a;
    }
    local_9 = 0;
  }
  (**(code **)(*local_8 + 0x4c))(local_8,local_9);
  *(undefined1 *)(local_8 + 0x10) = 2;
  FUN_0054a2b0(local_8);
  FUN_0054b658((uint)local_8);
  FUN_00403270((int *)local_8[0x19],extraout_EDX_00,extraout_ECX_00);
  *in_FS_OFFSET = pcStack_148;
  FUN_00403dd4(&local_12c,6);
  FUN_00403dd4(&local_14,2);
  return;
}

