/*
 * FUN_004d302c at 004d302c
 * undefined __register FUN_004d302c(int * param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004d302c-004d34fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d302c(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  int *in_FS_OFFSET;
  VARIANT local_1c0;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  VARIANT *local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined *local_168;
  int local_164;
  int local_160;
  int local_15c;
  uint local_158;
  undefined1 local_154;
  undefined *local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined *local_138;
  undefined1 local_134;
  int local_130;
  byte local_12c [220];
  undefined4 uStackY_50;
  int *piVar8;
  char *pcStack_3c;
  char *pcStack_38;
  undefined1 *puStack_34;
  char *local_2c;
  char *local_28;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  
  local_1c = (int *)&stack0xfffffffc;
  iVar5 = 0x37;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  iVar5 = 0;
  UNLOCK();
  do {
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  local_20 = &LAB_004d3553;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  piVar3 = (int *)&stack0xfffffffc;
  if (param_4 == (int *)0x0) {
    local_28 = (char *)0x4d307d;
    FUN_00402fe0(*param_1,local_12c);
    local_28 = (char *)0x4d308b;
    FUN_00403fd4((int *)&local_2c,local_12c);
    local_28 = local_2c;
    local_2c = ".LoadAppObjByProps: ";
    local_138 = &DAT_004d3598;
    local_134 = 0xb;
    puStack_34 = (undefined1 *)0x4d30be;
    FUN_0040a894((byte *)" Parameter \'%s\' cannot be nil",&local_138,0,&local_130);
    puStack_34 = (undefined1 *)0x4d30d1;
    FUN_004040f0((int *)&local_28,3);
    puStack_34 = (undefined1 *)0x4d30e3;
    FUN_00403d94(local_28);
    piVar3 = local_1c;
  }
  local_1c = piVar3;
  puStack_34 = (undefined1 *)0x4d30eb;
  iVar5 = FUN_00494858(param_4);
  puStack_34 = (undefined1 *)0x4d30f0;
  bVar1 = FUN_004918fc(iVar5);
  uVar6 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (!bVar1) {
    puStack_34 = (undefined1 *)0x4d30fc;
    iVar5 = FUN_00494858(param_4);
    puStack_34 = (undefined1 *)0x4d3101;
    bVar1 = FUN_0049191c(iVar5);
    uVar6 = extraout_ECX_00;
    uVar7 = extraout_EDX_00;
    if (!bVar1) {
      puStack_34 = (undefined1 *)0x4d3115;
      FUN_00402fe0(*param_1,local_12c);
      puStack_34 = (undefined1 *)0x4d3126;
      FUN_00403fd4(&local_140,local_12c);
      puStack_34 = (undefined1 *)local_140;
      pcStack_38 = ".LoadAppObjByProps: ";
      pcStack_3c = "The object does not have a corresponding table in the database";
      FUN_004040f0(&local_13c,3);
      FUN_00403d94(local_13c);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX_01;
    }
  }
  local_1c = (int *)0x0;
  pcStack_38 = &LAB_004d34fb;
  pcStack_3c = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_3c;
  puStack_34 = &stack0xfffffffc;
  piVar3 = FUN_004cf39c(param_1,uVar7,uVar6);
  local_1c = (int *)FUN_004cf3c8(param_1,'\0');
  iVar5 = FUN_00494858(param_4);
  FUN_004b49b8(piVar3,iVar5);
  local_24 = 1;
  local_20 = (undefined1 *)0x0;
  do {
    if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
      puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
    }
    if (*(int *)(&stack0xffffffe8 + (int)puVar4 * 4) == 0) {
      FUN_00402fe0(*param_1,local_12c);
      FUN_00403fd4(&local_148,local_12c);
      piVar8 = &local_14c;
      local_158 = (uint)local_20;
      local_154 = 0;
      uStackY_50 = 0x4d3231;
      FUN_0040a894((byte *)"AppProp %d",&local_158,0,(int *)&local_150);
      local_138 = local_150;
      local_134 = 0xb;
      FUN_0040a894((byte *)" Parameter \'%s\' cannot be nil",&local_138,0,piVar8);
      FUN_004040f0(&local_144,3);
      FUN_00403d94(local_144);
    }
    if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
      puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
    }
    cVar2 = (**(code **)(**(int **)(&stack0xffffffe8 + (int)puVar4 * 4) + 0x4c))();
    if (cVar2 == '\0') {
      FUN_00402fe0(*param_1,local_12c);
      FUN_00403fd4(&local_160,local_12c);
      piVar8 = &local_164;
      local_158 = (uint)local_20;
      local_154 = 0;
      uStackY_50 = 0x4d3301;
      FUN_0040a894((byte *)"AppProp %d",&local_158,0,(int *)&local_168);
      local_138 = local_168;
      local_134 = 0xb;
      FUN_0040a894((byte *)" %s is not initialized",&local_138,0,piVar8);
      FUN_004040f0(&local_15c,3);
      FUN_00403d94(local_15c);
    }
    if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
      puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
    }
    cVar2 = (**(code **)(**(int **)(&stack0xffffffe8 + (int)puVar4 * 4) + 0x50))();
    if (cVar2 == '\0') {
      local_1b0 = *(undefined4 *)PTR_DAT_00572470;
      local_1ac = 7;
      if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
        puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
      }
      local_1a8 = *(undefined4 *)(&stack0xffffffe8 + (int)puVar4 * 4);
      local_1a4 = 7;
      local_1a0 = *(undefined4 *)PTR_DAT_0057260c;
      local_19c = 7;
      if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
        puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
      }
      FUN_00496550(*(int **)(&stack0xffffffe8 + (int)puVar4 * 4),&local_1c0);
      local_198 = &local_1c0;
      local_194 = 0xd;
      local_190 = *(undefined4 *)PTR_DAT_005725b8;
      local_18c = 7;
      FUN_004b4e04((int)piVar3,&local_1b0,4);
    }
    else {
      local_188 = *(undefined4 *)PTR_DAT_00572470;
      local_184 = 7;
      if (((int)local_20 < 0) || (puVar4 = local_20, 0 < (int)local_20)) {
        puVar4 = (undefined1 *)thunk_FUN_00402874((uint)local_20);
      }
      local_180 = *(undefined4 *)(&stack0xffffffe8 + (int)puVar4 * 4);
      local_17c = 7;
      local_178 = *(undefined4 *)PTR_DAT_0057252c;
      local_174 = 7;
      local_170 = *(undefined4 *)PTR_DAT_005725b8;
      local_16c = 7;
      FUN_004b4e04((int)piVar3,&local_188,3);
    }
    local_20 = (undefined1 *)((int)local_20 + 1);
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  FUN_004b4f0c(piVar3,0);
  FUN_004d69fc(local_1c,(int)piVar3);
  FUN_004d5dc0(local_1c);
  cVar2 = (**(code **)(*local_1c + 0x3c))();
  if (cVar2 != '\0') {
    FUN_004d6cb4(local_1c,param_4);
  }
  FUN_004d516c(local_1c);
  *in_FS_OFFSET = (int)pcStack_3c;
  puStack_34 = &LAB_004d3502;
  pcStack_38 = (char *)0x4d34f2;
  FUN_00403094(piVar3);
  pcStack_38 = (char *)0x4d34fa;
  FUN_00403094(local_1c);
  return;
}

