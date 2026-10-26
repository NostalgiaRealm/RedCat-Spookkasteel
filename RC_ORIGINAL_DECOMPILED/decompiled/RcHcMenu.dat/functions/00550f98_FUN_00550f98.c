/*
 * FUN_00550f98 at 00550f98
 * undefined __register FUN_00550f98(int * param_1, int * param_2)
 * Address ranges: 00550f98-005513fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 6 for TMenuIni. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 6 for TMenuIni.
   Original bytes unchanged; names and types still inferred. */

void FUN_00550f98(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *in_FS_OFFSET;
  undefined4 *local_170;
  int local_16c;
  undefined4 *local_168;
  int local_164;
  undefined4 *local_160;
  int local_15c;
  undefined4 *local_158;
  int local_154;
  byte *local_150;
  uint *local_14c;
  undefined4 *local_148;
  undefined4 *local_144;
  undefined4 *local_140;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  byte local_128 [156];
  undefined4 uStack_8c;
  undefined4 **ppuStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 **ppuStack_74;
  undefined4 uStack_70;
  undefined4 **ppuStack_6c;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  undefined4 uStack_60;
  undefined4 **ppuStack_5c;
  undefined4 uStack_58;
  undefined4 **ppuStack_54;
  undefined4 uStack_50;
  undefined4 **ppuStack_4c;
  undefined4 uStack_48;
  undefined4 **ppuStack_44;
  undefined4 uStack_40;
  undefined4 **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  char *pcStack_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  int *local_18;
  int iVar7;
  
  local_18 = (int *)&stack0xfffffffc;
  iVar6 = 0x2d;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = &LAB_005513fd;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_24 = (undefined4 *)0x550fcd;
  FUN_00402fe0(*param_1,local_128);
  local_24 = (undefined4 *)0x550fdb;
  FUN_00403fd4((int *)&local_28,local_128);
  local_24 = local_28;
  local_28 = (undefined4 *)&DAT_00551414;
  pcStack_2c = "DoLoadFromFile";
  puStack_30 = (undefined4 *)0x550ff5;
  FUN_004040f0((int *)&local_24,3);
  puStack_30 = local_24;
  uStack_34 = 0x550ffe;
  uVar3 = FUN_004a418c();
  puVar1 = puStack_30;
  puStack_30 = (undefined4 *)0x55100a;
  FUN_004a48b8(uVar3,puVar1,0);
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0x55101e;
  iVar6 = (**(code **)(*param_2 + 8))(param_2,"GENERAL","CURRENTPLAYER");
  param_1[10] = iVar6;
  uStack_34 = 0;
  uStack_38 = 0x551038;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"GENERAL","PREVSTATE");
  *(undefined1 *)((int)param_1 + 9) = uVar2;
  uStack_38 = 0;
  ppuStack_3c = &local_12c;
  uStack_40 = 0x551058;
  (**(code **)*param_2)(param_2,"FORMAT",&DAT_00551478);
  uStack_40 = 0x551069;
  FUN_00403e04(param_1 + 3,local_12c);
  uStack_40 = 0;
  ppuStack_44 = &local_130;
  uStack_48 = 0x551083;
  (**(code **)*param_2)(param_2,"GENERAL","INTROAVI");
  uStack_48 = 0x551094;
  FUN_00403e04(param_1 + 4,local_130);
  uStack_48 = 0;
  ppuStack_4c = &local_134;
  uStack_50 = 0x5510ae;
  (**(code **)*param_2)(param_2,"GENERAL","OUTROAVI");
  uStack_50 = 0x5510bf;
  FUN_00403e04(param_1 + 5,local_134);
  uStack_50 = 0;
  ppuStack_54 = &local_138;
  uStack_58 = 0x5510d9;
  (**(code **)*param_2)(param_2,"GENERAL","LEADERAVI");
  uStack_58 = 0x5510ea;
  FUN_00403e04(param_1 + 6,local_138);
  uStack_58 = 0;
  ppuStack_5c = &local_13c;
  uStack_60 = 0x551104;
  (**(code **)*param_2)(param_2,"GENERAL","RESOURCE");
  uStack_60 = 0x551115;
  FUN_00403e04(param_1 + 7,local_13c);
  uStack_60 = 0;
  ppuStack_64 = &local_140;
  uStack_68 = 0x55112f;
  (**(code **)*param_2)(param_2,"GENERAL","SOUNDDIR");
  uStack_68 = 0x551140;
  FUN_00403e04(param_1 + 8,local_140);
  uStack_68 = 0;
  ppuStack_6c = &local_144;
  uStack_70 = 0x55115a;
  (**(code **)*param_2)(param_2,"GENERAL","BITMAPDIR");
  uStack_70 = 0x55116b;
  FUN_00403e04(param_1 + 9,local_144);
  uStack_70 = 0;
  ppuStack_74 = &local_148;
  uStack_78 = 0x551185;
  (**(code **)*param_2)(param_2,"GENERAL","MUSICDIR");
  uStack_78 = 0x551196;
  FUN_00403e04(param_1 + 0xd,local_148);
  uStack_78 = 0;
  iStack_7c = 0x5511aa;
  iVar6 = (**(code **)(*param_2 + 8))(param_2,"GENERAL","SIMFIRSTTIME");
  iStack_7c = 0;
  uStack_80 = 0x5511c1;
  iVar4 = (**(code **)(*param_2 + 8))(param_2,"GENERAL","HAUNTED");
  *(bool *)(param_1 + 0xe) = iVar4 == 1;
  *(undefined1 *)(param_1 + 2) = 0;
  uStack_80 = 0x5511d7;
  iVar4 = FUN_004029fc();
  uVar2 = iVar4 == 0;
  uVar5 = extraout_ECX;
  if (0 < iVar4) {
    iVar7 = 1;
    local_20 = iVar4;
    do {
      uStack_80 = 0x5511f3;
      FUN_00402a5c(iVar7,(int *)&local_150);
      uStack_80 = 0x551204;
      FUN_00409690(local_150,(int *)&local_14c);
      uStack_80 = 0x551214;
      FUN_00404140(local_14c,(uint *)"/FIRSTTIME");
      if (((bool)uVar2) || (iVar6 != 0)) {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)((int)param_1 + 9) = 0;
      }
      iVar7 = iVar7 + 1;
      local_20 = local_20 + -1;
      uVar2 = local_20 == 0;
      uVar5 = extraout_ECX_00;
    } while (!(bool)uVar2);
  }
  iVar6 = 0;
  do {
    uStack_80 = 0x551243;
    local_18 = (int *)FUN_00403064((int *)&DAT_00550dd8,'\x01',uVar5);
    *(undefined4 *)((int)local_18 + 4) = 0;
    uStack_80 = 0x551259;
    FUN_00403db0((int *)((int)local_18 + 8));
    uStack_80 = 0x551267;
    FUN_004121d8((int *)param_1[0xb],(int)local_18);
    iVar6 = iVar6 + 1;
    uVar5 = extraout_ECX_01;
  } while (iVar6 != 0xb);
  uStack_80 = 0x55127c;
  local_18 = (int *)FUN_00403064((int *)&DAT_00550dd8,'\x01',extraout_ECX_01);
  iVar6 = 0;
  do {
    uStack_80 = 0;
    uStack_84 = 0x551294;
    FUN_00409bd8(iVar6,&local_154);
    uStack_84 = 0x5512a7;
    uVar5 = (**(code **)(*param_2 + 8))(param_2,"HIGHSCORES",local_154);
    *(undefined4 *)((int)local_18 + 4) = uVar5;
    uStack_84 = 0;
    ppuStack_88 = &local_158;
    uStack_8c = 0x5512c4;
    FUN_00409bd8(iVar6,(int *)&local_160);
    uStack_8c = 0x5512da;
    FUN_0040407c(&local_15c,(undefined4 *)&DAT_00551574,local_160);
    uStack_8c = 0x5512ec;
    (**(code **)*param_2)(param_2,"HIGHSCORES",local_15c);
    uStack_80 = 0x5512fd;
    FUN_00403e04((int *)((int)local_18 + 8),local_158);
    uStack_80 = 0x55130b;
    FUN_00551a9c((int)param_1,(int)local_18,(int *)&local_1c);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xb);
  uStack_80 = 0x551324;
  local_18 = (int *)FUN_00403064((int *)&DAT_00550dd8,'\x01',extraout_ECX_02);
  iVar6 = 0;
  do {
    uStack_80 = 0;
    uStack_84 = 0x55133c;
    FUN_00409bd8(iVar6,&local_164);
    uStack_84 = 0x55134f;
    iVar4 = (**(code **)(*param_2 + 8))(param_2,"HIGHSCORES",local_164);
    local_18[1] = iVar4;
    uStack_84 = 0;
    ppuStack_88 = &local_168;
    uStack_8c = 0x55136c;
    FUN_00409bd8(iVar6,(int *)&local_170);
    uStack_8c = 0x551382;
    FUN_0040407c(&local_16c,(undefined4 *)&DAT_00551574,local_170);
    uStack_8c = 0x551394;
    (**(code **)*param_2)(param_2,"HIGHSCORES",local_16c);
    uStack_80 = 0x5513a5;
    FUN_00403e04(local_18 + 2,local_168);
    uStack_80 = 0x5513b3;
    FUN_00551a9c((int)param_1,(int)local_18,(int *)&local_1c);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xb);
  uStack_80 = 0x5513c8;
  FUN_00403094(local_18);
  uStack_80 = 0x5513cd;
  uVar3 = FUN_004a418c();
  uStack_80 = 0x5513d2;
  FUN_004a49b0(uVar3);
  *in_FS_OFFSET = iStack_7c;
  ppuStack_74 = (undefined4 **)&LAB_00551404;
  uStack_78 = 0x5513ef;
  FUN_00403dd4((int *)&local_170,0x12);
  uStack_78 = 0x5513fc;
  FUN_00403dd4((int *)&local_28,2);
  return;
}

