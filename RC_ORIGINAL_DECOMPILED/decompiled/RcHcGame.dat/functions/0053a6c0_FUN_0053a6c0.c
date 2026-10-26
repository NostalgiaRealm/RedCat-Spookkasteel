/*
 * FUN_0053a6c0 at 0053a6c0
 * undefined FUN_0053a6c0(void)
 * Address ranges: 0053a6c0-0053a70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0053a6d2) */

void __fastcall FUN_0053a6c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar3 = puVar1; puVar3 != puVar2; puVar3 = puVar3 + 7) {
    (**(code **)*puVar3)(0);
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  return;
}

