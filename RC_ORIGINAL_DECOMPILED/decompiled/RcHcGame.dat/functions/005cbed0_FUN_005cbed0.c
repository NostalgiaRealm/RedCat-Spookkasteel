/*
 * FUN_005cbed0 at 005cbed0
 * undefined FUN_005cbed0(void)
 * Address ranges: 005cbed0-005cc089
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005cbed0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            float *param_5,float *param_6,undefined4 param_7,undefined4 *param_8,float *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  float local_30 [6];
  float local_18 [6];
  
  uVar2 = param_4;
  uVar1 = param_3;
  local_54 = 0xbf800000;
  local_50 = 0xbf800000;
  local_4c = 0xbf800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  puVar5 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = &local_54;
  }
  puVar4 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar4 = &local_48;
  }
  pfVar6 = param_5;
  pfVar7 = local_30 + 6;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_005b2fe0(local_3c);
  fVar8 = (float10)FUN_005b2f20();
  param_2 = (undefined4 *)(float)fVar8;
  FUN_005cb6a0(puVar5,puVar4,uVar1,uVar2,local_30 + 3,local_30);
  iVar3 = 0;
  do {
    if ((local_30[iVar3] < local_30[iVar3 + 6]) || (local_30[iVar3 + 9] < local_30[iVar3 + 3]))
    break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (iVar3 == 3) {
    FUN_005b2fe0(local_30 + 6);
    FUN_005b2fe0(local_30 + 9);
    iVar3 = FUN_005d0300(uVar2,&param_1,&local_60);
    if (iVar3 != 0) {
      if (0.0 <= (float)param_1) {
        if (1.0 <= (float)param_1) {
          param_1 = (undefined4 *)0x3f800000;
        }
      }
      else {
        param_1 = (undefined4 *)0x0;
      }
      param_1 = (undefined4 *)((float)param_1 * (float)param_2);
      if ((float)param_1 < *param_6) {
        *param_6 = (float)param_1;
        *param_8 = local_60;
        param_8[1] = local_5c;
        param_8[2] = local_58;
        FUN_005b3020(param_1,param_7);
        fVar8 = (float10)FUN_005b2e40();
        *param_9 = (float)fVar8;
        return 1;
      }
    }
  }
  return 0;
}

