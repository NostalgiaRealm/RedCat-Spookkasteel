/*
 * FUN_0054f958 at 0054f958
 * undefined __register FUN_0054f958(int * param_1, undefined4 * param_2, int param_3, char param_4)
 * Address ranges: 0054f958-0054faf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f958(int *param_1,undefined4 *param_2,int param_3,char param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  char *pcVar6;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_138;
  undefined *local_134;
  undefined *local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 local_20;
  char local_19;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_138 = 0;
  local_134 = (undefined *)0x0;
  local_130 = (undefined *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_18 = (undefined4 *)0x0;
  puStack_140 = (undefined1 *)0x54f990;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_144 = &LAB_0054fb41;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  local_24 = local_c;
  local_20 = 0xb;
  puStack_140 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_12c);
  FUN_00403fd4(&local_2c,local_12c);
  pcVar6 = "PlayWaveFromFile";
  puStack_160 = (undefined1 *)0x54f9e6;
  FUN_004040f0(&local_28,3);
  puStack_160 = (undefined1 *)local_28;
  puStack_164 = (undefined1 *)0x54f9ef;
  uVar2 = FUN_004a418c();
  puVar1 = puStack_160;
  puStack_160 = (undefined1 *)0x54f9fb;
  FUN_004a474c(uVar2,(int)puVar1,0,(int)pcVar6);
  puStack_160 = (undefined1 *)0x54fa0b;
  FUN_0040407c((int *)&local_18,local_c,(undefined4 *)&DAT_0054fb84);
  puStack_160 = (undefined1 *)0x54fa19;
  local_14 = FUN_00497cc0((int *)&PTR_FUN_00497c2c,'\x01',(int *)0x0);
  local_19 = '\0';
  puStack_164 = &LAB_0054faf5;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  puStack_160 = &stack0xfffffffc;
  FUN_0040407c((int *)&local_130,(undefined4 *)local_8[3],local_18);
  uVar3 = FUN_00409dd0(local_130);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_004a6a10(local_8[5],(undefined *)local_18);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_004a6574((int *)local_8[5],local_18,(uint)local_14);
      local_19 = '\x01';
    }
  }
  else {
    FUN_0040407c((int *)&local_134,(undefined4 *)local_8[3],local_18);
    uVar3 = FUN_0049804c((uint)local_14,local_134);
    local_19 = '\x01';
  }
  if (local_19 == '\0') {
    FUN_0040407c(&local_138,(undefined4 *)"Unable to load: ",local_18);
    iVar5 = local_138;
    iVar4 = FUN_004a418c();
    uVar3 = 0x54fadf;
    FUN_004a4ba4(iVar4,iVar5);
  }
  else {
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),param_4);
    FUN_0054f778(local_8,(int)local_14,local_10,param_4);
  }
  *in_FS_OFFSET = uVar3;
  puStack_164 = &LAB_0054fafc;
  uStack_168 = 0x54faf4;
  FUN_00403094(local_14);
  return;
}

