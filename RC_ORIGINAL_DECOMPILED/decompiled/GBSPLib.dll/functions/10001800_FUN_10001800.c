/*
 * FUN_10001800 at 10001800
 * undefined FUN_10001800(void)
 * Address ranges: 10001800-10001910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10001800(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_1014e358)(s_CopyBrush__NULL_brush____100362ac);
    return (undefined4 *)0x0;
  }
  iVar5 = param_1[10];
  if ((0 < iVar5) && (iVar5 < 0x100)) {
    puVar2 = (undefined4 *)FUN_10001750(iVar5);
    if (puVar2 == (undefined4 *)0x0) {
      (*DAT_1014e358)(s_CopyBrush__Out_of_memory_for_bru_10036284);
      return (undefined4 *)0x0;
    }
    puVar6 = param_1;
    puVar8 = puVar2;
    for (uVar4 = iVar5 * 0x14 + 0x2cU >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar5 = 0;
    if (0 < (int)param_1[10]) {
      piVar7 = param_1 + 0xb;
      do {
        piVar1 = (int *)*piVar7;
        if (piVar1 != (int *)0x0) {
          if ((*piVar1 < 0) || (0x100 < *piVar1)) {
            (*DAT_1014e358)(s_CopyBrush__Bad_number_of_verts_i_10036254,
                            *(undefined4 *)param_1[iVar5 * 5 + 0xb]);
            return (undefined4 *)0x0;
          }
          iVar3 = FUN_1000d730(piVar1);
          *(int *)((int)piVar7 + ((int)puVar2 - (int)param_1)) = iVar3;
          if (iVar3 == 0) {
            (*DAT_1014e358)(s_Error_copying_brush__10036214);
            return (undefined4 *)0x0;
          }
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 5;
      } while (iVar5 < (int)param_1[10]);
    }
    return puVar2;
  }
  (*DAT_1014e358)(s_CopyBrush__Bogus_number_of_sides_1003622c,iVar5);
  return (undefined4 *)0x0;
}

