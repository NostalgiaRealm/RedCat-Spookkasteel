/*
 * FUN_00595d30 at 00595d30
 * undefined FUN_00595d30(void)
 * Address ranges: 00595d30-00595d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00595d30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x330);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

