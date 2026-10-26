/*
 * FUN_005386d0 at 005386d0
 * undefined FUN_005386d0(void)
 * Address ranges: 005386d0-00538722
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f720 slot 1 for .?AVCAdamMenuItemSelectable@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f720 slot 1 for
   .?AVCAdamMenuItemSelectable@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_005386d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0053b650(param_2);
  if (iVar1 != 0xd) {
    return 0;
  }
  FUN_0053a710(*(undefined4 *)(param_1 + 0x40));
  FUN_00537ed0();
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_0053a6c0();
    return 1;
  }
  FUN_0053a560();
  return 1;
}

