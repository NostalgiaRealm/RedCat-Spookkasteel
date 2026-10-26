/*
 * FUN_00486abc at 00486abc
 * undefined __register FUN_00486abc(int param_1, char param_2)
 * Address ranges: 00486abc-00486b3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486abc(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != '\0') {
    puVar2 = FUN_0040960c(0x10);
    *(undefined4 **)(param_1 + 0x1b8) = puVar2;
    puVar2 = FUN_0040960c((uint)*(ushort *)(param_1 + 0x1f0));
    *(undefined4 **)(*(int *)(param_1 + 0x1b8) + 8) = puVar2;
    puVar2 = FUN_0040960c((uint)*(ushort *)(param_1 + 0x1f0));
    iVar1 = *(int *)(param_1 + 0x1b8);
    *(undefined4 **)(iVar1 + 0xc) = puVar2;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(param_1 + 0x1e8);
    return;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_00402800(*(int *)(*(int *)(param_1 + 0x1b8) + 8));
    FUN_00402800(*(int *)(*(int *)(param_1 + 0x1b8) + 0xc));
    FUN_00466e8c((int *)(param_1 + 0x1b8));
  }
  return;
}

