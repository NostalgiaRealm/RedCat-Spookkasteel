/*
 * FUN_00548824 at 00548824
 * undefined __register FUN_00548824(int * param_1, undefined4 * param_2)
 * Address ranges: 00548824-00548a61;00548a69-00548a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00548824(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  VARIANT *pVVar5;
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
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  VARIANT local_24;
  int *local_10;
  char local_9;
  int *local_8;
  
  local_140 = 0;
  local_144 = 0;
  local_138 = 0;
  local_13c = 0;
  local_130 = 0;
  local_134 = 0;
  local_28 = 0;
  local_2c = 0;
  pVVar5 = &local_24;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar5 = (VARIANT *)((int)&pVVar5->n1 + 4);
  }
  puStack_150 = (undefined1 *)0x548872;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_154 = &LAB_00548aa0;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  puStack_15c = (undefined1 *)0x548888;
  puStack_150 = &stack0xfffffffc;
  uVar3 = FUN_00405c08((short *)&local_24);
  if ((char)uVar3 != '\0') {
    puStack_15c = (undefined1 *)0x54889c;
    FUN_00402fe0(*local_8,local_12c);
    puStack_15c = (undefined1 *)0x5488aa;
    FUN_00403fd4(&local_2c,local_12c);
    puStack_15c = (undefined1 *)local_2c;
    pcStack_160 = ".GotoAppObjByPk: ";
    pcStack_164 = " Parameter cannot be unassigned";
    puStack_168 = (undefined1 *)0x5488c4;
    FUN_004040f0(&local_28,3);
    puStack_168 = (undefined1 *)0x5488d6;
    FUN_00403d94(local_28);
  }
  puStack_168 = (undefined1 *)0x5488de;
  bVar1 = FUN_00405c2c((short *)&local_24);
  if (bVar1) {
    puStack_168 = (undefined1 *)0x5488f2;
    FUN_00402fe0(*local_8,local_12c);
    puStack_168 = (undefined1 *)0x548903;
    FUN_00403fd4(&local_134,local_12c);
    puStack_168 = (undefined1 *)local_134;
    pcStack_16c = ".GotoAppObjByPk: ";
    pcStack_170 = " Parameter cannot be NULL";
    FUN_004040f0(&local_130,3);
    FUN_00403d94(local_130);
  }
  if ((char)local_8[6] == '\0') {
    puStack_168 = (undefined1 *)0x548951;
    FUN_00402fe0(*local_8,local_12c);
    puStack_168 = (undefined1 *)0x548962;
    FUN_00403fd4(&local_13c,local_12c);
    puStack_168 = (undefined1 *)local_13c;
    pcStack_16c = ".GotoAppObjByPk: ";
    pcStack_170 = "AppObjList not open (active)";
    FUN_004040f0(&local_138,3);
    FUN_00403d94(local_138);
  }
  if (((char)local_8[0x10] != '\x02') && ((1 < *(byte *)(local_8 + 0x10) || (local_8[0x11] < 1)))) {
    puStack_168 = (undefined1 *)0x5489c3;
    FUN_00402fe0(*local_8,local_12c);
    puStack_168 = (undefined1 *)0x5489d4;
    FUN_00403fd4(&local_144,local_12c);
    puStack_168 = (undefined1 *)local_144;
    pcStack_16c = ".GotoAppObjByPk: ";
    pcStack_170 = "Cannot move in edit mode, unless PushDisableUpdateCurrentAppObj is called";
    FUN_004040f0(&local_140,3);
    FUN_00403d94(local_140);
  }
  puStack_168 = (undefined1 *)0x548a10;
  cVar2 = (**(code **)*local_8)();
  if (cVar2 != '\0') {
    puStack_168 = (undefined1 *)0x548a1c;
    local_10 = (int *)FUN_0054843c(local_8);
    pcStack_16c = &LAB_00548a62;
    pcStack_170 = (char *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pcStack_170;
    puStack_168 = &stack0xfffffffc;
    local_9 = (**(code **)(*local_8 + 0x30))(local_8,&local_24);
    if (local_9 == '\0') {
      FUN_00548598(local_8,(int)local_10);
    }
    *in_FS_OFFSET = pcStack_170;
    puStack_168 = (undefined1 *)0x548a6d;
    pcStack_16c = (char *)0x548a61;
    FUN_00403094(local_10);
    return;
  }
  local_9 = 0;
  *in_FS_OFFSET = pcStack_164;
  puStack_15c = &LAB_00548aa7;
  pcStack_160 = (char *)0x548a8a;
  FUN_00403dd4(&local_144,6);
  pcStack_160 = (char *)0x548a97;
  FUN_00403dd4(&local_2c,2);
  pcStack_160 = (char *)0x548a9f;
  FUN_00405bcc(&local_24);
  return;
}

