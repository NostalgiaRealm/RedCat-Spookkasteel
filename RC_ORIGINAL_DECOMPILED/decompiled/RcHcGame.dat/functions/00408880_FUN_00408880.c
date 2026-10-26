/*
 * FUN_00408880 at 00408880
 * undefined FUN_00408880(void)
 * Address ranges: 00408880-004088de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00408880(int param_1)

{
  char cVar1;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0xbc))(3);
  cVar1 = FUN_004150f0();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(0,0,0x7f7fffff);
    FUN_00402a10(0,0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(4,0,0x7f7fffff);
  FUN_00402a10(1,0);
  return;
}

