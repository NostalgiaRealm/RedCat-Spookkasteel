/*
 * FUN_0046bd00 at 0046bd00
 * undefined FUN_0046bd00(void)
 * Address ranges: 0046bd00-0046c08e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046bd00(int param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0x9c1) == '\0') {
    iVar4 = *(int *)(param_1 + 0x824);
    bVar2 = true;
    if (iVar4 != -1) {
      iVar5 = *(int *)(param_1 + 0x828);
      if (iVar5 == -1) {
        *(undefined4 *)(param_1 + 0x82c) = 0x3f800000;
        *(int *)(param_1 + 0x828) = iVar4 + param_2;
      }
      else if (iVar5 < param_2) {
        *(undefined4 *)(param_1 + 0x82c) = 0;
        bVar2 = false;
      }
      else if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x82c) = 0;
      }
      else {
        *(float *)(param_1 + 0x82c) = (float)(iVar5 - param_2) / (float)iVar4;
      }
    }
    *(bool *)(param_1 + 0x830) = bVar2;
    if (!bVar2) {
      uVar3 = __ftol();
      FUN_004041b0(uVar3);
      uVar3 = __ftol();
      FUN_004041b0(uVar3);
      *(undefined1 *)(param_1 + 0x9c0) = 1;
      iVar4 = *(int *)(param_1 + 0x998) + 1;
      *(int *)(param_1 + 0x998) = iVar4;
      if (iVar4 == 6) {
        uVar3 = 0x3fc00000;
      }
      else {
        uVar3 = 0x3f800000;
      }
      FUN_0046cb80(0,0,0x3f400000,uVar3);
    }
    if (*(char *)(param_1 + 0x9c0) != '\0') {
      iVar4 = *(int *)(param_1 + 0x834);
      bVar2 = true;
      if (*(int *)(param_1 + 0x998) < 6) {
        if (iVar4 != -1) {
          iVar5 = *(int *)(param_1 + 0x838);
          if (iVar5 == -1) {
            *(undefined4 *)(param_1 + 0x83c) = 0x3f800000;
            *(int *)(param_1 + 0x838) = iVar4 + param_2;
          }
          else if (iVar5 < param_2) {
            *(undefined4 *)(param_1 + 0x83c) = 0;
            bVar2 = false;
          }
          else if (iVar4 < 1) {
            *(undefined4 *)(param_1 + 0x83c) = 0;
          }
          else {
            *(float *)(param_1 + 0x83c) = (float)(iVar5 - param_2) / (float)iVar4;
          }
        }
        *(bool *)(param_1 + 0x840) = bVar2;
        if (!bVar2) {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0x998) * 0xb0 + 0x108 + param_1);
          *puVar1 = *(undefined4 *)(param_1 + 0x99c);
          puVar1[1] = *(undefined4 *)(param_1 + 0x9a0);
          puVar1[2] = *(undefined4 *)(param_1 + 0x9a4);
          *(undefined1 *)(param_1 + 0x9c0) = 0;
          FUN_0046ca90(0);
          if (*(int *)(param_1 + 0x998) == 5) {
            *(undefined1 *)(param_1 + 0x9c2) = 1;
            uVar3 = __ftol();
            FUN_004041b0(uVar3);
          }
          goto LAB_0046c055;
        }
        FUN_005b2fe0(local_c);
        FUN_005b2fd0();
        FUN_005b2fa0(1.0 - *(float *)(param_1 + 0x83c));
        iVar4 = *(int *)(param_1 + 0x998);
      }
      else {
        if (iVar4 != -1) {
          iVar5 = *(int *)(param_1 + 0x838);
          if (iVar5 == -1) {
            *(undefined4 *)(param_1 + 0x83c) = 0x3f800000;
            *(int *)(param_1 + 0x838) = iVar4 + param_2;
          }
          else if (iVar5 < param_2) {
            *(undefined4 *)(param_1 + 0x83c) = 0;
            bVar2 = false;
          }
          else if (iVar4 < 1) {
            *(undefined4 *)(param_1 + 0x83c) = 0;
          }
          else {
            *(float *)(param_1 + 0x83c) = (float)(iVar5 - param_2) / (float)iVar4;
          }
        }
        *(bool *)(param_1 + 0x840) = bVar2;
        if (bVar2 == false) {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0x998) * 0xb0 + 0x108 + param_1);
          *puVar1 = *(undefined4 *)(param_1 + 0x9b4);
          puVar1[1] = *(undefined4 *)(param_1 + 0x9b8);
          puVar1[2] = *(undefined4 *)(param_1 + 0x9bc);
          *(undefined1 *)(param_1 + 0x9c0) = 0;
          *(undefined1 *)(param_1 + 0x9c1) = 1;
          goto LAB_0046c055;
        }
        FUN_005b2fe0(local_c);
        FUN_005b2fd0();
        FUN_005b2fa0(1.0 - *(float *)(param_1 + 0x83c));
        iVar4 = *(int *)(param_1 + 0x998);
      }
      FUN_005b3000(iVar4 * 0xb0 + param_1 + 0x108);
    }
  }
LAB_0046c055:
  if ((-1 < *(int *)(param_1 + 0x998)) && (iVar4 = 0, -1 < *(int *)(param_1 + 0x998))) {
    iVar5 = param_1 + 0xfc;
    do {
      FUN_0046ba00(iVar5);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xb0;
    } while (iVar4 <= *(int *)(param_1 + 0x998));
  }
  return;
}

