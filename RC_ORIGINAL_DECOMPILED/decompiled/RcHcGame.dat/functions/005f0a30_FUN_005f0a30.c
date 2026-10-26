/*
 * FUN_005f0a30 at 005f0a30
 * undefined FUN_005f0a30(void)
 * Address ranges: 005f0a30-005f0a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f0a30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  }
  FUN_005e6ef0(param_2,iVar1);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x34))(param_2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0xc));
  }
  return;
}

