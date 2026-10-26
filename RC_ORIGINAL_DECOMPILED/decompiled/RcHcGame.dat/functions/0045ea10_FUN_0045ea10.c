/*
 * FUN_0045ea10 at 0045ea10
 * undefined FUN_0045ea10(void)
 * Address ranges: 0045ea10-0045ece3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0045ea10(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  float fVar13;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    iVar9 = *(int *)(param_1 + 0x15bc);
    bVar4 = true;
    if (iVar9 != -1) {
      iVar8 = *(int *)(param_1 + 0x15c0);
      if (iVar8 == -1) {
        *(undefined4 *)(param_1 + 0x15c4) = 0x3f800000;
        *(int *)(param_1 + 0x15c0) = iVar9 + param_2;
      }
      else if (iVar8 < param_2) {
        *(undefined4 *)(param_1 + 0x15c4) = 0;
        bVar4 = false;
      }
      else if (iVar9 < 1) {
        *(undefined4 *)(param_1 + 0x15c4) = 0;
      }
      else {
        *(float *)(param_1 + 0x15c4) = (float)(iVar8 - param_2) / (float)iVar9;
      }
    }
    *(bool *)(param_1 + 0x15c8) = bVar4;
    if (!bVar4) {
      FUN_00502350(0);
      puVar6 = (undefined1 *)(param_1 + 0x174);
      iVar9 = 0xf;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x15c;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return;
    }
    if (*(char *)(param_1 + 0x15b4) == '\0') {
      fVar12 = (float10)FUN_00409e30(param_3);
      fVar13 = (float)fVar12;
    }
    else {
      fVar13 = 1.0 - *(float *)(param_1 + 0x15c4);
    }
    puVar10 = (undefined4 *)(param_1 + 0x159c);
    FUN_005b3020(fVar13,puVar10);
    iVar9 = *(int *)(param_1 + 0x15d0);
    iVar8 = *(int *)(param_1 + 0x15cc);
    bVar4 = true;
    if (iVar9 != -1) {
      iVar1 = *(int *)(param_1 + 0x15d4);
      if (iVar1 == -1) {
        *(undefined4 *)(param_1 + 0x15d8) = 0x3f800000;
        *(int *)(param_1 + 0x15d4) = iVar9 + param_2;
      }
      else if (iVar1 < param_2) {
        *(undefined4 *)(param_1 + 0x15d8) = 0;
        bVar4 = false;
      }
      else if (iVar9 < 1) {
        *(undefined4 *)(param_1 + 0x15d8) = 0;
      }
      else {
        *(float *)(param_1 + 0x15d8) = (float)(iVar1 - param_2) / (float)iVar9;
      }
    }
    *(bool *)(param_1 + 0x15dc) = bVar4;
    if ((!bVar4) && (iVar8 < 0xf)) {
      iVar9 = param_1 + iVar8 * 0x15c;
      if (*(char *)(param_1 + 0x174 + iVar8 * 0x15c) == '\0') {
        FUN_0047e710();
      }
      else {
        FUN_0047e780();
      }
      uVar7 = __ftol();
      FUN_004041b0(uVar7);
      *(undefined4 *)(iVar9 + 0x10c) = *puVar10;
      *(undefined4 *)(iVar9 + 0x110) = *(undefined4 *)(param_1 + 0x15a0);
      *(undefined4 *)(iVar9 + 0x114) = *(undefined4 *)(param_1 + 0x15a4);
      fVar13 = *(float *)(param_1 + 0x1578);
      fVar2 = *(float *)(param_1 + 0x157c);
      fVar3 = *(float *)(param_1 + 0x1580);
      FUN_005b2fa0(0x41a00000);
      iVar8 = FUN_0060a4a0();
      fVar5 = (float)(iVar8 % 10000) * 0.003 - 15.0;
      *(float *)(iVar9 + 0x118) = fVar13 - fVar5;
      *(float *)(iVar9 + 0x11c) = fVar2 + 15.0;
      *(float *)(iVar9 + 0x120) = fVar3 + fVar5;
      *(undefined4 *)(iVar9 + 0x24c) = *puVar10;
      *(undefined4 *)(iVar9 + 0x250) = *(undefined4 *)(param_1 + 0x15a0);
      *(undefined4 *)(iVar9 + 0x254) = *(undefined4 *)(param_1 + 0x15a4);
      iVar9 = *(int *)(param_1 + 0x15cc) + 1;
      *(int *)(param_1 + 0x15cc) = iVar9;
      if (0xe < iVar9) {
        *(undefined4 *)(param_1 + 0x15cc) = 0;
      }
    }
    piVar11 = (int *)(param_1 + 0x108);
    iVar9 = 0xf;
    do {
      (**(code **)(*piVar11 + 4))(param_2,param_3);
      piVar11 = piVar11 + 0x57;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}

