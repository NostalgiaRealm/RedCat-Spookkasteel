/*
 * FUN_10013bb0 at 10013bb0
 * undefined FUN_10013bb0(void)
 * Address ranges: 10013bb0-10013e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013bb0(int *param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  int local_4c;
  int local_48;
  int local_38;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  float local_8;
  
  iVar2 = *param_1;
  local_48 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = local_48 + 1;
      FUN_10014560(local_20);
      local_4c = 0;
      if (0 < *param_2) {
        do {
          FUN_10014560(local_2c);
          FUN_100143f0(local_14);
          fVar5 = (float10)FUN_100144b0();
          if ((float10)0.1 <= fVar5) {
            fVar5 = (float10)FUN_100143d0();
            iVar3 = 0;
            local_8 = (float)fVar5;
            bVar4 = false;
            if (0 < *param_1) {
              do {
                if ((iVar3 != local_48) && (iVar3 != iVar1 % iVar2)) {
                  fVar5 = (float10)FUN_100143d0();
                  if (fVar5 - (float10)local_8 < (float10)-0.1) {
                    bVar4 = false;
                    break;
                  }
                  if ((float10)0.1 < fVar5 - (float10)local_8) {
                    bVar4 = true;
                    break;
                  }
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *param_1);
            }
            if (iVar3 != *param_1) {
              iVar3 = 0;
              if (bVar4) {
                FUN_10014600();
                local_8 = -local_8;
              }
              bVar4 = *param_2 == 0;
              local_38 = 0;
              if (0 < *param_2) {
                do {
                  if (iVar3 != local_4c) {
                    fVar5 = (float10)FUN_100143d0();
                    if (fVar5 - (float10)local_8 < (float10)-0.1) break;
                    if ((float10)0.1 < fVar5 - (float10)local_8) {
                      local_38 = local_38 + 1;
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *param_2);
                bVar4 = iVar3 == *param_2;
              }
              if ((bVar4) && (local_38 != 0)) {
                iVar3 = FUN_1000c570(param_3,local_14,param_4,&param_3);
                if (iVar3 == 0) {
                  (*DAT_1014e358)(s_ClipToPortals__Error_clipping_po_1003a5f0);
                  return 0;
                }
                if (param_3 == 0) {
                  *param_5 = 0;
                  return 1;
                }
              }
            }
          }
          local_4c = local_4c + 1;
        } while (local_4c < *param_2);
      }
      iVar2 = *param_1;
      local_48 = iVar1;
    } while (iVar1 < iVar2);
  }
  *param_5 = param_3;
  return 1;
}

