/*
 * FUN_00566fd0 at 00566fd0
 * undefined FUN_00566fd0(void)
 * Address ranges: 00566fd0-00567000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00566fd0(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = &param_2;
  uVar1 = FUN_005a1d60(puVar3);
  iVar2 = FUN_005674e0(uVar1,puVar3);
  if (param_2 != '\0') {
    return *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
  }
  return 0;
}

