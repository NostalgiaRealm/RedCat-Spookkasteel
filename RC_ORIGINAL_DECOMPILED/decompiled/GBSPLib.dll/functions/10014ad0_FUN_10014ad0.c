/*
 * FUN_10014ad0 at 10014ad0
 * undefined FUN_10014ad0(void)
 * Address ranges: 10014ad0-10014b20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10014ad0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10014310(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_2);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_10014360(puVar1);
    _DAT_1003fde8 = 0;
    return (undefined4 *)0x0;
  }
  *puVar1 = *(undefined4 *)(param_1 + 4);
  return puVar1;
}

