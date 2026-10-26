/*
 * FUN_005dc0f0 at 005dc0f0
 * undefined FUN_005dc0f0(void)
 * Address ranges: 005dc0f0-005dc54a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_005dc0f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  byte *local_c;
  int local_8;
  
  if (DAT_0070f898 != 1) {
    return 0;
  }
  iVar1 = FUN_005c6a40();
  iVar2 = FUN_005c6a40();
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  local_8 = FUN_005c4aa0();
  if (local_8 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b0764,0x558,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar3 = FUN_005c5040();
  if (iVar3 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b0764,0x562,
                 &DAT_006b3f70,0);
  }
  else if ((*(int *)(DAT_0070f880 + 0x18) == 0) || (iVar3 = FUN_005c50f0(0,0,0,0), iVar3 != 0)) {
    if ((*(int *)(DAT_0070f854 + 0x18) != 0) && (iVar3 = 0, 0 < *(int *)(local_8 + 0xc))) {
      do {
        FUN_005c5270(&local_18);
        if (local_18 == *(undefined4 **)(DAT_0070f854 + 0x1c)) {
          FUN_005c5190((uint)local_18 ^ 1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_8 + 0xc));
    }
    if (((*(int *)(DAT_0070f880 + 0x18) == 0) || (*(int *)(DAT_0070f854 + 0x18) == 0)) ||
       (iVar3 = FUN_005c5190(*(undefined4 *)(DAT_0070f854 + 0x1c)), iVar3 != 0)) {
      if (((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar2 + 0xc) == 0)) &&
         ((*(int *)(DAT_0070f854 + 0x18) != 0 && (iVar1 = 0, 0 < *(int *)(local_8 + 0xc))))) {
        do {
          FUN_005c5270(&local_18);
          if ((*(int *)(DAT_0070f880 + 0x18) == 0) ||
             (local_18 != *(undefined4 **)(DAT_0070f880 + 0x1c))) {
            FUN_005c6930(local_1c,&local_c,&local_14,&local_10);
            if ((int)local_10 < 0x50) goto LAB_005dc2da;
          }
          else {
            local_10 = (undefined4 *)0x0;
LAB_005dc2da:
            FUN_005c5190(*(undefined4 *)(DAT_0070f854 + 0x1c));
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(local_8 + 0xc));
      }
      local_c = DAT_0070f840;
      uVar4 = FUN_005c6a70();
      pbVar9 = local_c;
      switch(uVar4) {
      case 1:
        local_10 = DAT_0070f890;
        local_18 = *(undefined4 **)(local_8 + 0x1c);
        uVar7 = DAT_0070f860;
        for (puVar10 = DAT_0070f864; pbVar9 = local_c, puVar11 = local_10, DAT_0070f860 = uVar7,
            puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)((int)puVar10 + -1)) {
          do {
            *(undefined1 *)puVar11 = *(undefined1 *)((int)local_18 + (uint)*pbVar9);
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          } while (uVar7 != 0);
          local_c = local_c + DAT_0070f88c + DAT_0070f860;
          local_10 = (undefined4 *)((int)local_10 + DAT_0070f86c + DAT_0070f860);
          uVar7 = DAT_0070f860;
        }
        break;
      case 2:
        local_10 = DAT_0070f890;
        local_14 = *(undefined4 **)(local_8 + 0x1c);
        local_c = pbVar9;
        if (DAT_0070f864 != (undefined4 *)0x0) {
          local_18 = DAT_0070f864;
          puVar11 = local_18;
          puVar10 = DAT_0070f890;
          puVar6 = local_18;
          pbVar8 = local_c;
          do {
            local_c = pbVar8;
            local_18 = puVar6;
            uVar7 = DAT_0070f860;
            pbVar8 = local_c;
            puVar6 = puVar10;
            if ((DAT_0070f860 & 1) == 0) {
              do {
                *puVar6 = CONCAT22(*(undefined2 *)((int)local_14 + (uint)pbVar8[1] * 2),
                                   *(undefined2 *)((int)local_14 + (uint)*pbVar8 * 2));
                uVar7 = uVar7 - 2;
                pbVar8 = pbVar8 + 2;
                puVar6 = puVar6 + 1;
              } while (uVar7 != 0);
            }
            else {
              do {
                *(undefined2 *)puVar6 = *(undefined2 *)((int)local_14 + (uint)*pbVar8 * 2);
                uVar7 = uVar7 - 1;
                pbVar8 = pbVar8 + 1;
                puVar6 = (undefined4 *)((int)puVar6 + 2);
              } while (uVar7 != 0);
            }
            pbVar8 = local_c + DAT_0070f88c + DAT_0070f860;
            puVar6 = (undefined4 *)((int)local_18 + -1);
            puVar10 = (undefined4 *)((int)puVar10 + (DAT_0070f86c + DAT_0070f860) * 2);
            local_18 = puVar11;
            local_c = pbVar9;
          } while (puVar6 != (undefined4 *)0x0);
        }
        break;
      case 3:
        local_10 = DAT_0070f890;
        local_18 = *(undefined4 **)(local_8 + 0x1c);
        uVar7 = DAT_0070f860;
        for (puVar10 = DAT_0070f864; pbVar9 = local_c, puVar11 = local_10, DAT_0070f860 = uVar7,
            puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)((int)puVar10 + -1)) {
          do {
            puVar5 = (undefined1 *)((uint)*pbVar9 * 3 + (int)local_18);
            *(undefined1 *)puVar11 = *puVar5;
            *(undefined1 *)((int)puVar11 + 1) = puVar5[1];
            *(undefined1 *)((int)puVar11 + 2) = puVar5[2];
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            puVar11 = (undefined4 *)((int)puVar11 + 3);
          } while (uVar7 != 0);
          local_c = local_c + DAT_0070f88c + DAT_0070f860;
          local_10 = (undefined4 *)((int)local_10 + DAT_0070f86c + DAT_0070f860 * 3);
          uVar7 = DAT_0070f860;
        }
        break;
      case 4:
        local_18 = DAT_0070f890;
        local_10 = *(undefined4 **)(local_8 + 0x1c);
        local_c = pbVar9;
        if (DAT_0070f864 != (undefined4 *)0x0) {
          local_14 = DAT_0070f864;
          uVar7 = DAT_0070f860;
          local_18 = DAT_0070f890;
          puVar10 = DAT_0070f890;
          do {
            do {
              *local_18 = local_10[*pbVar9];
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              local_18 = local_18 + 1;
            } while (uVar7 != 0);
            pbVar9 = local_c + DAT_0070f88c + DAT_0070f860;
            local_14 = (undefined4 *)((int)local_14 + -1);
            local_18 = puVar10 + DAT_0070f86c + DAT_0070f860;
            uVar7 = DAT_0070f860;
            local_c = pbVar9;
            puVar10 = local_18;
          } while (local_14 != (undefined4 *)0x0);
        }
        break;
      default:
        goto switchD_005dc315_default;
      }
      FUN_005c4d10();
      return 1;
    }
  }
switchD_005dc315_default:
  FUN_005c4d10();
  return 0;
}

