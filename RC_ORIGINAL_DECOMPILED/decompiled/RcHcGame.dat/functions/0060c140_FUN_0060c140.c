/*
 * FUN_0060c140 at 0060c140
 * undefined FUN_0060c140(void)
 * Address ranges: 0060c140-0060c52e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060c140(char param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (param_1 < '[') {
    if (param_1 != 'Z') {
      if ('M' < param_1) {
        if (param_1 == 'S') {
          uVar4 = 2;
          iVar2 = *param_2;
        }
        else {
          if (param_1 == 'U') {
            iVar3 = param_2[6];
          }
          else {
            if (param_1 != 'W') {
              if (param_1 == 'X') {
                DAT_00748ec4 = 0;
                uVar4 = *(undefined4 *)(param_5 + 0xa8);
                goto LAB_0060c4c6;
              }
              if (param_1 != 'Y') {
                return;
              }
              uVar4 = 4;
              iVar2 = (param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100;
              goto LAB_0060c27c;
            }
            if (param_2[6] == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = param_2[6] + -1;
            }
          }
          iVar1 = param_2[7];
          if (iVar1 < iVar3) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar1 / 7;
            if (iVar3 <= iVar1 % 7) {
              iVar2 = iVar2 + 1;
            }
          }
          uVar4 = 2;
        }
        goto LAB_0060c27c;
      }
      if (param_1 == 'M') {
        uVar4 = 2;
        iVar2 = param_2[1];
        goto LAB_0060c27c;
      }
      if (param_1 == '%') {
        *(undefined1 *)*param_3 = 0x25;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        return;
      }
      if (param_1 == 'A') {
        puVar5 = *(undefined **)(param_5 + 0x1c + param_2[6] * 4);
        goto LAB_0060c522;
      }
      if (param_1 == 'B') {
        puVar5 = *(undefined **)(param_5 + 0x68 + param_2[4] * 4);
        goto LAB_0060c522;
      }
      if (param_1 == 'H') {
        uVar4 = 2;
        iVar2 = param_2[2];
        goto LAB_0060c27c;
      }
      if (param_1 != 'I') {
        return;
      }
      iVar2 = param_2[2] % 0xc;
      if (iVar2 == 0) {
        iVar2 = 0xc;
      }
LAB_0060c1a9:
      uVar4 = 2;
LAB_0060c27c:
      DAT_00748ec8 = DAT_00748ec4;
      FUN_0060c556(iVar2,uVar4,param_3,param_4);
      return;
    }
  }
  else {
    if (param_1 < 'n') {
      if (param_1 == 'm') {
        iVar2 = param_2[4];
        uVar4 = 2;
      }
      else {
        if (param_1 == 'a') {
          puVar5 = *(undefined **)(param_5 + param_2[6] * 4);
          goto LAB_0060c522;
        }
        if (param_1 == 'b') {
          puVar5 = *(undefined **)(param_5 + 0x38 + param_2[4] * 4);
          goto LAB_0060c522;
        }
        if (param_1 == 'c') {
          if (DAT_00748ec4 == 0) {
            uVar4 = *(undefined4 *)(param_5 + 0xa0);
          }
          else {
            DAT_00748ec4 = 0;
            uVar4 = *(undefined4 *)(param_5 + 0xa4);
          }
          FUN_0060c60e(uVar4,param_2,param_3,param_4,param_5);
          if (*param_4 == 0) {
            return;
          }
          *(undefined1 *)*param_3 = 0x20;
          *param_3 = *param_3 + 1;
          *param_4 = *param_4 + -1;
          uVar4 = *(undefined4 *)(param_5 + 0xa8);
          goto LAB_0060c4c6;
        }
        if (param_1 == 'd') {
          uVar4 = 2;
          iVar2 = param_2[3];
          goto LAB_0060c27c;
        }
        if (param_1 != 'j') {
          return;
        }
        iVar2 = param_2[7];
        uVar4 = 3;
      }
      iVar2 = iVar2 + 1;
      goto LAB_0060c27c;
    }
    if (param_1 == 'p') {
      if (param_2[2] < 0xc) {
        puVar5 = *(undefined **)(param_5 + 0x98);
      }
      else {
        puVar5 = *(undefined **)(param_5 + 0x9c);
      }
      goto LAB_0060c522;
    }
    if (param_1 == 'w') {
      uVar4 = 1;
      iVar2 = param_2[6];
      goto LAB_0060c27c;
    }
    if (param_1 == 'x') {
      if (DAT_00748ec4 == 0) {
        uVar4 = *(undefined4 *)(param_5 + 0xa0);
      }
      else {
        DAT_00748ec4 = 0;
        uVar4 = *(undefined4 *)(param_5 + 0xa4);
      }
LAB_0060c4c6:
      FUN_0060c60e(uVar4,param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 'y') {
      iVar2 = param_2[5] % 100;
      goto LAB_0060c1a9;
    }
    if (param_1 != 'z') {
      return;
    }
  }
  FUN_0061908c();
  puVar5 = (&PTR_DAT_006b3050)[param_2[8] != 0];
LAB_0060c522:
  FUN_0060c52f(puVar5,param_3,param_4);
  return;
}

