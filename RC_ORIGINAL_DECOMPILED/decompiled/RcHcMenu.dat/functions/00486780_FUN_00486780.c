/*
 * FUN_00486780 at 00486780
 * undefined4 __register FUN_00486780(int param_1)
 * Address ranges: 00486780-004867c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00486780(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  iVar2 = FUN_0041300c(*(int *)(param_1 + 0x74));
  if (iVar2 < 1) {
    iVar2 = FUN_00471d88(param_1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        piVar3 = (int *)FUN_00468730(*(int *)(param_1 + 0x24),iVar5);
        cVar1 = (**(code **)(*piVar3 + 0x78))();
        if (cVar1 != '\0') {
          return uVar4;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

