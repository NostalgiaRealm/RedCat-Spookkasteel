/*
 * FUN_10001090 at 10001090
 * undefined FUN_10001090(void)
 * Address ranges: 10001090-10001530
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10001090(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [32];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = FUN_10014a00();
  if (iVar2 == 0) {
    (*DAT_1014e358)();
    return 0;
  }
  iVar2 = FUN_10001000();
  *(int *)(iVar2 + 0x2c) = local_d8;
  local_e4 = 0;
  local_d4 = 0;
  iVar5 = 0;
  local_cc = iVar2;
  if (0 < local_d8) {
    do {
      puVar7 = local_b0;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar5 = FUN_10014a00();
      if (iVar5 == 0) {
        (*DAT_1014e358)();
        return 0;
      }
      local_74 = FUN_10011830(local_50,0);
      iVar5 = FUN_10014a00();
      if (iVar5 == 0) {
        FUN_10001040();
        return 0;
      }
      iVar5 = FUN_10014a00();
      if (iVar5 == 0) {
        (*DAT_1014e358)();
        FUN_10001040(iVar2);
        return 0;
      }
      local_c8[0] = local_70;
      local_c8[1] = local_6c;
      local_c8[2] = local_68;
      local_c8[3] = (float)local_b4;
      local_b8 = 6;
      iVar5 = FUN_10014450();
      if (iVar5 == 0) {
        FUN_100144b0();
        FUN_10002ae0(local_c8);
        local_d0 = FUN_10002b50(local_c8,&local_e0);
        iVar3 = 0;
        iVar5 = iVar2 + 0x30;
        if (0 < local_e4) {
          do {
            if ((*(int *)(iVar5 + 4) == local_d0) && (*(byte *)(iVar5 + 8) == local_e0)) break;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 0x14;
          } while (iVar3 < local_e4);
        }
        if (iVar3 == local_e4) {
          pfVar6 = (float *)(&DAT_1003fdf8 + local_d0 * 5);
          pfVar8 = local_c8;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar8 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar8 = pfVar8 + 1;
          }
          if (local_e0 != 0) {
            FUN_10002b30();
          }
          local_b0[0] = local_30;
          local_b0[2] = local_28;
          local_a0 = local_18;
          local_b0[1] = local_2c;
          local_98 = local_20;
          local_b0[3] = local_1c;
          local_90 = local_24;
          local_9c = local_14;
          local_84 = local_58;
          local_94 = local_c;
          local_8c = local_10;
          local_88 = local_64;
          if ((local_64 & 0x10) == 0) {
            local_5c = 255.0;
          }
          local_7c = local_5c;
          local_78 = local_60;
          local_80 = local_54;
          if ((local_64 & 1) != 0) {
            local_88 = local_64 | 0x10;
            *(byte *)(iVar5 + 0x10) = *(byte *)(iVar5 + 0x10) | 1;
            if (240.0 < local_5c) {
              (*DAT_1014e35c)();
            }
          }
          if (((local_88 & 0x10) != 0) && ((local_88 & 1) == 0)) {
            local_dc = local_dc | 8;
          }
          *(int *)(iVar5 + 4) = local_d0;
          *(undefined1 *)(iVar5 + 8) = (undefined1)local_e0;
          iVar2 = FUN_100118e0();
          *(int *)(iVar5 + 0xc) = iVar2;
          if (iVar2 == -1) {
            (*DAT_1014e358)();
            FUN_10001040(local_cc);
            return 0;
          }
          local_e4 = local_e4 + 1;
          iVar2 = local_cc;
        }
        else {
          (*DAT_1014e35c)();
        }
      }
      else {
        (*DAT_1014e358)();
        (*DAT_1014e358)(s_Normal___X___2_2f__Y__2_2f__Z__2_10036154,(double)local_c8[0],
                        (double)local_c8[1],(double)local_c8[2]);
      }
      local_d4 = local_d4 + 1;
      iVar5 = local_e4;
    } while (local_d4 < local_d8);
  }
  if (iVar5 <= *(int *)(iVar2 + 0x2c)) {
    *(uint *)(iVar2 + 0xc) = local_dc;
    iVar3 = DAT_10311d00 + -1;
    *(int *)(iVar2 + 0x2c) = iVar5;
    *(int *)(iVar2 + 4) = iVar3;
    FUN_10001560();
    if (*(int *)(iVar2 + 0xc) == 0) {
      *(undefined4 *)(iVar2 + 0xc) = 4;
    }
    uVar1 = *(uint *)(iVar2 + 0xc);
    if (((uVar1 & 0x400) != 0) && ((uVar1 & 1) != 0)) {
      *(uint *)(iVar2 + 0xc) = uVar1 & 0xfffffffe | 0x40;
    }
    if ((*(byte *)(iVar2 + 0xc) & 0x40) != 0) {
      if (0 < iVar5) {
        pbVar4 = (byte *)(iVar2 + 0x40);
        iVar3 = iVar5;
        do {
          iVar3 = iVar3 + -1;
          *pbVar4 = *pbVar4 & 0xfb;
          pbVar4 = pbVar4 + 0x14;
        } while (iVar3 != 0);
      }
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x20;
    }
    if ((*(uint *)(iVar2 + 0xc) & 0x400) != 0) {
      *(byte *)(iVar2 + 0x40) = *(byte *)(iVar2 + 0x40) | 2;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x20;
    }
    if ((*(byte *)(iVar2 + 0xc) & 0x80) != 0) {
      if (0 < iVar5) {
        pbVar4 = (byte *)(iVar2 + 0x40);
        do {
          iVar5 = iVar5 + -1;
          *pbVar4 = *pbVar4 | 5;
          pbVar4 = pbVar4 + 0x14;
        } while (iVar5 != 0);
      }
      if ((*(uint *)(iVar2 + 0xc) & 0x20) != 0) {
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffdf;
      }
    }
    if ((*(uint *)(iVar2 + 0xc) & 2) != 0) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x28;
    }
    if ((*(byte *)(iVar2 + 0xc) & 1) != 0) {
      DAT_10265cec = DAT_10265cec + 1;
    }
    if ((*(byte *)(iVar2 + 0xc) & 0x20) != 0) {
      DAT_10265cf0 = DAT_10265cf0 + 1;
    }
    DAT_10311cfc = DAT_10311cfc + 1;
    return iVar2;
  }
  (*DAT_1014e358)();
  return 0;
}

