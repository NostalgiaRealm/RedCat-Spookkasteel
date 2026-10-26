/*
 * FUN_005cfdf0 at 005cfdf0
 * undefined FUN_005cfdf0(void)
 * Address ranges: 005cfdf0-005cff2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cfdf0(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 local_30 [9];
  int local_c;
  int local_8;
  int local_4;
  
  param_1[0x47] = -2;
  if (param_1[9] == 0) {
    iVar1 = FUN_005bdc30(param_3);
    if (iVar1 == 0) {
      if (param_4 == (undefined4 *)0x0) goto LAB_005cfe86;
      puVar5 = local_30;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *param_4;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    else if (param_4 != (undefined4 *)0x0) {
      FUN_005b32c0(local_30);
    }
    FUN_005b55e0();
    param_1[0x2a] = 1;
    param_1[0x23] = local_c;
    param_1[0x24] = local_8;
    param_1[0x25] = local_4;
  }
LAB_005cfe86:
  if (param_2 != 0) {
    iVar1 = FUN_005cfdc0();
    param_1[2] = 1;
    iVar3 = 0;
    if (0 < *param_1) {
      pfVar4 = (float *)(param_1[0x46] + 100);
      do {
        pfVar7 = pfVar4 + 3;
        if (iVar1 == 1) {
          FUN_005bd780(param_3,pfVar7,pfVar4);
LAB_005cfef9:
          pfVar4[7] = 1.4013e-45;
          *pfVar4 = (float)param_1[4] * *pfVar4;
          pfVar4[1] = (float)param_1[5] * pfVar4[1];
          pfVar4[2] = (float)param_1[6] * pfVar4[2];
        }
        else {
          uVar6 = param_3;
          pfVar8 = pfVar4;
          FUN_005d1b10(param_3,pfVar7,pfVar4);
          iVar2 = FUN_005bd8d0(uVar6,pfVar7,pfVar8);
          if (iVar2 != 0) goto LAB_005cfef9;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 0x23;
      } while (iVar3 < *param_1);
    }
  }
  return;
}

