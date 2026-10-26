/*
 * FUN_10003050 at 10003050
 * undefined FUN_10003050(void)
 * Address ranges: 10003050-100031b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003050(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  undefined4 *local_1c;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)0x0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    iVar7 = param_1[0xb];
    local_1c = puVar1;
    if ((iVar7 != 0) && (iVar6 = 0, 0 < iVar7)) {
      piVar2 = param_1 + 0xc;
      iVar4 = iVar7;
      do {
        if (*piVar2 != 0) {
          iVar6 = iVar6 + 1;
        }
        piVar2 = piVar2 + 5;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (iVar6 != 0) {
        local_1c = (undefined4 *)FUN_10001750();
        piVar2 = local_1c + 0xb;
        local_1c[9] = param_1;
        local_1c[10] = iVar7;
        piVar8 = param_1 + 0xc;
        piVar9 = piVar2;
        for (uVar5 = iVar7 * 5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(char *)piVar9 = (char)*piVar8;
          piVar8 = (int *)((int)piVar8 + 1);
          piVar9 = (int *)((int)piVar9 + 1);
        }
        pbVar10 = (byte *)(param_1 + 0x10);
        do {
          if ((*pbVar10 & 1) != 0) {
            *(byte *)(piVar2 + 4) = *(byte *)(piVar2 + 4) | 4;
          }
          if (*piVar2 != 0) {
            FUN_1000d6a0(*piVar2,piVar2);
          }
          pbVar10 = pbVar10 + 0x14;
          piVar2 = piVar2 + 5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_1c[1] = param_1[4];
        local_1c[2] = param_1[5];
        local_1c[3] = param_1[6];
        local_1c[4] = param_1[7];
        local_1c[5] = param_1[8];
        local_1c[6] = param_1[9];
        FUN_10001920();
        iVar7 = FUN_10001da0(local_1c);
        if (iVar7 == 0) {
          pfVar3 = (float *)FUN_10002f90(local_c,local_1c);
          (*DAT_1014e358)(s_MakeBSPBrushes__Bad_brush_at__4__10036634,(double)*pfVar3,
                          (double)pfVar3[1],(double)pfVar3[2]);
          local_1c = puVar1;
        }
        else {
          *local_1c = puVar1;
        }
      }
    }
    puVar1 = local_1c;
  }
  return puVar1;
}

