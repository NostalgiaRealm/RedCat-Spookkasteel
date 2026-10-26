/*
 * FUN_00407b70 at 00407b70
 * undefined FUN_00407b70(void)
 * Address ranges: 00407b70-00407b9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00407b70(int param_1)

{
  char cVar1;
  
  FUN_00423700();
  cVar1 = FUN_004a0640();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x8c))(0,0,0xbf800000);
  }
  return;
}

