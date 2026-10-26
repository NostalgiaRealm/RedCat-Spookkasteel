/*
 * FUN_005cff30 at 005cff30
 * undefined FUN_005cff30(void)
 * Address ranges: 005cff30-005d0148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_005cff30(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,float param_5,
            int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined4 local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  param_1[0x47] = -2;
  if (param_6 == 1) {
    fVar1 = param_5 * param_5 * param_5;
    param_5 = (param_5 * param_5 * 3.0 - fVar1) - fVar1;
  }
  if (param_1[9] == 0) {
    iVar2 = FUN_005bdc30(param_3);
    if (iVar2 == 0) {
      if (param_4 == (undefined4 *)0x0) goto LAB_005d005b;
      puVar6 = local_30;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else if (param_4 != (undefined4 *)0x0) {
      FUN_005b32c0(local_30);
    }
    FUN_005b55e0();
    local_48 = local_8;
    local_4c = local_c;
    local_44 = local_4;
    FUN_005b59f0(param_5,param_1 + 0x26);
    param_1[0x23] = (int)((local_4c - (float)param_1[0x23]) * param_5 + (float)param_1[0x23]);
    param_1[0x24] = (int)((local_48 - (float)param_1[0x24]) * param_5 + (float)param_1[0x24]);
    param_1[0x25] = (int)((local_44 - (float)param_1[0x25]) * param_5 + (float)param_1[0x25]);
    param_1[0x2a] = 1;
  }
LAB_005d005b:
  if (param_2 != 0) {
    iVar2 = FUN_005cfdc0();
    param_1[2] = 1;
    iVar4 = 0;
    if (0 < *param_1) {
      pfVar5 = (float *)(param_1[0x46] + 0x6c);
      do {
        pfVar9 = &local_4c;
        puVar8 = local_40;
        if (iVar2 == 1) {
          FUN_005bd780(param_3,puVar8,pfVar9);
LAB_005d00c4:
          pfVar5[5] = 1.4013e-45;
          local_4c = local_4c * (float)param_1[4];
          local_48 = local_48 * (float)param_1[5];
          local_44 = local_44 * (float)param_1[6];
          FUN_005b59f0(param_5,pfVar5 + 1);
          pfVar5[-2] = (local_4c - pfVar5[-2]) * param_5 + pfVar5[-2];
          pfVar5[-1] = (local_48 - pfVar5[-1]) * param_5 + pfVar5[-1];
          *pfVar5 = (local_44 - *pfVar5) * param_5 + *pfVar5;
        }
        else {
          uVar7 = param_3;
          FUN_005d1b10(param_3,puVar8,pfVar9);
          iVar3 = FUN_005bd8d0(uVar7,puVar8,pfVar9);
          if (iVar3 != 0) goto LAB_005d00c4;
        }
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 0x23;
      } while (iVar4 < *param_1);
    }
  }
  return;
}

