/*
 * FUN_00605bda at 00605bda
 * undefined FUN_00605bda(void)
 * Address ranges: 00605bda-00605c40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00605bda(void)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 8);
  if (uVar1 != 0) {
    uVar5 = unaff_EDI;
    if (uVar1 <= unaff_EDI) {
      uVar5 = uVar1;
    }
    puVar3 = *(undefined2 **)(unaff_EBP + 8);
    puVar4 = *(undefined2 **)(unaff_ESI + 4);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  uVar1 = *(uint *)(unaff_ESI + 8);
  FUN_00605987(1);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_ESI + 4) = iVar2 + 2;
  *(undefined1 *)(iVar2 + 1) = 0;
  *(uint *)(unaff_ESI + 0xc) = unaff_EDI;
  if (uVar1 <= unaff_EDI) {
    unaff_EDI = uVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)(unaff_ESI + 8) = unaff_EDI;
  *(undefined2 *)(*(int *)(unaff_ESI + 4) + unaff_EDI * 2) = 0;
  return;
}

