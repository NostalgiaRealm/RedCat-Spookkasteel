/*
 * FUN_005ad390 at 005ad390
 * undefined FUN_005ad390(void)
 * Address ranges: 005ad390-005ad3cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_005ad390(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  float local_4;
  
  local_4 = 0.0;
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  iVar2 = FUN_0060b449(puVar1,&DAT_0069081c,&local_4);
  *(bool *)param_2 = iVar2 != 1;
  return (float10)local_4;
}

