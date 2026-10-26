/*
 * FUN_00474a20 at 00474a20
 * undefined FUN_00474a20(void)
 * Address ranges: 00474a20-00474f18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00474a20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  float *pfVar11;
  bool bVar12;
  float *local_10;
  int local_c;
  
  iVar2 = param_2;
  if (*(int *)(param_1 + 0x14954) == 1) {
    iVar2 = *(int *)(param_1 + 0x1481c);
    bVar3 = false;
    local_10 = (float *)0x0;
    bVar12 = true;
    if (iVar2 != -1) {
      iVar4 = *(int *)(param_1 + 84000);
      if (iVar4 == -1) {
        *(undefined4 *)(param_1 + 0x14824) = 0x3f800000;
        *(int *)(param_1 + 84000) = iVar2 + param_2;
      }
      else if (iVar4 < param_2) {
        *(undefined4 *)(param_1 + 0x14824) = 0;
        bVar12 = false;
      }
      else if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x14824) = 0;
      }
      else {
        *(float *)(param_1 + 0x14824) = (float)(iVar4 - param_2) / (float)iVar2;
      }
    }
    *(bool *)(param_1 + 0x14828) = bVar12;
    if (bVar12) {
      iVar2 = *(int *)(param_1 + 0x1482c);
      bVar12 = true;
      if (iVar2 != -1) {
        iVar4 = *(int *)(param_1 + 0x14830);
        if (iVar4 == -1) {
          *(undefined4 *)(param_1 + 0x14834) = 0x3f800000;
          *(int *)(param_1 + 0x14830) = iVar2 + param_2;
        }
        else if (iVar4 < param_2) {
          *(undefined4 *)(param_1 + 0x14834) = 0;
          bVar12 = false;
        }
        else if (iVar2 < 1) {
          *(undefined4 *)(param_1 + 0x14834) = 0;
        }
        else {
          *(float *)(param_1 + 0x14834) = (float)(iVar4 - param_2) / (float)iVar2;
        }
      }
      *(bool *)(param_1 + 0x14838) = bVar12;
      if (bVar12) goto LAB_00474e90;
    }
    puVar10 = (undefined4 *)(param_1 + 0x674);
    do {
      if (0xf9 < (int)local_10) break;
      if (*(char *)(puVar10 + -0x35) == '\0') {
        *puVar10 = 0x47435000;
        puVar10[-0x20] = 0x42480000;
        puVar10[-0x21] = 0x42480000;
        uVar6 = (uint)local_10 & 0x80000001;
        bVar12 = uVar6 == 0;
        puVar10[-0x3a] = 2;
        if ((int)uVar6 < 0) {
          bVar12 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar12) {
          puVar10[-10] = *(undefined4 *)(param_1 + 0x147fc);
          puVar10[-9] = *(undefined4 *)(param_1 + 0x14800);
          puVar10[-8] = *(undefined4 *)(param_1 + 0x14804);
        }
        else {
          puVar10[-10] = *(undefined4 *)(param_1 + 0x147f0);
          puVar10[-9] = *(undefined4 *)(param_1 + 0x147f4);
          puVar10[-8] = *(undefined4 *)(param_1 + 0x147f8);
        }
        FUN_0047e710();
        iVar2 = *(int *)(param_1 + 0x1481c);
        bVar12 = true;
        if (iVar2 != -1) {
          iVar4 = *(int *)(param_1 + 84000);
          if (iVar4 == -1) {
            *(undefined4 *)(param_1 + 0x14824) = 0x3f800000;
            *(int *)(param_1 + 84000) = iVar2 + param_2;
          }
          else if (iVar4 < param_2) {
            *(undefined4 *)(param_1 + 0x14824) = 0;
            bVar12 = false;
          }
          else if (iVar2 < 1) {
            *(undefined4 *)(param_1 + 0x14824) = 0;
          }
          else {
            *(float *)(param_1 + 0x14824) = (float)(iVar4 - param_2) / (float)iVar2;
          }
        }
        *(bool *)(param_1 + 0x14828) = bVar12;
        if (bVar12) {
          uVar5 = __ftol();
        }
        else {
          uVar5 = __ftol();
        }
        FUN_004041b0(uVar5);
        bVar3 = true;
      }
      puVar10 = puVar10 + 0x51;
      local_10 = (float *)((int)local_10 + 1);
    } while (!bVar3);
LAB_00474e90:
    uVar6 = 0;
    puVar10 = (undefined4 *)(param_1 + 0x64c);
    do {
      if (*(char *)(puVar10 + -0x2b) != '\0') {
        uVar7 = uVar6 & 0x80000001;
        bVar12 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          bVar12 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar12) {
          if ((int)uVar6 % 3 == 0) {
            puVar8 = (undefined4 *)(param_1 + 0x147fc);
            goto LAB_00474ed9;
          }
        }
        else if ((int)uVar6 % 3 == 0) {
          puVar8 = (undefined4 *)(param_1 + 0x147f0);
LAB_00474ed9:
          *puVar10 = *puVar8;
          puVar10[1] = puVar8[1];
          puVar10[2] = puVar8[2];
        }
        (**(code **)(puVar10[-0x46] + 4))(param_2,param_3);
      }
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 0x51;
      if (0xf9 < (int)uVar6) {
        return;
      }
    } while( true );
  }
  iVar4 = *(int *)(param_1 + 0x1481c);
  local_c = 0;
  bVar12 = true;
  if (iVar4 != -1) {
    iVar1 = *(int *)(param_1 + 84000);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x14824) = 0x3f800000;
      *(int *)(param_1 + 84000) = iVar4 + param_2;
    }
    else if (iVar1 < param_2) {
      *(undefined4 *)(param_1 + 0x14824) = 0;
      bVar12 = false;
    }
    else if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x14824) = 0;
    }
    else {
      *(float *)(param_1 + 0x14824) = (float)(iVar1 - param_2) / (float)iVar4;
    }
  }
  *(bool *)(param_1 + 0x14828) = bVar12;
  if (bVar12) {
    iVar4 = *(int *)(param_1 + 0x1482c);
    bVar12 = true;
    if (iVar4 != -1) {
      iVar1 = *(int *)(param_1 + 0x14830);
      if (iVar1 == -1) {
        *(undefined4 *)(param_1 + 0x14834) = 0x3f800000;
        *(int *)(param_1 + 0x14830) = iVar4 + param_2;
      }
      else if (iVar1 < param_2) {
        *(undefined4 *)(param_1 + 0x14834) = 0;
        bVar12 = false;
      }
      else if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x14834) = 0;
      }
      else {
        *(float *)(param_1 + 0x14834) = (float)(iVar1 - param_2) / (float)iVar4;
      }
    }
    *(bool *)(param_1 + 0x14838) = bVar12;
    if (bVar12) goto LAB_00474c34;
  }
  local_10 = (float *)(param_1 + 0x14920);
  param_2 = 0;
  pfVar11 = (float *)(param_1 + 0x674);
  do {
    if (*(int *)(param_1 + 0x14950) <= param_2) break;
    if (*(char *)(pfVar11 + -0x35) == '\0') {
      FUN_0047e710();
      pfVar11[-0x3a] = 1.4013e-45;
      pfVar11[-0x4f] = *local_10;
      pfVar11[-0x4e] = local_10[1];
      pfVar11[-0x4d] = local_10[2];
      pfVar11[-0x20] = 3.0;
      iVar4 = __ftol();
      bVar12 = true;
      *pfVar11 = (float)iVar4;
      pfVar11[-0x21] = DAT_006b868c;
      iVar4 = *(int *)(param_1 + 0x1481c);
      if (iVar4 != -1) {
        iVar1 = *(int *)(param_1 + 84000);
        if (iVar1 == -1) {
          *(undefined4 *)(param_1 + 0x14824) = 0x3f800000;
          *(int *)(param_1 + 84000) = iVar4 + iVar2;
        }
        else if (iVar1 < iVar2) {
          *(undefined4 *)(param_1 + 0x14824) = 0;
          bVar12 = false;
        }
        else if (iVar4 < 1) {
          *(undefined4 *)(param_1 + 0x14824) = 0;
        }
        else {
          *(float *)(param_1 + 0x14824) = (float)(iVar1 - iVar2) / (float)iVar4;
        }
      }
      *(bool *)(param_1 + 0x14828) = bVar12;
      if (bVar12) {
        uVar5 = *(undefined4 *)(param_1 + 0x14850);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x1484c);
      }
      FUN_004041b0(uVar5);
      param_2 = param_2 + 1;
      local_10 = local_10 + 3;
    }
    pfVar11 = pfVar11 + 0x51;
    local_c = local_c + 1;
  } while (local_c < 0xfa);
LAB_00474c34:
  piVar9 = (int *)(param_1 + 0x534);
  iVar4 = 0xfa;
  do {
    if ((char)piVar9[0x1b] != '\0') {
      (**(code **)(*piVar9 + 4))(iVar2,param_3);
    }
    piVar9 = piVar9 + 0x51;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

