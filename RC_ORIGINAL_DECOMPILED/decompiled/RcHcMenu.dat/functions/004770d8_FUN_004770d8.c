/*
 * FUN_004770d8 at 004770d8
 * undefined __register FUN_004770d8(int param_1)
 * Address ranges: 004770d8-0047764e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004770d8(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *puVar7;
  byte *pbVar8;
  int *in_FS_OFFSET;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  byte *local_148;
  byte local_144 [32];
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  byte local_114 [4];
  undefined1 local_110;
  byte *local_10c;
  byte local_108 [256];
  byte *local_8;
  
  bVar3 = 0;
  puStack_158 = &stack0xfffffffc;
  local_148 = (byte *)0x0;
  local_124 = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x0;
  local_118 = (undefined4 *)0x0;
  local_10c = (byte *)0x0;
  puStack_15c = &LAB_0047764f;
  iStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_160;
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_1 + 0x44);
  iVar11 = 0x47712b;
  FUN_00403db0((int *)(param_1 + 0x38));
  for (local_8 = *(byte **)(param_1 + 0x30); (*local_8 != 0 && (*local_8 < 0x21));
      local_8 = local_8 + 1) {
  }
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  if ((((*local_8 != 0) && (*local_8 == 0x2f)) && (local_8[1] != 0)) && (local_8[1] == 0x2a)) {
    for (local_8 = local_8 + 2; (*local_8 != 0 && (*local_8 != 0x2a)); local_8 = local_8 + 1) {
    }
    if (((*local_8 == 0x2a) && (local_8[1] != 0)) && (local_8[1] == 0x2f)) {
      local_8 = local_8 + 2;
    }
    else {
      iVar11 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_005720b4,(int *)&local_10c);
      local_114[0] = *local_8;
      local_110 = 2;
      FUN_00466e30(local_10c,local_114,0,iVar11);
      uVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX_00;
    }
  }
  for (; (pbVar1 = local_8, *local_8 != 0 && (*local_8 < 0x21)); local_8 = local_8 + 1) {
  }
  *(byte **)(param_1 + 0x34) = local_8;
  uVar4 = (uint)*local_8;
  if (uVar4 < 0x30) {
    if (uVar4 < 0x2b) {
      if (uVar4 == 0x2a) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 0xe;
        goto LAB_00477616;
      }
      if (uVar4 == 0) {
        *(undefined1 *)(param_1 + 0x44) = 0;
        goto LAB_00477616;
      }
      if (uVar4 == 0x27) {
        uVar4 = 0;
        while( true ) {
          local_8 = local_8 + 1;
          if (*local_8 == 0) {
            FUN_00406a48((undefined4 *)PTR_PTR_00572224,(int *)&local_124);
            FUN_00466d84(local_124,0);
          }
          if ((*local_8 == 0x27) && (local_8 = local_8 + 1, *local_8 != 0x27)) break;
          if ((int)uVar4 < 0x100) {
            local_108[uVar4] = *local_8;
            uVar4 = uVar4 + 1;
          }
        }
        FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)local_108,uVar4);
        *(undefined1 *)(param_1 + 0x44) = 3;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        goto LAB_00477616;
      }
      if (uVar4 == 0x28) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 4;
        goto LAB_00477616;
      }
      if (uVar4 == 0x29) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 5;
        goto LAB_00477616;
      }
    }
    else {
      if (uVar4 == 0x2b) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 0xc;
        goto LAB_00477616;
      }
      if (uVar4 == 0x2c) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 0x10;
        goto LAB_00477616;
      }
      if (uVar4 == 0x2d) goto LAB_004774ba;
      if (uVar4 == 0x2f) {
        local_8 = local_8 + 1;
        *(undefined1 *)(param_1 + 0x44) = 0xf;
        goto LAB_00477616;
      }
    }
  }
  else if (uVar4 < 0x41) {
    if (uVar4 - 0x30 < 10) {
LAB_004774ba:
      cVar2 = *(char *)(param_1 + 0x45);
      if ((((cVar2 == '\x03') || (cVar2 == '\x02')) || (cVar2 == '\x01')) || (cVar2 == '\x05')) {
        *(undefined1 *)(param_1 + 0x44) = 0xd;
        local_8 = local_8 + 1;
      }
      else {
        local_8 = local_8 + 1;
        while( true ) {
          puVar7 = &DAT_004776f0;
          pbVar8 = local_144;
          for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(undefined4 *)pbVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar3 * -2 + 1;
            pbVar8 = pbVar8 + ((uint)bVar3 * -2 + 1) * 4;
          }
          local_144[(int)(uint)(byte)*PTR_DAT_005725bc >> 3] =
               local_144[(int)(uint)(byte)*PTR_DAT_005725bc >> 3] |
               '\x01' << ((byte)*PTR_DAT_005725bc & 7);
          if ((local_144[(int)(uint)*local_8 >> 3] >> (*local_8 & 7) & 1) == 0) break;
          local_8 = local_8 + 1;
        }
        if (((local_8[-1] == 0x2c) && (*PTR_DAT_005725bc == ',')) && (*local_8 == 0x20)) {
          local_8 = local_8 + -1;
        }
        FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)pbVar1,(int)local_8 - (int)pbVar1);
        *(undefined1 *)(param_1 + 0x44) = 3;
        *(undefined1 *)(param_1 + 0x4c) = 1;
      }
      goto LAB_00477616;
    }
    if (uVar4 == 0x3c) {
      local_8 = local_8 + 1;
      bVar3 = *local_8;
      if (bVar3 == 0x3d) {
        local_8 = pbVar1 + 2;
        *(undefined1 *)(param_1 + 0x44) = 9;
      }
      else if (bVar3 == 0x3e) {
        local_8 = pbVar1 + 2;
        *(undefined1 *)(param_1 + 0x44) = 7;
      }
      else {
        *(undefined1 *)(param_1 + 0x44) = 0xb;
      }
      goto LAB_00477616;
    }
    if (uVar4 == 0x3d) {
      local_8 = local_8 + 1;
      *(undefined1 *)(param_1 + 0x44) = 6;
      goto LAB_00477616;
    }
    if (uVar4 == 0x3e) {
      local_8 = local_8 + 1;
      if (*local_8 == 0x3d) {
        local_8 = pbVar1 + 2;
        *(undefined1 *)(param_1 + 0x44) = 8;
      }
      else {
        *(undefined1 *)(param_1 + 0x44) = 10;
      }
      goto LAB_00477616;
    }
  }
  else if (uVar4 < 0x60) {
    if ((uVar4 == 0x5f) || (uVar4 - 0x41 < 0x1a)) {
LAB_00477290:
      if (PTR_DAT_0057261c[8] == '\0') {
        do {
          local_8 = local_8 + 1;
          bVar3 = *local_8 - 0x28;
          bVar9 = bVar3 < 0x57;
          if (bVar3 < 0x58) {
            bVar9 = ((byte)(&DAT_00477660)[(int)(bVar3 & 0x7f) >> 3] >> (bVar3 & 7) & 1) != 0;
          }
        } while (bVar9);
      }
      else {
        FUN_0047707c((undefined4 *)&DAT_0047766c,uVar6,uVar5,(int)&stack0xfffffffc);
      }
      FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)pbVar1,(int)local_8 - (int)pbVar1);
      *(undefined1 *)(param_1 + 0x44) = 1;
      iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"LIKE");
      if (iVar10 == 0) {
        *(undefined1 *)(param_1 + 0x44) = 0x11;
      }
      else {
        iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"IN");
        if (iVar10 == 0) {
          *(undefined1 *)(param_1 + 0x44) = 0x14;
        }
        else {
          iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"IS");
          if (iVar10 == 0) {
            for (; (pbVar1 = local_8, *local_8 != 0 && (*local_8 < 0x21)); local_8 = local_8 + 1) {
            }
            FUN_0047707c((undefined4 *)&DAT_004776b4,extraout_EDX_01,extraout_ECX_01,
                         (int)&stack0xfffffffc);
            FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)pbVar1,(int)local_8 - (int)pbVar1);
            iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"NOT");
            if (iVar10 == 0) {
              for (; (pbVar1 = local_8, *local_8 != 0 && (*local_8 < 0x21)); local_8 = local_8 + 1)
              {
              }
              FUN_0047707c((undefined4 *)&DAT_004776b4,extraout_EDX_02,extraout_ECX_02,
                           (int)&stack0xfffffffc);
              FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)pbVar1,(int)local_8 - (int)pbVar1);
              iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"NULL");
              if (iVar10 == 0) {
                *(undefined1 *)(param_1 + 0x44) = 0x13;
              }
              else {
                FUN_00406a48((undefined4 *)PTR_PTR_005721d0,(int *)&local_118);
                FUN_00466d84(local_118,0);
              }
            }
            else {
              iVar10 = FUN_00409758(*(char **)(param_1 + 0x38),"NULL");
              if (iVar10 == 0) {
                *(undefined1 *)(param_1 + 0x44) = 0x12;
              }
              else {
                FUN_00406a48((undefined4 *)PTR_PTR_005721d0,(int *)&local_11c);
                FUN_00466d84(local_11c,0);
              }
            }
          }
        }
      }
      goto LAB_00477616;
    }
    if (uVar4 - 0x41 == 0x1a) {
      pbVar1 = local_8 + 1;
      local_8 = pbVar1;
      local_8 = (byte *)FUN_0040dc34(pbVar1,']');
      if (local_8 == (byte *)0x0) {
        FUN_00406a48((undefined4 *)PTR_PTR_00572418,(int *)&local_120);
        FUN_00466d84(local_120,0);
      }
      FUN_00403e98((int *)(param_1 + 0x38),(undefined4 *)pbVar1,(int)local_8 - (int)pbVar1);
      *(undefined1 *)(param_1 + 0x44) = 2;
      local_8 = local_8 + 1;
      goto LAB_00477616;
    }
  }
  else if ((uVar4 - 0x61 < 0x1a) || (uVar4 - 0x81 < 0x7e)) goto LAB_00477290;
  iVar10 = 0;
  FUN_00406a48((undefined4 *)PTR_PTR_005720b4,(int *)&local_148);
  local_114[0] = *local_8;
  local_110 = 2;
  FUN_00466e30(local_148,local_114,0,iVar10);
LAB_00477616:
  *(byte **)(param_1 + 0x30) = local_8;
  *in_FS_OFFSET = iVar11;
  puStack_15c = &LAB_00477656;
  iStack_160 = 0x477633;
  FUN_00403db0((int *)&local_148);
  iStack_160 = 0x477643;
  FUN_00403dd4((int *)&local_124,4);
  iStack_160 = 0x47764e;
  FUN_00403db0((int *)&local_10c);
  return;
}

