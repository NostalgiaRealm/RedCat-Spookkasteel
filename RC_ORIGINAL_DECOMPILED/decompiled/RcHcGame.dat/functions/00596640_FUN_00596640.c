/*
 * FUN_00596640 at 00596640
 * undefined FUN_00596640(void)
 * Address ranges: 00596640-00596690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596640(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  cVar1 = FUN_005969b0();
  *(bool *)(param_1 + 0x21) = cVar1 == '\0';
  if ((*(char *)(param_1 + 0x20) == '\0') && (cVar1 != '\0')) {
    uVar2 = 0;
    FUN_00595470(0);
    FUN_0059be70(uVar2);
  }
  return;
}

