/*
 * FUN_10002690 at 10002690
 * undefined4 __cdecl FUN_10002690(undefined4 param_1)
 * Address ranges: 10002690-100026d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10002690(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0x4000;
  case 2:
    return 0x2000;
  case 4:
    return 0x1000;
  case 8:
    return 0x800;
  case 0x10:
    return 0x400;
  case 0x18:
    return 0x200;
  case 0x20:
    return 0x100;
  }
}

