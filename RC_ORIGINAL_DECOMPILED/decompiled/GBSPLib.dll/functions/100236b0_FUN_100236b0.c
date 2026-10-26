/*
 * FUN_100236b0 at 100236b0
 * undefined FUN_100236b0(void)
 * Address ranges: 100236b0-10023aca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100236b0(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  int local_c;
  
  if ((*(int *)(DAT_1052a17c + 0x18) == 0) ||
     ((*(int *)(DAT_1052a1a4 + 0x18) != 0 &&
      (*(int *)(DAT_1052a1a4 + 0x1c) == *(int *)(DAT_1052a17c + 0x1c))))) {
    uVar5 = DAT_1052a1a8 * DAT_1052a184;
    iVar6 = DAT_1052a1c0 + uVar5;
    iVar7 = DAT_1052a1c4 + uVar5;
    if (DAT_1052a188 != 0) {
      local_c = DAT_1052a188;
      puVar9 = DAT_1052a16c;
      puVar10 = DAT_1052a1b4;
      do {
        puVar11 = puVar9;
        puVar13 = puVar10;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(byte *)puVar13 = (byte)*puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          puVar13 = (uint *)((int)puVar13 + 1);
        }
        puVar9 = (uint *)((int)puVar9 + iVar6);
        puVar10 = (uint *)((int)puVar10 + iVar7);
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  else {
    uVar5 = *(uint *)(DAT_1052a17c + 0x1c);
    if (*(int *)(DAT_1052a1a4 + 0x18) == 0) {
      switch(DAT_1052a1a8) {
      case 1:
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              bVar1 = (byte)*puVar10;
              if (bVar1 == uVar5) {
                bVar1 = bVar1 ^ 1;
              }
              *(byte *)puVar9 = bVar1;
              iVar7 = DAT_1052a184;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a190);
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1b0);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 2:
        puVar9 = DAT_1052a1b4;
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar2 = (ushort)*puVar10;
              if (uVar2 == uVar5) {
                uVar2 = uVar2 ^ 1;
              }
              *(ushort *)puVar9 = uVar2;
              puVar9 = (uint *)((int)puVar9 + 2);
              iVar7 = DAT_1052a184;
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            iVar12 = iVar12 + -1;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a190 * 2);
            iVar6 = iVar7;
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1b0 * 2);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 3:
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar8 = ((uint)(byte)*puVar10 * 0x100 + (uint)*(byte *)((int)puVar10 + 1)) * 0x100 +
                      (uint)*(byte *)((int)puVar10 + 2);
              if (uVar8 == uVar5) {
                uVar8 = uVar8 ^ 1;
              }
              *(byte *)((int)puVar9 + 2) = (byte)uVar8;
              *(byte *)puVar9 = (byte)(uVar8 >> 0x10);
              *(byte *)((int)puVar9 + 1) = (byte)(uVar8 >> 8);
              puVar9 = (uint *)((int)puVar9 + 3);
              puVar10 = (uint *)((int)puVar10 + 3);
              iVar7 = DAT_1052a184;
            }
            iVar12 = iVar12 + -1;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a1c4);
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1c0);
            iVar6 = iVar7;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 4:
        puVar9 = DAT_1052a1b4;
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar8 = *puVar10;
              if (uVar8 == uVar5) {
                uVar8 = uVar8 ^ 1;
              }
              *puVar9 = uVar8;
              puVar9 = puVar9 + 1;
              iVar7 = DAT_1052a184;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + -1;
            puVar9 = puVar9 + DAT_1052a190;
            iVar6 = iVar7;
            puVar10 = puVar10 + DAT_1052a1b0;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      default:
        goto switchD_10023717_default;
      }
    }
    else {
      uVar8 = *(uint *)(DAT_1052a1a4 + 0x1c);
      switch(DAT_1052a1a8) {
      case 1:
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar3 = (uint)(byte)*puVar10;
              uVar4 = uVar5;
              if ((uVar3 != uVar8) && (uVar4 = uVar3, uVar3 == uVar5)) {
                uVar4 = uVar8;
              }
              *(byte *)puVar9 = (byte)uVar4;
              iVar7 = DAT_1052a184;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a190);
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1b0);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 2:
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar3 = (uint)(ushort)*puVar10;
              uVar4 = uVar5;
              if ((uVar3 != uVar8) && (uVar4 = uVar3, uVar3 == uVar5)) {
                uVar4 = uVar8;
              }
              *(ushort *)puVar9 = (ushort)uVar4;
              iVar7 = DAT_1052a184;
              puVar9 = (uint *)((int)puVar9 + 2);
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a190 * 2);
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1b0 * 2);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 3:
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar3 = ((uint)(byte)*puVar10 * 0x100 + (uint)*(byte *)((int)puVar10 + 1)) * 0x100 +
                      (uint)*(byte *)((int)puVar10 + 2);
              uVar4 = uVar5;
              if ((uVar3 != uVar8) && (uVar4 = uVar3, uVar3 == uVar5)) {
                uVar4 = uVar8;
              }
              *(byte *)((int)puVar9 + 2) = (byte)uVar4;
              *(byte *)puVar9 = (byte)(uVar4 >> 0x10);
              *(byte *)((int)puVar9 + 1) = (byte)(uVar4 >> 8);
              iVar7 = DAT_1052a184;
              puVar9 = (uint *)((int)puVar9 + 3);
              puVar10 = (uint *)((int)puVar10 + 3);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_1052a1c4);
            puVar10 = (uint *)((int)puVar10 + DAT_1052a1c0);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 4:
        iVar6 = DAT_1052a184;
        iVar7 = DAT_1052a184;
        puVar9 = DAT_1052a1b4;
        puVar10 = DAT_1052a16c;
        iVar12 = DAT_1052a188;
        if (DAT_1052a188 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar4 = *puVar10;
              uVar3 = uVar5;
              if ((uVar4 != uVar8) && (uVar3 = uVar4, uVar4 == uVar5)) {
                uVar3 = uVar8;
              }
              *puVar9 = uVar3;
              iVar7 = DAT_1052a184;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = puVar9 + DAT_1052a190;
            puVar10 = puVar10 + DAT_1052a1b0;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      default:
switchD_10023717_default:
        return 0;
      }
    }
  }
  return 1;
}

