/*
 * FUN_005ef6c0 at 005ef6c0
 * undefined FUN_005ef6c0(void)
 * Address ranges: 005ef6c0-005ef701
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ef6c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  uVar1 = FUN_005eeea0(param_2,param_1 + 0x1c,&DAT_00693460);
  uVar1 = FUN_005e5d20(uVar1);
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_005e5d20(uVar1,puVar2);
  return uVar1;
}

