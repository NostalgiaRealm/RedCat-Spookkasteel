/*
 * FUN_00405740 at 00405740
 * undefined FUN_00405740(void)
 * Address ranges: 00405740-00405755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00405740(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402cf0();
  if (iVar1 != 5) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}

