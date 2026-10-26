/*
 * FUN_10002c50 at 10002c50
 * undefined FUN_10002c50(void)
 * Address ranges: 10002c50-10002d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002c50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  int local_1c;
  float local_18;
  int local_14;
  
  uVar4 = *(uint *)(param_1[1] + 8);
  if (((uVar4 & 0x400) == 0) || ((*(uint *)(param_1[2] + 8) & 0x400) == 0)) {
    uVar4 = *(uint *)(param_1[2] + 8) ^ uVar4;
  }
  else {
    uVar4 = *(uint *)(param_1[2] + 8) | uVar4;
  }
  uVar4 = FUN_1000ef90(uVar4);
  if (uVar4 != 0) {
    local_1c = 0;
    iVar1 = *(int *)param_1[6];
    local_18 = 0.0;
    local_14 = 0;
    piVar6 = param_1;
    do {
      piVar6 = piVar6 + 1;
      for (puVar2 = *(undefined4 **)(*piVar6 + 100); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        iVar3 = puVar2[9];
        if ((*(uint *)(iVar3 + 0xc) & uVar4) != 0) {
          iVar5 = 0;
          iVar7 = iVar3 + 0x30;
          if (0 < *(int *)(iVar3 + 0x2c)) {
            do {
              if ((*(byte *)(iVar7 + 0x10) & 0x10) == 0) {
                if (*(int *)(iVar7 + 4) == iVar1) goto LAB_10002d67;
                fVar8 = (float10)FUN_100143d0();
                if ((float10)local_18 < fVar8) {
                  local_18 = (float)fVar8;
                  local_1c = iVar7;
                }
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x14;
            } while (iVar5 < *(int *)(iVar3 + 0x2c));
          }
        }
      }
      local_14 = local_14 + 1;
      iVar7 = local_1c;
    } while (local_14 < 2);
LAB_10002d67:
    local_1c = iVar7;
    if (local_1c == 0) {
      (*DAT_1014e35c)(s_WARNING__Could_not_map_portal_to_100365e0);
    }
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[9] = local_1c;
  }
  return;
}

