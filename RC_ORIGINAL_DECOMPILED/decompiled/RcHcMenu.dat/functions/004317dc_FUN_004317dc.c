/*
 * FUN_004317dc at 004317dc
 * undefined4 __register FUN_004317dc(int param_1)
 * Address ranges: 004317dc-0043180f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004317dc(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = FUN_0043dad4(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    puVar3 = FUN_00404140(*(uint **)(*(int *)(param_1 + 0x18) + 0x70),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}

