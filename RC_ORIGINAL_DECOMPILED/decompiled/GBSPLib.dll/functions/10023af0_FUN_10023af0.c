/*
 * FUN_10023af0 at 10023af0
 * undefined FUN_10023af0(void)
 * Address ranges: 10023af0-10023f3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10023af0(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 local_1c [4];
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  byte *local_c;
  int local_8;
  
  if (DAT_1052a1bc != 1) {
    return 0;
  }
  iVar4 = FUN_100203a0();
  iVar5 = FUN_100203a0();
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar5 == 0) {
    return 0;
  }
  local_8 = FUN_10019ae0();
  if (local_8 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,0x508,&DAT_10265ce0,
                 0);
    return 0;
  }
  iVar6 = FUN_1001a050();
  if (iVar6 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,0x512,&DAT_10265ce0,
                 0);
  }
  else if ((*(int *)(DAT_1052a1a4 + 0x18) == 0) || (iVar6 = FUN_1001a100(0,0,0,0), iVar6 != 0)) {
    if ((*(int *)(DAT_1052a17c + 0x18) != 0) && (iVar6 = 0, 0 < *(int *)(local_8 + 0xc))) {
      do {
        FUN_1001a2b0(&local_18);
        if (local_18 == *(uint *)(DAT_1052a17c + 0x1c)) {
          FUN_1001a1c0(local_18 ^ 1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_8 + 0xc));
    }
    if (((*(int *)(DAT_1052a1a4 + 0x18) == 0) || (*(int *)(DAT_1052a17c + 0x18) == 0)) ||
       (iVar6 = FUN_1001a1c0(*(undefined4 *)(DAT_1052a17c + 0x1c)), iVar6 != 0)) {
      if (((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(iVar5 + 0xc) == 0)) &&
         ((*(int *)(DAT_1052a17c + 0x18) != 0 && (iVar4 = 0, 0 < *(int *)(local_8 + 0xc))))) {
        do {
          FUN_1001a2b0(&local_18);
          if ((*(int *)(DAT_1052a1a4 + 0x18) == 0) || (local_18 != *(uint *)(DAT_1052a1a4 + 0x1c)))
          {
            FUN_10020310(local_1c,&local_c,&local_14,&local_10);
            if ((int)local_10 < 0x50) goto LAB_10023cdc;
          }
          else {
            local_10 = (undefined4 *)0x0;
LAB_10023cdc:
            FUN_1001a1c0(*(undefined4 *)(DAT_1052a17c + 0x1c));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(local_8 + 0xc));
      }
      pbVar12 = DAT_1052a16c;
      local_c = DAT_1052a16c;
      uVar7 = FUN_100203d0();
      switch(uVar7) {
      case 1:
        local_10 = DAT_1052a1b4;
        local_18 = *(uint *)(local_8 + 0x1c);
        if (DAT_1052a188 != 0) {
          local_14 = DAT_1052a188;
          uVar11 = DAT_1052a184;
          puVar10 = local_10;
          do {
            do {
              *(undefined1 *)puVar10 = *(undefined1 *)(local_18 + *local_c);
              local_c = local_c + 1;
              uVar11 = uVar11 - 1;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            } while (uVar11 != 0);
            local_c = pbVar12 + DAT_1052a1b0 + DAT_1052a184;
            puVar10 = (undefined4 *)((int)local_10 + DAT_1052a190 + DAT_1052a184);
            local_14 = local_14 - 1;
            uVar11 = DAT_1052a184;
            local_10 = puVar10;
            pbVar12 = local_c;
          } while (local_14 != 0);
          local_14 = 0;
        }
        break;
      case 2:
        local_10 = DAT_1052a1b4;
        local_14 = *(uint *)(local_8 + 0x1c);
        if (DAT_1052a188 != 0) {
          local_18 = DAT_1052a188;
          do {
            uVar11 = DAT_1052a184 >> 1;
            puVar10 = local_10;
            do {
              bVar3 = *local_c;
              pbVar1 = local_c + 1;
              local_c = local_c + 2;
              *puVar10 = CONCAT22(*(undefined2 *)(local_14 + (uint)*pbVar1 * 2),
                                  *(undefined2 *)(local_14 + (uint)bVar3 * 2));
              puVar10 = puVar10 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            pbVar12 = pbVar12 + (DAT_1052a184 & 0xfffffffe);
            puVar2 = (undefined2 *)((int)local_10 + (DAT_1052a184 & 0xfffffffe) * 2);
            puVar8 = puVar2;
            if ((DAT_1052a184 & 1) != 0) {
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
              puVar8 = puVar2 + 1;
              *puVar2 = *(undefined2 *)(local_14 + (uint)bVar3 * 2);
            }
            pbVar12 = pbVar12 + DAT_1052a1b0;
            local_10 = (undefined4 *)(puVar8 + DAT_1052a190);
            local_18 = local_18 - 1;
            local_c = pbVar12;
          } while (local_18 != 0);
          local_18 = 0;
        }
        break;
      case 3:
        local_10 = DAT_1052a1b4;
        local_14 = *(uint *)(local_8 + 0x1c);
        if (DAT_1052a188 != 0) {
          local_18 = DAT_1052a188;
          uVar11 = DAT_1052a184;
          puVar10 = local_10;
          do {
            do {
              bVar3 = *local_c;
              local_c = local_c + 1;
              puVar9 = (undefined1 *)((uint)bVar3 * 3 + local_14);
              *(undefined1 *)puVar10 = *puVar9;
              *(undefined1 *)((int)puVar10 + 1) = puVar9[1];
              *(undefined1 *)((int)puVar10 + 2) = puVar9[2];
              uVar11 = uVar11 - 1;
              puVar10 = (undefined4 *)((int)puVar10 + 3);
            } while (uVar11 != 0);
            local_c = pbVar12 + DAT_1052a1b0 + DAT_1052a184;
            puVar10 = (undefined4 *)((int)local_10 + DAT_1052a190 + DAT_1052a184 * 3);
            local_18 = local_18 - 1;
            uVar11 = DAT_1052a184;
            local_10 = puVar10;
            pbVar12 = local_c;
          } while (local_18 != 0);
          local_18 = 0;
        }
        break;
      case 4:
        local_10 = DAT_1052a1b4;
        local_14 = *(uint *)(local_8 + 0x1c);
        if (DAT_1052a188 != 0) {
          local_18 = DAT_1052a188;
          uVar11 = DAT_1052a184;
          puVar10 = local_10;
          do {
            do {
              *puVar10 = *(undefined4 *)(local_14 + (uint)*local_c * 4);
              local_c = local_c + 1;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
            local_c = pbVar12 + DAT_1052a1b0 + DAT_1052a184;
            puVar10 = local_10 + DAT_1052a190 + DAT_1052a184;
            local_18 = local_18 - 1;
            uVar11 = DAT_1052a184;
            local_10 = puVar10;
            pbVar12 = local_c;
          } while (local_18 != 0);
        }
        break;
      default:
        goto switchD_10023d17_default;
      }
      FUN_10019d20();
      return 1;
    }
  }
switchD_10023d17_default:
  FUN_10019d20();
  return 0;
}

