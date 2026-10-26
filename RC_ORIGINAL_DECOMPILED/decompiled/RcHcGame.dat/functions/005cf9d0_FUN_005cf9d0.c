/*
 * FUN_005cf9d0 at 005cf9d0
 * undefined FUN_005cf9d0(void)
 * Address ranges: 005cf9d0-005cfc01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cf9d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_90 [21];
  int local_3c;
  int local_38;
  int local_34;
  
  if (param_1[9] == 0) {
    if (param_1[0x2a] != 0) {
      FUN_005b5c90(param_1 + 0xc);
      FUN_005b5920();
      FUN_005b3470(param_1[0xb] + 0x24);
    }
  }
  else {
    FUN_005cf9d0();
    iVar1 = FUN_005cfcb0();
    if (iVar1 != 0) {
      param_1[2] = 1;
      param_1[0x2a] = 1;
      piVar3 = *(int **)(param_1[9] + 0x2c);
      piVar4 = param_1 + 0x2d;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    if (param_1[7] == 0) {
      FUN_005cf910(param_1[9],param_1[10]);
      FUN_005cfc10();
    }
    else {
      FUN_005b30c0();
      FUN_005b5fd0();
    }
  }
  if (param_1[2] != 0) {
    if (param_1[0x47] < -1) {
      puVar2 = (undefined4 *)param_1[0x46];
      iVar1 = 0;
      if (0 < *param_1) {
        do {
          iVar6 = FUN_005cf910(param_1,*puVar2);
          if (puVar2[0x20] == 1) {
LAB_005cfae1:
            FUN_005cfc10();
          }
          else if (*(int *)(iVar6 + 0x80) != 0) {
            puVar2[0x20] = 1;
            goto LAB_005cfae1;
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 0x23;
        } while (iVar1 < *param_1);
      }
      iVar1 = 0;
      param_1[0x2a] = 0;
      if (0 < *param_1) {
        puVar2 = (undefined4 *)(param_1[0x46] + 0x80);
        do {
          *puVar2 = 0;
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 0x23;
        } while (iVar1 < *param_1);
      }
    }
    else {
      FUN_005cfd80();
    }
    if (param_1[7] != 0) {
      FUN_005b3690();
      FUN_005b5920();
      local_3c = param_1[0x20];
      local_38 = param_1[0x21];
      local_34 = param_1[0x22];
      FUN_005b32c0(local_90);
      puVar2 = local_90;
      puVar5 = (undefined4 *)param_1[0xb];
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_005b32c0(local_90);
      iVar1 = 0;
      if (0 < *param_1) {
        iVar6 = 0;
        do {
          FUN_005b32c0(*(undefined4 *)(param_1[0x46] + 4 + iVar6));
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x8c;
        } while (iVar1 < *param_1);
      }
    }
    param_1[2] = 0;
  }
  return;
}

