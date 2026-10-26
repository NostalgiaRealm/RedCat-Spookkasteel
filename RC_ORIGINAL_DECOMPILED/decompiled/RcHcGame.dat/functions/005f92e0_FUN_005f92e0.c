/*
 * FUN_005f92e0 at 005f92e0
 * undefined FUN_005f92e0(void)
 * Address ranges: 005f92e0-005f9312
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f92e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_2 + 4);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    do {
      FUN_005f8f00(*puVar2);
      iVar1 = iVar1 + 0x10;
      puVar2 = puVar2 + 1;
    } while (iVar1 != *(int *)(param_1 + 0xc));
  }
  return;
}

