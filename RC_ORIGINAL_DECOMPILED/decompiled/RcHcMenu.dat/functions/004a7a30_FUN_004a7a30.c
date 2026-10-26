/*
 * FUN_004a7a30 at 004a7a30
 * undefined __register FUN_004a7a30(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004a7a30-004a7c04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a7a30(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_17c;
  undefined1 *puStackY_178;
  undefined1 *puStackY_174;
  char *pcStackY_170;
  char *pcStackY_16c;
  undefined *puStackY_168;
  int iStackY_164;
  char *pcVar6;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  int local_13c;
  int local_138;
  undefined *local_134;
  int local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_13c = 0;
  local_138 = 0;
  local_134 = (undefined *)0x0;
  local_12c = 0;
  local_130 = 0;
  local_24 = 0;
  local_28 = 0;
  local_18 = (undefined4 *)0x0;
  puStack_144 = (undefined1 *)0x4a7a74;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_148 = &LAB_004a7c51;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_20 = local_c;
  local_1c = 0xb;
  puStack_144 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_128);
  FUN_00403fd4(&local_28,local_128);
  pcVar6 = "GetBitmapFromFile";
  iStackY_164 = 0x4a7aca;
  FUN_004040f0(&local_24,3);
  iStackY_164 = local_24;
  puStackY_168 = (undefined *)0x4a7ad3;
  uVar3 = FUN_004a418c();
  iVar1 = iStackY_164;
  iStackY_164 = 0x4a7adf;
  FUN_004a474c(uVar3,iVar1,0,(int)pcVar6);
  if (local_10 == (int *)0x0) {
    iStackY_164 = 0x4a7af5;
    FUN_00402fe0(*local_8,local_128);
    iStackY_164 = 0x4a7b06;
    FUN_00403fd4(&local_130,local_128);
    iStackY_164 = local_130;
    puStackY_168 = &DAT_004a7c68;
    pcStackY_16c = "GetBitmapFromFile";
    pcStackY_170 = " aBitmap = nil";
    puStackY_174 = (undefined1 *)0x4a7b2b;
    FUN_004040f0(&local_12c,4);
    puStackY_174 = (undefined1 *)0x4a7b40;
    FUN_00403d94(local_12c);
  }
  local_11 = 1;
  puStackY_174 = (undefined1 *)0x4a7b54;
  FUN_0040407c((int *)&local_18,local_c,(undefined4 *)&DAT_004a7cdc);
  puStackY_178 = &LAB_004a7c05;
  uStackY_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_17c;
  puStackY_174 = &stack0xfffffffc;
  FUN_0040407c((int *)&local_134,(undefined4 *)local_8[2],local_18);
  uVar4 = FUN_00409dd0(local_134);
  if ((char)uVar4 == '\0') {
    cVar2 = FUN_004a6a10(local_8[1],(undefined *)local_18);
    if (cVar2 == '\0') {
      local_11 = 0;
      FUN_0040407c(&local_13c,(undefined4 *)"Unable to load: ",local_18);
      iVar1 = local_13c;
      iVar5 = FUN_004a418c();
      FUN_004a4ba4(iVar5,iVar1);
    }
    else {
      FUN_004a62b4((int *)local_8[1],local_18,local_10);
    }
  }
  else {
    FUN_0040407c(&local_138,(undefined4 *)local_8[2],local_18);
    (**(code **)(*local_10 + 0x48))(local_10,local_138);
  }
  *in_FS_OFFSET = uStackY_17c;
  return;
}

