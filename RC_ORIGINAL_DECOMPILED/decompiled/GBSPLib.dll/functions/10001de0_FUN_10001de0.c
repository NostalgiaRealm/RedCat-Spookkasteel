/*
 * FUN_10001de0 at 10001de0
 * undefined FUN_10001de0(void)
 * Address ranges: 10001de0-10002278
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001de0(int param_1,int param_2,int param_3,byte param_4,int param_5,float *param_6,
                 int *param_7)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  int *local_30;
  int local_2c;
  float local_28;
  undefined1 auStack_24 [4];
  float local_20;
  int iStack_1c;
  int *local_18;
  undefined4 local_14 [4];
  undefined4 local_4;
  
  puVar8 = &DAT_1003fdf8 + param_2 * 5;
  puVar10 = local_14;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  local_4 = 6;
  if (param_3 != 0) {
    FUN_10002b30(local_14);
  }
  local_20 = 0.0;
  *param_7 = 0;
  *param_6 = 0.0;
  local_28 = 0.0;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_18 = (int *)(param_1 + 0x2c);
    do {
      local_30 = (int *)*local_18;
      if ((local_30 != (int *)0x0) && (iVar4 = 0, 0 < *local_30)) {
        do {
          fVar12 = (float10)FUN_10002c00();
          if (param_3 != 0) {
            fVar12 = -fVar12;
          }
          if (fVar12 <= (float10)local_28) {
            if (fVar12 < (float10)local_20) {
              local_20 = (float)fVar12;
            }
          }
          else {
            local_28 = (float)fVar12;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *local_30);
      }
      local_2c = local_2c + 1;
      local_18 = local_18 + 5;
    } while (local_2c < *(int *)(param_1 + 0x28));
    if (0.1 <= local_28) {
      if (-0.1 < local_20) {
        fVar2 = (float)FUN_10001800(param_1);
        *param_6 = fVar2;
        return;
      }
      local_30 = (int *)FUN_1000c3f0(local_14);
      if (local_30 == (int *)0x0) {
        (*DAT_1014e358)(s_Could_not_create_poly__10036394);
      }
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        piVar7 = (int *)(param_1 + 0x30);
        do {
          if (local_30 == (int *)0x0) goto LAB_10002233;
          FUN_1000c890(local_30,0,&DAT_1003fdf8 + *piVar7 * 5,(char)piVar7[1] == '\0',&local_30);
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 5;
        } while (iVar4 < *(int *)(param_1 + 0x28));
      }
      if ((local_30 != (int *)0x0) && (iVar4 = FUN_1000d860(local_30), iVar4 == 0)) {
        pfVar6 = &local_20;
        local_18 = local_30;
        iVar4 = 2;
        do {
          fVar2 = (float)FUN_10001750(*(int *)(param_1 + 0x28) + 1);
          *pfVar6 = fVar2;
          if (fVar2 == 0.0) {
            (*DAT_1014e358)(s_SplitBrush__Out_of_memory_for_br_1003636c);
          }
          pfVar6 = pfVar6 + 1;
          iVar4 = iVar4 + -1;
          *(undefined4 *)((int)fVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        } while (iVar4 != 0);
        piVar7 = (int *)(param_1 + 0x2c);
        local_2c = 0;
        if (0 < *(int *)(param_1 + 0x28)) {
          do {
            if (*piVar7 != 0) {
              iVar4 = FUN_1000d6a0(*piVar7,&local_30);
              if (iVar4 == 0) {
                (*DAT_1014e358)(s_Error_Copying_poly____10036354);
              }
              iVar4 = FUN_1000d070(local_30,0,local_14,&local_28,auStack_24,0);
              if (iVar4 == 0) {
                (*DAT_1014e358)(s_Error_Splitting_poly____10036338);
              }
              iVar4 = 0;
              do {
                if (*(int *)(auStack_24 + iVar4 + -4) != 0) {
                  iVar5 = *(int *)((int)&local_20 + iVar4);
                  iVar3 = *(int *)(iVar5 + 0x28);
                  *(int *)(iVar5 + 0x28) = iVar3 + 1;
                  piVar1 = (int *)(iVar5 + 0x2c + iVar3 * 0x14);
                  piVar9 = piVar7;
                  piVar11 = piVar1;
                  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *piVar11 = *piVar9;
                    piVar9 = piVar9 + 1;
                    piVar11 = piVar11 + 1;
                  }
                  *piVar1 = *(int *)(auStack_24 + iVar4 + -4);
                  *(byte *)(piVar1 + 4) = *(byte *)(piVar1 + 4) & 0xf7;
                }
                iVar4 = iVar4 + 4;
              } while (iVar4 < 8);
            }
            local_2c = local_2c + 1;
            piVar7 = piVar7 + 5;
          } while (local_2c < *(int *)(param_1 + 0x28));
        }
        pfVar6 = &local_20;
        iVar4 = 2;
        do {
          fVar2 = *pfVar6;
          FUN_10001920(fVar2);
          iVar5 = FUN_10001da0(fVar2);
          if (iVar5 == 0) {
            FUN_10001790(fVar2);
            *pfVar6 = 0.0;
          }
          iVar5 = iStack_1c;
          fVar2 = local_20;
          pfVar6 = pfVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (local_20 == 0.0) {
          if (iStack_1c == 0) {
            (*DAT_1014e35c)(s_Split_removed_brush_100362e4);
            return;
          }
        }
        else if (iStack_1c != 0) {
          iVar4 = 0;
          do {
            fVar2 = (&local_20)[iVar4];
            iVar3 = *(int *)((int)fVar2 + 0x28);
            *(int *)((int)fVar2 + 0x28) = iVar3 + 1;
            puVar8 = (undefined4 *)((int)fVar2 + 0x2c + iVar3 * 0x14);
            puVar8[1] = param_2;
            *(char *)(puVar8 + 2) = (char)param_3;
            if (param_5 != 0) {
              *(byte *)(puVar8 + 4) = *(byte *)(puVar8 + 4) | 4;
            }
            *(byte *)(puVar8 + 4) = *(byte *)(puVar8 + 4) & 0xf7 | param_4;
            if (iVar4 == 0) {
              *(bool *)(puVar8 + 2) = (char)param_3 == '\0';
              iVar3 = FUN_1000d7b0(local_18,puVar8);
              if (iVar3 == 0) {
                (*DAT_1014e358)(s_Error_copying_poly__10036320);
              }
            }
            else {
              *puVar8 = local_18;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 2);
          pfVar6 = &local_20;
          iVar4 = 2;
          do {
            fVar2 = *pfVar6;
            fVar12 = (float10)FUN_10001a30(fVar2);
            if (fVar12 < (float10)1.0) {
              FUN_10001790(fVar2);
              *pfVar6 = 0.0;
              iVar5 = iStack_1c;
            }
            fVar2 = local_20;
            pfVar6 = pfVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          if ((local_20 == 0.0) && (iVar5 == 0)) {
            (*DAT_1014e358)(s_SplitBrush__Brush_was_not_split__100362fc);
          }
          *param_6 = fVar2;
          *param_7 = iVar5;
          return;
        }
        (*DAT_1014e35c)(s_Split_not_on_both_sides_100362c8);
        if (fVar2 != 0.0) {
          FUN_10001790(fVar2);
          fVar2 = (float)FUN_10001800(param_1);
          *param_6 = fVar2;
        }
        if (iStack_1c == 0) {
          return;
        }
        FUN_10001790(iStack_1c);
        iVar4 = FUN_10001800(param_1);
        *param_7 = iVar4;
        return;
      }
LAB_10002233:
      iVar4 = FUN_10001cd0(param_1,local_14);
      if (iVar4 == 1) {
        fVar2 = (float)FUN_10001800(param_1);
        *param_6 = fVar2;
        return;
      }
      if (iVar4 != 2) {
        return;
      }
    }
  }
  iVar4 = FUN_10001800(param_1);
  *param_7 = iVar4;
  return;
}

