/*
 * FUN_0049bf10 at 0049bf10
 * undefined __register FUN_0049bf10(int * param_1, int * param_2)
 * Address ranges: 0049bf10-0049c2d8;0049c2e0-0049c355
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049c218) */
/* WARNING: Removing unreachable block (ram,0x0049c259) */
/* WARNING: Removing unreachable block (ram,0x0049c17e) */

void FUN_0049bf10(int *param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined1 *puVar7;
  undefined *puStack_17c;
  char *pcStack_178;
  char *pcStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int local_160;
  int local_15c [5];
  byte local_148 [256];
  int local_48;
  int local_44;
  byte local_3e;
  char local_3d;
  byte local_3c;
  ushort local_32;
  ushort local_30;
  byte local_2e;
  byte local_2d;
  int local_2c;
  int local_28;
  byte *local_24;
  char local_1f;
  ushort local_1e;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puStack_168 = &stack0xfffffffc;
  local_15c[0] = 0;
  local_160 = 0;
  local_15c[2] = 0;
  local_15c[1] = 0;
  local_15c[4] = 0;
  local_15c[3] = 0;
  local_44 = 0;
  local_48 = 0;
  puStack_16c = &LAB_0049c356;
  pcStack_170 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_170;
  local_c = param_2;
  local_8 = param_1;
  FUN_0049aa40(param_1,param_2,0);
  (**(code **)(*local_c + 4))(local_c,&local_3e,0x12);
  if (local_3d != '\0') {
    FUN_00402fe0(*local_8,local_148);
    FUN_00403fd4(&local_48,local_148);
    pcStack_178 = ".LoadFromStream";
    puStack_17c = &DAT_0049c384;
    FUN_004040f0(&local_44,4);
    FUN_00403d94(local_44);
  }
  if (local_3d != '\x01') {
    local_1f = (local_3c & 8) != 0;
    uVar1 = (uint)(short)(local_3c & 0xfff7);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    local_3c = (byte)uVar1;
    if (local_3c != 2) {
      FUN_00402fe0(*local_8,local_148);
      FUN_00403fd4(local_15c + 3,local_148);
      pcStack_178 = ".LoadFromStream";
      puStack_17c = &DAT_0049c384;
      FUN_004040f0(local_15c + 4,4);
      FUN_00403d94(local_15c[4]);
    }
    if (local_3c == 2) {
      if ((local_2e != 0x18) && (local_2e != 0x20)) {
        FUN_00402fe0(*local_8,local_148);
        FUN_00403fd4(local_15c + 1,local_148);
        pcStack_178 = ".LoadFromStream";
        puStack_17c = &DAT_0049c384;
        pcStack_170 = "Not a 24 or 32 bit Targa file";
        FUN_004040f0(local_15c + 2,4);
        FUN_00403d94(local_15c[2]);
      }
      if ((local_2e == 0x18) || (local_2e == 0x20)) {
        pcStack_178 = (char *)0x49c0ec;
        FUN_0049b884(local_8,(int *)(uint)local_32,(uint)local_30,(undefined *)(uint)local_2e);
        if ((local_2d & 0x20) == 0) {
          uVar1 = local_30 - 1;
          if (SBORROW4((uint)local_30,1)) {
            uVar1 = thunk_FUN_00402874(uVar1);
          }
          local_10 = 0xffffffff;
          local_14 = uVar1;
        }
        else {
          local_14 = 0;
          local_10 = 1;
        }
        if (local_3e == 0) {
          FUN_00403db0(local_8 + 0x132);
        }
        else {
          FUN_00404364(local_8 + 0x132,(uint)local_3e);
          uVar1 = FUN_00404200(local_8 + 0x132);
          iVar5 = 0;
          if (*(int *)(uVar1 - 4) == 0) {
            uVar1 = thunk_FUN_00402874(uVar1);
            iVar5 = extraout_EDX;
          }
          (**(code **)(*local_c + 4))(local_c,uVar1 + iVar5,local_3e);
        }
        uVar1 = (uint)(local_2e >> 3) * (uint)local_32;
        if (0xffff < uVar1) {
          uVar1 = thunk_FUN_00402874(uVar1);
        }
        local_1e = (ushort)uVar1;
        if (local_8[0x24] < (int)(uVar1 & 0xffff)) {
          FUN_00402fe0(*local_8,local_148);
          FUN_00403fd4(&local_160,local_148);
          pcStack_178 = ".LoadFromStream";
          puStack_17c = &DAT_0049c384;
          pcStack_170 = "Targa image doesn\'t fit in the DIB";
          FUN_004040f0(local_15c,4);
          FUN_00403d94(local_15c[0]);
        }
        local_18 = local_14;
        if (local_1f != '\0') {
          local_24 = (byte *)FUN_0040960c((uint)local_1e * 2);
          pcStack_178 = &LAB_0049c2d9;
          puStack_17c = (undefined *)*in_FS_OFFSET;
          *in_FS_OFFSET = &puStack_17c;
          uVar1 = local_30 - 1;
          if (SBORROW4((uint)local_30,1)) {
            uVar1 = thunk_FUN_00402874(uVar1);
          }
          if (-1 < (int)uVar1) {
            local_2c = uVar1 + 1;
            local_1c = 0;
            do {
              local_28 = (**(code **)(*local_c + 4))(local_c,local_24);
              puVar7 = &stack0xfffffffc;
              pbVar2 = (byte *)FUN_0049ae44(local_8,local_18);
              iVar5 = FUN_0049bc24(local_24,pbVar2,(uint)local_1e,(int)puVar7);
              iVar3 = FUN_004147b0(local_c);
              uVar1 = iVar3 - local_28;
              if (SBORROW4(iVar3,local_28)) {
                uVar1 = thunk_FUN_00402874(uVar1);
              }
              if (SCARRY4(iVar5,uVar1)) {
                thunk_FUN_00402874(uVar1);
              }
              FUN_004147c0(local_c,iVar5 + uVar1);
              bVar6 = SCARRY4(local_18,local_10);
              local_18 = local_18 + local_10;
              if (bVar6) {
                thunk_FUN_00402874(local_10);
              }
              local_1c = local_1c + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          *in_FS_OFFSET = puStack_17c;
          pcStack_178 = (char *)0x49c2d8;
          FUN_00402800((int)local_24);
          return;
        }
        uVar1 = local_30 - 1;
        if (SBORROW4((uint)local_30,1)) {
          uVar1 = thunk_FUN_00402874(uVar1);
        }
        if (-1 < (int)uVar1) {
          local_2c = uVar1 + 1;
          local_1c = 0;
          do {
            uVar4 = FUN_0049ae44(local_8,local_18);
            (**(code **)(*local_c + 4))(local_c,uVar4,local_1e);
            bVar6 = SCARRY4(local_18,local_10);
            local_18 = local_18 + local_10;
            if (bVar6) {
              thunk_FUN_00402874(local_10);
            }
            local_1c = local_1c + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
      }
    }
  }
  *in_FS_OFFSET = pcStack_170;
  puStack_168 = &LAB_0049c35d;
  puStack_16c = (undefined1 *)0x49c348;
  FUN_00403dd4(&local_160,6);
  puStack_16c = (undefined1 *)0x49c355;
  FUN_00403dd4(&local_48,2);
  return;
}

