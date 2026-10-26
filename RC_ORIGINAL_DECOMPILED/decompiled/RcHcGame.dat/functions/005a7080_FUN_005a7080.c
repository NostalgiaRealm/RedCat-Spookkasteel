/*
 * FUN_005a7080 at 005a7080
 * undefined FUN_005a7080(void)
 * Address ranges: 005a7080-005a70b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a7080(char param_1,char param_2)

{
  if ((DAT_006cad4c != (int *)0x0) && (param_1 != '\0')) {
    (**(code **)(*DAT_006cad4c + 0x20))(DAT_006cad4c);
  }
  if ((DAT_006cad44 != (int *)0x0) && (param_2 != '\0')) {
    (**(code **)(*DAT_006cad44 + 0x20))(DAT_006cad44);
  }
  return 1;
}

