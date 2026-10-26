/*
 * FUN_1000d500 at 1000d500
 * undefined FUN_1000d500(void)
 * Address ranges: 1000d500-1000d60a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d500(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int iVar11;
  undefined4 *puStack00000004;
  int *in_stack_00002f14;
  
  FUN_10027d90();
  iVar6 = 0;
  iVar1 = *in_stack_00002f14;
  puVar9 = (undefined4 *)in_stack_00002f14[1];
  bVar5 = false;
  iVar11 = 0;
  if (0 < iVar1) {
    puStack00000004 = (undefined4 *)&stack0x00000030;
    puVar8 = puVar9;
    do {
      iVar6 = iVar6 + 1;
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      FUN_10014560(&stack0x00000024);
      fVar10 = (float10)FUN_10014550();
      if (fVar10 <= (float10)0.001) {
        bVar5 = true;
      }
      else {
        *puStack00000004 = uVar2;
        puStack00000004[1] = uVar3;
        puStack00000004[2] = uVar4;
        iVar11 = iVar11 + 1;
        puStack00000004 = puStack00000004 + 3;
      }
      puVar8 = puVar8 + 3;
    } while (iVar6 < iVar1);
    if (bVar5) {
      *in_stack_00002f14 = iVar11;
      if (0 < iVar11) {
        puVar8 = (undefined4 *)&stack0x00000030;
        for (uVar7 = iVar11 * 3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
  return;
}

