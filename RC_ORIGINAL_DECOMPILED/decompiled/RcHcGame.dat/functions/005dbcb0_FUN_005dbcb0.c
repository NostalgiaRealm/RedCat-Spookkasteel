/*
 * FUN_005dbcb0 at 005dbcb0
 * undefined FUN_005dbcb0(void)
 * Address ranges: 005dbcb0-005dc0c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005dbcb0(void)

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
  
  if ((*(int *)(DAT_0070f854 + 0x18) == 0) ||
     ((*(int *)(DAT_0070f880 + 0x18) != 0 &&
      (*(int *)(DAT_0070f880 + 0x1c) == *(int *)(DAT_0070f854 + 0x1c))))) {
    uVar5 = DAT_0070f884 * DAT_0070f860;
    iVar6 = DAT_0070f89c + uVar5;
    iVar7 = DAT_0070f8a0 + uVar5;
    if (DAT_0070f864 != 0) {
      local_c = DAT_0070f864;
      puVar9 = DAT_0070f840;
      puVar10 = DAT_0070f890;
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
    uVar5 = *(uint *)(DAT_0070f854 + 0x1c);
    if (*(int *)(DAT_0070f880 + 0x18) == 0) {
      switch(DAT_0070f884) {
      case 1:
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              bVar1 = (byte)*puVar10;
              if (bVar1 == uVar5) {
                bVar1 = bVar1 ^ 1;
              }
              *(byte *)puVar9 = bVar1;
              iVar7 = DAT_0070f860;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f86c);
            puVar10 = (uint *)((int)puVar10 + DAT_0070f88c);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 2:
        puVar9 = DAT_0070f890;
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar2 = (ushort)*puVar10;
              if (uVar2 == uVar5) {
                uVar2 = uVar2 ^ 1;
              }
              *(ushort *)puVar9 = uVar2;
              puVar9 = (uint *)((int)puVar9 + 2);
              iVar7 = DAT_0070f860;
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            iVar12 = iVar12 + -1;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f86c * 2);
            iVar6 = iVar7;
            puVar10 = (uint *)((int)puVar10 + DAT_0070f88c * 2);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 3:
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
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
              iVar7 = DAT_0070f860;
            }
            iVar12 = iVar12 + -1;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f8a0);
            puVar10 = (uint *)((int)puVar10 + DAT_0070f89c);
            iVar6 = iVar7;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 4:
        puVar9 = DAT_0070f890;
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar8 = *puVar10;
              if (uVar8 == uVar5) {
                uVar8 = uVar8 ^ 1;
              }
              *puVar9 = uVar8;
              puVar9 = puVar9 + 1;
              iVar7 = DAT_0070f860;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + -1;
            puVar9 = puVar9 + DAT_0070f86c;
            iVar6 = iVar7;
            puVar10 = puVar10 + DAT_0070f88c;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      default:
        goto switchD_005dbd17_default;
      }
    }
    else {
      uVar8 = *(uint *)(DAT_0070f880 + 0x1c);
      switch(DAT_0070f884) {
      case 1:
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar3 = (uint)(byte)*puVar10;
              uVar4 = uVar5;
              if ((uVar3 != uVar8) && (uVar4 = uVar3, uVar3 == uVar5)) {
                uVar4 = uVar8;
              }
              *(byte *)puVar9 = (byte)uVar4;
              iVar7 = DAT_0070f860;
              puVar9 = (uint *)((int)puVar9 + 1);
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f86c);
            puVar10 = (uint *)((int)puVar10 + DAT_0070f88c);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 2:
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar3 = (uint)(ushort)*puVar10;
              uVar4 = uVar5;
              if ((uVar3 != uVar8) && (uVar4 = uVar3, uVar3 == uVar5)) {
                uVar4 = uVar8;
              }
              *(ushort *)puVar9 = (ushort)uVar4;
              iVar7 = DAT_0070f860;
              puVar9 = (uint *)((int)puVar9 + 2);
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f86c * 2);
            puVar10 = (uint *)((int)puVar10 + DAT_0070f88c * 2);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 3:
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
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
              iVar7 = DAT_0070f860;
              puVar9 = (uint *)((int)puVar9 + 3);
              puVar10 = (uint *)((int)puVar10 + 3);
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = (uint *)((int)puVar9 + DAT_0070f8a0);
            puVar10 = (uint *)((int)puVar10 + DAT_0070f89c);
          } while (iVar12 != 0);
          return 1;
        }
        break;
      case 4:
        iVar6 = DAT_0070f860;
        iVar7 = DAT_0070f860;
        puVar9 = DAT_0070f890;
        puVar10 = DAT_0070f840;
        iVar12 = DAT_0070f864;
        if (DAT_0070f864 != 0) {
          do {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              uVar4 = *puVar10;
              uVar3 = uVar5;
              if ((uVar4 != uVar8) && (uVar3 = uVar4, uVar4 == uVar5)) {
                uVar3 = uVar8;
              }
              *puVar9 = uVar3;
              iVar7 = DAT_0070f860;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar7;
            puVar9 = puVar9 + DAT_0070f86c;
            puVar10 = puVar10 + DAT_0070f88c;
          } while (iVar12 != 0);
          return 1;
        }
        break;
      default:
switchD_005dbd17_default:
        return 0;
      }
    }
  }
  return 1;
}

