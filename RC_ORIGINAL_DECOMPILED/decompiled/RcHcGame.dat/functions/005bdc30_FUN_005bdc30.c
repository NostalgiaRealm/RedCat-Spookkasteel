/*
 * FUN_005bdc30 at 005bdc30
 * undefined FUN_005bdc30(void)
 * Address ranges: 005bdc30-005bdddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bdc30(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int local_68;
  int local_60;
  int local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_3c [3];
  undefined1 local_30 [48];
  
  iVar7 = 0;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == 1)) {
    local_60 = 0;
    if ((*(int *)(param_1 + 0x10) != 0) && (local_5c = 0, 0 < *(int *)(param_1 + 0x10))) {
      local_68 = 0;
      do {
        pfVar6 = (float *)(local_68 + *(int *)(param_1 + 0x18));
        fVar4 = (param_3 - *(float *)(local_68 + 4 + *(int *)(param_1 + 0x18))) * *pfVar6;
        iVar5 = FUN_005bdc30(fVar4);
        if (iVar5 == 0) {
          if (pfVar6[0xf] != 0.0) {
            pfVar6 = pfVar6 + 3;
            pfVar8 = param_2;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar8 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar8 = pfVar8 + 1;
            }
            goto LAB_005bdcc6;
          }
        }
        else {
          local_60 = iVar7;
          if (pfVar6[0xf] != 0.0) {
            FUN_005b32c0(param_2);
          }
LAB_005bdcc6:
          if (local_60 == 0) {
            FUN_005b55e0();
            local_54 = param_2[9];
            local_50 = param_2[10];
            local_4c = param_2[0xb];
          }
          else {
            FUN_005b55e0();
            fVar1 = param_2[9];
            fVar2 = param_2[10];
            fVar3 = param_2[0xb];
            FUN_005c5890(fVar4,local_3c);
            FUN_005b59f0(local_3c[0],local_30);
            local_54 = (fVar1 - local_54) * local_3c[0] + local_54;
            local_50 = (fVar2 - local_50) * local_3c[0] + local_50;
            local_4c = (fVar3 - local_4c) * local_3c[0] + local_4c;
          }
          iVar7 = local_60 + 1;
          local_60 = iVar7;
        }
        local_5c = local_5c + 1;
        local_68 = local_68 + 0x44;
      } while (local_5c < *(int *)(param_1 + 0x10));
      if (0 < iVar7) {
        FUN_005b5920();
        param_2[9] = local_54;
        param_2[10] = local_50;
        param_2[0xb] = local_4c;
        return 1;
      }
    }
  }
  return 0;
}

