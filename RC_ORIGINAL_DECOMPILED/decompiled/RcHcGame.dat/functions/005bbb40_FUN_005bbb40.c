/*
 * FUN_005bbb40 at 005bbb40
 * undefined FUN_005bbb40(void)
 * Address ranges: 005bbb40-005bbb8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbb40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 8;
  *(undefined4 *)(param_1 + 0x35028) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x34fe8);
  do {
    if (0 < (int)puVar1[1]) {
      *(undefined4 *)(param_1 + 0x3502c + *(int *)(param_1 + 0x35028) * 4) = *puVar1;
      *(int *)(param_1 + 0x35028) = *(int *)(param_1 + 0x35028) + 1;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}

