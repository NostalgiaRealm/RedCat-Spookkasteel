/*
 * FUN_005e56d0 at 005e56d0
 * undefined FUN_005e56d0(void)
 * Address ranges: 005e56d0-005e57af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e56d0(int param_1,int param_2,int param_3)

{
  facet *pfVar1;
  
  *(bool *)(param_1 + 0x48) = param_3 == 1;
  if (param_3 == 0) {
    if (*(facet **)(param_1 + 0x4c) != (facet *)0x0) {
      pfVar1 = std::locale::facet::_Decref(*(facet **)(param_1 + 0x4c));
      if (pfVar1 != (facet *)0x0) {
        (*(code *)**(undefined4 **)pfVar1)(1);
      }
    }
    if (param_1 != -0x4c) {
      FUN_005e57b0();
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(int *)(param_1 + 0x1c) = param_1 + 0x14;
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 8) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(int *)(param_1 + 0xc) = param_2 + 8;
    *(int *)(param_1 + 0x10) = param_2 + 8;
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x2c) = param_2 + 4;
    *(int *)(param_1 + 0x30) = param_2 + 4;
  }
  *(int *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x40) = DAT_00747b58;
  *(undefined4 *)(param_1 + 0x3c) = DAT_00747b58;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

