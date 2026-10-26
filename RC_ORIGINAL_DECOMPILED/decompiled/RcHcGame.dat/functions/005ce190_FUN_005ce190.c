/*
 * FUN_005ce190 at 005ce190
 * undefined FUN_005ce190(void)
 * Address ranges: 005ce190-005ce3a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ce190(int param_1,int param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [4];
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    *param_3 = *(float *)(param_1 + 0x34);
    param_3[1] = *(float *)(param_1 + 0x38);
    param_3[2] = *(float *)(param_1 + 0x3c);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0x18) + 0x114);
    local_28 = *param_4;
    local_24 = param_4[1];
    local_34 = *param_4;
    local_20 = param_4[2];
    local_2c = param_4[2];
    local_30 = (float)param_4[1] - 30000.0;
    iVar2 = FUN_005ca6b0(param_2,&local_28,&local_28,local_1c,&param_4,local_38,0);
    iVar3 = FUN_005ca6b0(param_2,&local_28,&local_34,local_1c,&param_4,local_38,0);
    if ((iVar2 != 0) || (iVar3 == 0)) {
      *param_3 = *(float *)(param_1 + 0x34);
      param_3[1] = *(float *)(param_1 + 0x38);
      param_3[2] = *(float *)(param_1 + 0x3c);
      return;
    }
    iVar3 = *(int *)(iVar1 + 0xc + (int)param_4 * 0x2c);
    iVar4 = *(int *)(*(int *)(param_2 + 0x18) + 0x1c0);
    iVar2 = iVar4 + iVar3 * 0x88;
    if (*(int *)(iVar4 + 0x14 + iVar3 * 0x88) < 0) {
      param_3[2] = 0.0;
      param_3[1] = 0.0;
      *param_3 = 0.0;
      return;
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + (int)param_4 * 0x2c + 8)) {
      do {
        iVar4 = FUN_005d4880(iVar2,local_1c,0x41a00000);
        if (iVar4 != 0) {
          FUN_005d2020(iVar2,0);
          iVar4 = FUN_005d3b40(iVar2,local_1c,&local_10);
          if (iVar4 != 0) {
            *param_3 = local_10 * 0.003921569;
            param_3[1] = local_c * 0.003921569;
            param_3[2] = local_8 * 0.003921569;
            if (0.3 < local_10 * 0.003921569) {
              *param_3 = 0.3;
            }
            if (0.3 < local_c * 0.003921569) {
              param_3[1] = 0.3;
            }
            if (local_8 * 0.003921569 <= 0.3) {
              return;
            }
            param_3[2] = 0.3;
            return;
          }
        }
        iVar2 = iVar2 + 0x88;
        iVar3 = iVar3 + 1;
        if (*(int *)(iVar1 + 8 + (int)param_4 * 0x2c) <= iVar3) {
          return;
        }
      } while( true );
    }
  }
  return;
}

