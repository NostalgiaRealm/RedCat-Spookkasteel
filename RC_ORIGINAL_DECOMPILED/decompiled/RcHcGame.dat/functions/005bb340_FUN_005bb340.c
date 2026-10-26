/*
 * FUN_005bb340 at 005bb340
 * undefined FUN_005bb340(void)
 * Address ranges: 005bb340-005bb53f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bb340(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *local_cc8;
  int local_cc4;
  undefined4 local_cb8;
  int local_cb0;
  undefined4 local_cac;
  undefined1 local_ca8 [360];
  undefined1 local_b40 [360];
  undefined1 local_9d8 [720];
  undefined1 local_708 [24];
  undefined4 local_6f0 [2];
  undefined4 local_6e8;
  undefined1 local_2d0 [720];
  
  if (*(int *)(param_2 + 0x10c) != 0) {
    local_cb8 = 2;
    if (*(float *)(param_1 + 0x370) <= 1.0) {
      local_cb8 = 0x12;
    }
    local_cc4 = 0;
    if (0 < *(int *)(param_2 + 0x10c)) {
      piVar10 = (int *)(param_2 + 0x980);
      puVar8 = (undefined1 *)(param_2 + 0x3e0);
      puVar12 = (undefined1 *)(param_2 + 0x110);
      do {
        iVar6 = *(int *)(param_1 + 0x374 + piVar10[6] * 4);
        if (-1 < iVar6) {
          local_cac = FUN_005d40f0(*(undefined4 *)(DAT_006cc40c + 0x1c8),iVar6);
          iVar9 = 0;
          puVar2 = local_ca8;
          puVar5 = local_9d8;
          puVar7 = puVar8;
          iVar6 = *piVar10;
          puVar11 = puVar12;
          if (0 < *param_4) {
            local_cc8 = param_4 + 1;
            do {
              iVar1 = FUN_005d0d60(local_cc8,puVar11,puVar2,puVar7,puVar5,iVar6,&local_cb0);
              if (iVar1 == 0) break;
              if (puVar11 == local_ca8) {
                puVar11 = local_b40;
                puVar2 = local_ca8;
                puVar7 = local_2d0;
                puVar5 = local_9d8;
              }
              else {
                puVar11 = local_ca8;
                puVar2 = local_b40;
                puVar7 = local_9d8;
                puVar5 = local_2d0;
              }
              local_cc8 = local_cc8 + 5;
              iVar9 = iVar9 + 1;
              iVar6 = local_cb0;
            } while (iVar9 < *param_4);
          }
          if ((iVar9 == *param_4) && (2 < iVar6)) {
            FUN_005d16c0(puVar11,puVar7,local_708,iVar6,param_3);
            if (0 < iVar6) {
              puVar3 = local_6f0;
              do {
                puVar3[-1] = 0x437f0000;
                *puVar3 = 0x437f0000;
                puVar3[1] = 0x437f0000;
                puVar3 = puVar3 + 9;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            local_6e8 = 0x437f0000;
            uVar4 = FUN_00453600();
            (**(code **)(DAT_006cc410 + 0x80))(uVar4,local_cb8);
          }
        }
        local_cc4 = local_cc4 + 1;
        piVar10 = piVar10 + 1;
        puVar12 = puVar12 + 0x78;
        puVar8 = puVar8 + 0xf0;
      } while (local_cc4 < *(int *)(param_2 + 0x10c));
    }
  }
  return;
}

