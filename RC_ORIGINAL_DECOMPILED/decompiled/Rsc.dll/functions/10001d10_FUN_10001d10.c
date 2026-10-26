/*
 * FUN_10001d10 at 10001d10
 * undefined __cdecl FUN_10001d10(int param_1)
 * Address ranges: 10001d10-10001d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001d10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}

