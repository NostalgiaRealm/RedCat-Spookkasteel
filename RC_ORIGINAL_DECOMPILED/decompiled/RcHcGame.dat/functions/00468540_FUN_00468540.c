/*
 * FUN_00468540 at 00468540
 * undefined FUN_00468540(void)
 * Address ranges: 00468540-00468723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00468540(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_c;
  
  iVar4 = *(int *)(param_1 + 0x1680);
  bVar3 = false;
  local_c = 0;
  bVar2 = true;
  if (iVar4 != -1) {
    iVar1 = *(int *)(param_1 + 0x1684);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x1688) = 0x3f800000;
      *(int *)(param_1 + 0x1684) = iVar4 + param_2;
    }
    else if (iVar1 < param_2) {
      *(undefined4 *)(param_1 + 0x1688) = 0;
      bVar2 = false;
    }
    else if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x1688) = 0;
    }
    else {
      *(float *)(param_1 + 0x1688) = (float)(iVar1 - param_2) / (float)iVar4;
    }
  }
  *(bool *)(param_1 + 0x168c) = bVar2;
  if (!bVar2) {
    puVar6 = (undefined4 *)(param_1 + 0x14a4);
    iVar4 = param_1 + 0x19c;
    do {
      if (bVar3) break;
      if (*(char *)(iVar4 + 0x6c) == '\0') {
        FUN_0047e710();
        *(undefined4 *)(iVar4 + 4) = puVar6[-3];
        *(undefined4 *)(iVar4 + 8) = puVar6[-2];
        *(undefined4 *)(iVar4 + 0xc) = puVar6[-1];
        *(undefined4 *)(iVar4 + 0x10) = *puVar6;
        *(undefined4 *)(iVar4 + 0x14) = puVar6[1];
        *(undefined4 *)(iVar4 + 0x18) = puVar6[2];
        FUN_004041b0(puVar6[3]);
        bVar3 = true;
      }
      iVar4 = iVar4 + 0x144;
      local_c = local_c + 1;
      puVar6 = puVar6 + 7;
    } while (local_c < 0xf);
  }
  if (*(int *)(*(int *)(param_1 + 0xf8) + 0x30) != 0) {
    FUN_00468450(param_3,param_1 + 0x100);
  }
  local_c = 0;
  piVar5 = (int *)(param_1 + 0x19c);
  iVar4 = 0xf;
  do {
    if ((char)piVar5[0x1b] != '\0') {
      (**(code **)(*piVar5 + 4))(param_2,param_3);
      local_c = local_c + 1;
    }
    piVar5 = piVar5 + 0x51;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(param_1 + 0x1690);
  bVar2 = true;
  if (iVar4 != -1) {
    iVar1 = *(int *)(param_1 + 0x1694);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x1698) = 0x3f800000;
      *(int *)(param_1 + 0x1694) = iVar4 + param_2;
    }
    else if (iVar1 < param_2) {
      *(undefined4 *)(param_1 + 0x1698) = 0;
      bVar2 = false;
    }
    else if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x1698) = 0;
    }
    else {
      *(float *)(param_1 + 0x1698) = (float)(iVar1 - param_2) / (float)iVar4;
    }
  }
  *(bool *)(param_1 + 0x169c) = bVar2;
  if (!bVar2) {
    if (local_c == 0) {
      FUN_00502350(0);
      return;
    }
    FUN_004041b0(0xffffffff);
  }
  return;
}

