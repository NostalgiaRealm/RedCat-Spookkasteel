/*
 * FUN_005449e0 at 005449e0
 * undefined __register FUN_005449e0(int * param_1, int * param_2)
 * Address ranges: 005449e0-00544f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005449e0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  byte *local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  byte *local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  byte *local_19c;
  int local_198;
  int local_194;
  undefined4 *local_190;
  int local_18c;
  int local_188;
  byte *local_184;
  int local_180;
  int local_17c;
  int local_178;
  byte *local_174;
  int local_170;
  int local_16c;
  int local_168;
  byte *local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined1 local_154;
  int local_150;
  undefined1 local_14c;
  int local_148;
  undefined1 local_144;
  int local_140;
  undefined1 local_13c;
  int local_138;
  undefined1 local_134;
  int local_130;
  undefined1 local_12c;
  int local_128;
  undefined1 local_124;
  int local_120;
  undefined1 local_11c;
  undefined4 *local_118;
  byte local_114 [236];
  undefined4 uStackY_28;
  char *pcStackY_24;
  char *pcStackY_20;
  undefined4 **ppuVar4;
  undefined4 uStack_18;
  undefined1 *local_14;
  undefined1 *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = &stack0xfffffffc;
  iVar3 = 0x37;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_14 = &LAB_00544f17;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*(int *)param_1[0xc4] + 8))();
  if (iVar3 < 2) {
    piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
    cVar1 = (**(code **)(*piVar2 + 8))();
    if (cVar1 != '\x03') {
      piVar2 = (int *)FUN_00494858((int *)local_8[0xd2]);
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 == '\0') {
        FUN_00406a48(&PTR_DAT_005449a0,local_c);
      }
      else if (cVar1 == '\x01') {
        FUN_00406a48(&PTR_DAT_005449a8,local_c);
      }
      else if (cVar1 == '\x02') {
        FUN_00406a48(&PTR_DAT_005449b0,local_c);
      }
      else if (cVar1 == '\x03') {
        FUN_00406a48(&PTR_DAT_005449b8,local_c);
      }
      else {
        FUN_00402fe0(*local_8,local_114);
        FUN_00403fd4(&local_18c,local_114);
        pcStackY_20 = ".GetPnlMessage: ";
        pcStackY_24 = " Unhandled case-part";
        uStackY_28 = 0x544d0a;
        FUN_004040f0(&local_188,3);
        uStackY_28 = 0x544d1f;
        FUN_00403d94(local_188);
      }
      ppuVar4 = &local_190;
      pcStackY_20 = (char *)0x544d34;
      cVar1 = (**(code **)(*(int *)local_8[0xd2] + 0x2c))();
      pcStackY_20 = (char *)0x544d3f;
      FUN_00460a70(cVar1,&local_194);
      local_158 = local_194;
      local_154 = 0xb;
      pcStackY_20 = (char *)0x544d66;
      (**(code **)(*(int *)local_8[0xd2] + 0x34))((int *)local_8[0xd2],&local_19c);
      pcStackY_20 = (char *)0x544d77;
      FUN_00460d1c(local_19c,&local_198);
      local_150 = local_198;
      local_14c = 0xb;
      pcStackY_20 = (char *)0x544d9e;
      FUN_00493550((int *)local_8[0xd2],&local_1a0);
      local_148 = local_1a0;
      local_144 = 0xb;
      pcStackY_20 = (char *)0x544dbf;
      piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
      pcStackY_20 = (char *)0x544dc4;
      cVar1 = (**(code **)(*piVar2 + 8))();
      pcStackY_20 = (char *)0x544dcf;
      FUN_00460a70(cVar1,&local_1a4);
      local_140 = local_1a4;
      local_13c = 0xb;
      pcStackY_20 = (char *)0x544df0;
      piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
      pcStackY_20 = (char *)0x544dfb;
      (**(code **)(*piVar2 + 0x10))(piVar2,&local_1ac);
      pcStackY_20 = (char *)0x544e0c;
      FUN_00460d1c(local_1ac,&local_1a8);
      local_138 = local_1a8;
      local_134 = 0xb;
      pcStackY_20 = (char *)0x544e2d;
      piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
      pcStackY_20 = (char *)0x544e32;
      cVar1 = (**(code **)(*piVar2 + 8))();
      pcStackY_20 = (char *)0x544e3d;
      FUN_00460b5c(cVar1,&local_1b0);
      local_130 = local_1b0;
      local_12c = 0xb;
      pcStackY_20 = (char *)0x544e5e;
      piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
      pcStackY_20 = (char *)0x544e63;
      cVar1 = (**(code **)(*piVar2 + 8))();
      pcStackY_20 = (char *)0x544e6e;
      FUN_00460a70(cVar1,&local_1b4);
      local_128 = local_1b4;
      local_124 = 0xb;
      pcStackY_20 = (char *)0x544e8f;
      piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
      pcStackY_20 = (char *)0x544e9a;
      (**(code **)(*piVar2 + 0x10))(piVar2,&local_1bc);
      pcStackY_20 = (char *)0x544eab;
      FUN_00460d1c(local_1bc,&local_1b8);
      local_120 = local_1b8;
      local_11c = 0xb;
      pcStackY_20 = (char *)0x544ed3;
      FUN_0040a894((byte *)*local_c,&local_158,7,(int *)ppuVar4);
      FUN_00403e04(local_c,local_190);
      goto LAB_00544ee1;
    }
  }
  cVar1 = (**(code **)(*(int *)local_8[0xd2] + 0x2c))();
  if (cVar1 == '\0') {
    FUN_00406a48(&PTR_DAT_005449c0,local_c);
  }
  else if (cVar1 == '\x01') {
    FUN_00406a48(&PTR_DAT_005449c8,local_c);
  }
  else if (cVar1 == '\x02') {
    FUN_00406a48(&PTR_DAT_005449d0,local_c);
  }
  else if (cVar1 == '\x03') {
    FUN_00406a48(&PTR_DAT_005449d8,local_c);
  }
  else {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4((int *)&local_14,local_114);
    pcStackY_20 = ".GetPnlMessage: ";
    pcStackY_24 = " Unhandled case-part";
    uStackY_28 = 0x544ac1;
    FUN_004040f0((int *)&local_10,3);
    uStackY_28 = 0x544ad3;
    FUN_00403d94(local_10);
  }
  ppuVar4 = &local_118;
  pcStackY_20 = (char *)0x544ae8;
  cVar1 = (**(code **)(*(int *)local_8[0xd2] + 0x2c))();
  pcStackY_20 = (char *)0x544af3;
  FUN_00460a70(cVar1,&local_15c);
  local_158 = local_15c;
  local_154 = 0xb;
  pcStackY_20 = (char *)0x544b1a;
  (**(code **)(*(int *)local_8[0xd2] + 0x34))((int *)local_8[0xd2],&local_164);
  pcStackY_20 = (char *)0x544b2b;
  FUN_00460d1c(local_164,&local_160);
  local_150 = local_160;
  local_14c = 0xb;
  pcStackY_20 = (char *)0x544b52;
  FUN_00493550((int *)local_8[0xd2],&local_168);
  local_148 = local_168;
  local_144 = 0xb;
  pcStackY_20 = (char *)0x544b72;
  FUN_00460a70('\x03',&local_16c);
  local_140 = local_16c;
  local_13c = 0xb;
  pcStackY_20 = (char *)0x544b93;
  piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
  pcStackY_20 = (char *)0x544b9e;
  (**(code **)(*piVar2 + 0xc))(piVar2,&local_174);
  pcStackY_20 = (char *)0x544baf;
  FUN_00460d1c(local_174,&local_170);
  local_138 = local_170;
  local_134 = 0xb;
  pcStackY_20 = (char *)0x544bcf;
  FUN_00460b5c('\x03',&local_178);
  local_130 = local_178;
  local_12c = 0xb;
  pcStackY_20 = (char *)0x544bef;
  FUN_00460a70('\x03',&local_17c);
  local_128 = local_17c;
  local_124 = 0xb;
  pcStackY_20 = (char *)0x544c10;
  piVar2 = (int *)FUN_00549b64(local_8[0xc4]);
  pcStackY_20 = (char *)0x544c1b;
  (**(code **)(*piVar2 + 0xc))(piVar2,&local_184);
  pcStackY_20 = (char *)0x544c2c;
  FUN_00460d1c(local_184,&local_180);
  local_120 = local_180;
  local_11c = 0xb;
  pcStackY_20 = (char *)0x544c54;
  FUN_0040a894((byte *)*local_c,&local_158,7,(int *)ppuVar4);
  FUN_00403e04(local_c,local_118);
LAB_00544ee1:
  *in_FS_OFFSET = uStack_18;
  local_10 = &LAB_00544f1e;
  local_14 = (undefined1 *)0x544efe;
  FUN_00403dd4((int *)&local_1bc,0x19);
  local_14 = (undefined1 *)0x544f09;
  FUN_00403db0((int *)&local_118);
  local_14 = (undefined1 *)0x544f16;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

