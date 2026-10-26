/*
 * FUN_005a7040 at 005a7040
 * undefined FUN_005a7040(void)
 * Address ranges: 005a7040-005a707c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005a7040(char param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 1;
  if ((DAT_006cad4c != 0) && (param_1 != '\0')) {
    bVar1 = FUN_005a6c60();
  }
  if ((DAT_006cad44 != 0) && (param_2 != '\0')) {
    bVar2 = FUN_005a6e50();
    bVar1 = bVar1 & bVar2;
  }
  return bVar1 == 1;
}

